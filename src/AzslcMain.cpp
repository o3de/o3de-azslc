/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#include "docopt/docopt.h"

#include "AzslcReflection.h"
#include "AzslcEmitter.h"
#include "AzslcHomonymVisitor.h"
#include "Texture2DMSto2DCodeMutator.h"

#include <cstddef>
#include <filesystem>
namespace StdFs = std::filesystem;

// versioning
// Correspond to the supported version of the AZSL language.
#define AZSLC_MAJOR    "1"
// For large features or milestones. Minor version allows for breaking changes. Existing tests can change.
#define AZSLC_MINOR    "7"
// For small features or bug fixes. They cannot introduce breaking changes. Existing tests shouldn't change.
#define AZSLC_REVISION "29" // ATOM-16287

namespace AZ::ShaderCompiler
{
    DiagnosticStream verboseCout;
    DiagnosticStream warningCout(std::cerr);
    Endl             azEndl;

    using MapOfStringViewToSetOfString = map< string_view, set<string> >;

    // out argument: classifiedTokens
    // filter: is a predicate for condition to check to pass registration
    template <typename FilterFunction>
    void ClassifyAllTokens(const azslLexer* lexer, MapOfStringViewToSetOfString& classifiedTokens, FilterFunction&& filter = nullptr)
    {
        // loop over all keywords
        const auto& vocabulary = lexer->getVocabulary();
        size_t maxToken = vocabulary.getMaxTokenType();
        set<string> notTypes1;
        for (size_t ii = 0; ii < maxToken; ++ii)
        {
            string token = vocabulary.getLiteralName(ii);
            token = Trim(token, "\"'");  // because AntlR gives us e.g "'float'"
            if (!token.empty()) // empty when there is a complex rule (not a straight unconditional keyword)
            {
                TypeClass tc = AnalyzeTypeClass(TentativeName{token});
                bool accept = true;
                if constexpr (!is_same_v<std::nullptr_t, std::remove_reference_t<decltype(filter)>>)
                {
                    accept = filter(tc);
                }

                if (tc == TypeClass::IsNotType)
                {
                    notTypes1.insert(token);
                }

                if (accept)
                {
                    classifiedTokens[ TypeClass::ToStr(tc) ].emplace( std::move(token) );
                }
            }
        }

        // now. because of names such as StructuredBuffer or matrix, need to have a generic appendix to mean something,
        // they will be classified as IsNotType. So we need to re-attempt analysis by appending something parseable.

        // get a scalar typename from the scalar class:
        string someScalar = *classifiedTokens[TypeClass::ToStr(TypeClass::Scalar)].begin();

        // now we'll use it to construct parseable generic type expressions
        enum class RetryStateMachine
        {
            OneTypeGenericParameter,
            OneTypeAndDimensionGenericParameters,
            OneTypeAndTwoDimensionsGenericParameters,
            End,
        };

        constexpr auto isNotTypeKey = TypeClass::ToStr(TypeClass::IsNotType);
        // completely delete all IsNotType from the classification, and redo it all over.
        set<string> notTypes = std::move(classifiedTokens[isNotTypeKey]);
        classifiedTokens.erase(isNotTypeKey);
        SetMerge(notTypes, notTypes1);

        for (const string& token : notTypes)
        {
            RetryStateMachine state = RetryStateMachine::OneTypeGenericParameter;
            TypeClass tc;
            do
            {
                string attemptedTypeName = token;
                switch (state)
                {
                case RetryStateMachine::OneTypeGenericParameter:
                    attemptedTypeName  += "<" + someScalar + ">";
                    state = RetryStateMachine::OneTypeAndDimensionGenericParameters;
                    break;
                case RetryStateMachine::OneTypeAndDimensionGenericParameters:
                    attemptedTypeName  += "<" + someScalar + ",1>";
                    state = RetryStateMachine::OneTypeAndTwoDimensionsGenericParameters;
                    break;
                case RetryStateMachine::OneTypeAndTwoDimensionsGenericParameters:
                    attemptedTypeName  += "<" + someScalar + "1,1>";
                    state = RetryStateMachine::End;
                    break;
                case RetryStateMachine::End:
                default:
                    // save as is
                    break;
                }
                tc = AnalyzeTypeClass(TentativeName{attemptedTypeName});
            } while (tc == TypeClass::IsNotType && state != RetryStateMachine::End);

            // re-register at the correct place (if passes filter):
            bool accept = true;
            if constexpr (!is_same_v<std::nullptr_t, std::remove_reference_t<decltype(filter)>>)
            {
                accept = filter(tc);
            }

            if (accept)
            {
                classifiedTokens[TypeClass::ToStr(tc)].insert(token);
            }
        } // end for
    }

    void DumpClassifiedTokensToYaml(const MapOfStringViewToSetOfString& classifiedTokens)
    {
        for (const auto& [category, tokens] : classifiedTokens)
        {
            std::cout << category << ":\n";
            for (const string& tokenName : tokens)
            {
                std::cout << "  - \"" << tokenName << "\"\n";
            }
        }
    }

    // outputs information about language keywords related to predefined types
    void DumpPredefinedVocabulary(const azslLexer* lexer)
    {
        MapOfStringViewToSetOfString classifiedTokens;
        ClassifyAllTokens(lexer, classifiedTokens /*out*/, [](TypeClass tc) { return IsPredefinedType(tc); });
        DumpClassifiedTokensToYaml(classifiedTokens);
    }

    //! iterates on tokens and build the line number mapping (from preprocessor line directives)
    void ConstructLineMap(vector<std::unique_ptr<Token>>* allTokens, IntermediateRepresentation* irOut)
    {
        string lastNonEmptyFileName = AzslcException::s_currentSourceFileName;
        for (auto& token : *allTokens)  // auto& because each element is a unique_ptr we can't copy
        {
            if (token->getType() == azslLexer::LineDirective)
            {
                LineDirectiveInfo directiveInfo{0,0};
                const auto lineText = token->getText();
                //                    the sharp
                //                        |  any whitespaces
                //                        | /   optional line token
                //                        | |     |       decimal
                // custom raw string      | |     |          |  optional filename between quotes
                //         delimiter ──┐  | |     |          |        |
                std::regex lineRegex(R"__(#\s*(line\s+)?\s*(\d+)\s*("(.*)")?)__");
                auto matchBegin = std::sregex_iterator(lineText.begin(), lineText.end(), lineRegex);
                // there can be only 1 match, and it HAS to match since AntlR lexer already matched.
                auto& groups = *matchBegin; // 4 groups: [0] is the whole line. [1] is the first parenthesized group, [2] the 2nd etc
                directiveInfo.m_physicalTokenLine = token->getLine();
                directiveInfo.m_forcedLineNumber = std::atoi(groups[2].str().c_str());
                directiveInfo.m_containingFilename = groups[4];
                if (directiveInfo.m_containingFilename.empty())
                {
                    // if we don't have a filename specified on the line, it means the last seen filename is still active.
                    // storing it this way simplifies the lookup algorithm using this data.
                    directiveInfo.m_containingFilename = lastNonEmptyFileName;
                }
                else
                {
                    lastNonEmptyFileName = directiveInfo.m_containingFilename;
                }
                irOut->m_lineMap[token->getLine()] = directiveInfo;
            }
        }
        if (irOut->m_lineMap.find(1) == irOut->m_lineMap.end())
        {
            // if we have no line directives, add one that can be found by lower_bound
            LineDirectiveInfo catchAllDirective{1, 1, AzslcException::s_currentSourceFileName};
            irOut->m_lineMap[1] = catchAllDirective;
        }
    }
}

namespace AZ::ShaderCompiler::Main
{
    using namespace AZ::ShaderCompiler;

    static const char USAGE[] =
    R"(Amazon Shader Language Compiler

        Usage:
          azslc (- | FILE) [--use-spaces] [--unique-idx] [--cb-body] [--root-sig] [--root-const=<size>] [--pad-root-const] [--Zpc] [--Zpr] [--namespace=<nspc>] [--strip-unused-srgs] [--no-ms] [--skip-matrix-padding] [-o OUTFILE]
                           [--W0|--W1|--W2|--W3] [--Wx|--Wx1|--Wx2|--Wx3] [--min-descriptors=<set,spaces,samplers,textures,buffers>] [--max-spaces=<count>]
          azslc (- | FILE) --full [--use-spaces] [--unique-idx] [--cb-body] [--root-sig] [--root-const=<size>] [--pad-root-const] [--Zpc] [--Zpr] [--pack-dx12] [--pack-vulkan] [--pack-opengl] [--namespace=<nspc>] [--strip-unused-srgs] [--no-ms] [--skip-matrix-padding] [-o OUTFILE]
                           [--W0|--W1|--W2|--W3] [--Wx|--Wx1|--Wx2|--Wx3] [--min-descriptors=<set,spaces,samplers,textures,buffers>] [--max-spaces=<count>]
          azslc (- | FILE) --ia [--use-spaces] [--unique-idx] [--cb-body] [--root-sig] [--Zpc] [--Zpr] [--pack-dx12] [--pack-vulkan] [--pack-opengl] [--namespace=<nspc>] [--strip-unused-srgs] [-o OUTFILE]
          azslc (- | FILE) --om [--use-spaces] [--unique-idx] [--cb-body] [--root-sig] [--Zpc] [--Zpr] [--pack-dx12] [--pack-vulkan] [--pack-opengl] [--namespace=<nspc>] [--strip-unused-srgs] [-o OUTFILE]
          azslc (- | FILE) --srg [--use-spaces] [--unique-idx] [--cb-body] [--root-sig] [--root-const=<size>] [--pad-root-const] [--Zpc] [--Zpr] [--pack-dx12] [--pack-vulkan] [--pack-opengl] [--namespace=<nspc>] [--min-descriptors=<set,spaces,samplers,textures,buffers>] [--max-spaces=<count>] [--strip-unused-srgs] [--no-ms] [--skip-matrix-padding] [-o OUTFILE]
          azslc (- | FILE) --options [--use-spaces] [--unique-idx] [--cb-body] [--root-sig] [--Zpc] [--Zpr] [--pack-dx12] [--pack-vulkan] [--pack-opengl] [--namespace=<nspc>] [--strip-unused-srgs] [-o OUTFILE]
          azslc (- | FILE) --semantic [--verbose] [--W0|--W1|--W2|--W3] [--Wx|--Wx1|--Wx2|--Wx3] [--root-const=<size>] [--pad-root-const] [--strip-unused-srgs]
          azslc (- | FILE) --syntax
          azslc (- | FILE) --dumpsym [--strip-unused-srgs] [--no-ms] [--skip-matrix-padding]
          azslc (- | FILE) --ast [--strip-unused-srgs]
          azslc (- | FILE) --bindingdep [--use-spaces] [--unique-idx] [--cb-body] [--Zpc] [--Zpr] [--pack-dx12] [--pack-vulkan] [--pack-opengl] [--namespace=<nspc>] [--max-spaces=<count>] [--strip-unused-srgs] [--no-ms] [--skip-matrix-padding] [-o OUTFILE]
          azslc (- | FILE) --visitsym MQNAME [-d] [-v] [-f] [-r]
          azslc --listpredefined
          azslc -h | --help | --version

        Arguments:
          FILE              Input file (optional if use of stdin)

        Options:
          -o OUTFILE                Output file (optional if use of stdout).
          --use-spaces              Use logical space index per SRG.
          --unique-idx              Use unique indices for all registers. e.g. b0, t0, u0, s0 becomes b0, t1, u2, s3.
          --cb-body                 Emit ConstantBuffer body rather than using <T>
          --root-sig                Emit RootSignature for parameter binding in the shader.
          --root-const=<size>       Maximum size in bytes, of the root constants buffer.
          --pad-root-const          Automatically append padding data to the root constant CB to keep it aligned to 16-byte boundary.
          --Zpc                     Pack matrices in column-major order (default). Cannot be specified together with -Zpr
          --Zpr                     Pack matrices in row-major order. Cannot be specified together with -Zpc
          --pack-dx12               Pack buffers using strict DX12 packing rules. If not specified it will use relaxed packing rules.
          --pack-vulkan             Pack buffers using strict Vulkan packing rules. That's vector-relaxed std140 for uniform and std430 for storage buffers.
          --pack-opengl             Pack buffers using strict OpenGL packing rules. That's vector-strict std140 for uniform and std430 for storage buffers.
          --namespace=<nspc>        The list of namespaces (comma separated, no white spaces) indicates which attribute namespaces are active.
          --ia                      Output a list of vs entries with their Input Assembler layout *and* a list of cs entries with their numthreads.
          --om                      Output the Output Merger layout, not the shader code.
          --srg                     Output the Shader Resource Group layout, not the shader code.
          --options                 Output the list of available shader options for this shader.
          --dumpsym                 Dump symbols
          --syntax                  Check syntax    (no output means no complaints)
          --semantic                Check semantics (no output means no complaints)
          --ast                     Output the syntax tree.
          --bindingdep              Output binding dependencies (what entry points access what external resource).
          --visitsym MQNAME         Output the locations of all relationships of the symbol MQNAME.
          --full                    Output the shader code, Input Assembler layout, Output Merger layout, Shader Resource Group layout,
                                    the list of available shader options, and the binding dependencies.
          --strip-unused-srgs       Strips the unused SRGs.
          --no-ms                   Transforms usage of Texture2DMS/Texture2DMSArray and related functions and semantics into plain Texture2D/Texture2DArray equivalents.
                                    This is useful for allowing shader authors to easily write AZSL code that can be compiled into alternatives
                                    to work with both a multisample render pipeline and a non-MS render pipeline.
[         --skip-matrix-padding]     Skips pre-padding word-sized primitives when preceded by a 3x3 matrix.
          -d                        (Option of --visitsym) Visit direct references
          -v                        (Option of --visitsym) Visit overload-set
          -f                        (Option of --visitsym) Visit family
          -r                        (Option of --visitsym) Visit recursively
          --listpredefined          Output a list of all predefined types in AZSLang.
          --max-spaces=<count>      Will choose register spaces that do not extend past this limit.

        Diagnostic Options:
          --W0                      Suppresses all warnings.
          --W1                      Severe warnings activated. (default)
          --W2                      Maybe significant warnings activated.
          --W3                      Low-confidence-diagnostic warnings activated.
          --Wx                      Treat any currently activated warning as error.
          --Wx1                     Treat level-1 warning as error.
          --Wx2                     Treat up to level-2 warning as error.
          --Wx3                     Treat up to level-3 warning as error.
          --min-descriptors=<set,spaces,samplers,textures,buffers>  Emits a warning if a count overshoots the limit. Use -1 for "no limit".

        Example:
            azslc.exe myshader.azsl --W3 -o out.hlsl --namespace=dx --min-descriptors=-1,10,16,128,-1
            azslc.exe myshader.azsl --namespace=vk --min-descriptors=-1,4 --max-spaces=4
)";
// Note: for now, the docopt C++ port, uses a regexp internally, that crashes the MSVC version of std <regex>.
//       We need a dependence to boost to fix that (or build with GCC-cygwin or clang, or give-up docopt).
//       https://github.com/docopt/docopt.cpp/issues/67

    /// This function will support the --ast option. It uses an AntlR facility and prettifies it.
    void PrintAst(tree::ParseTree* tree, azslParser& parser)
    {
        // not sure why wstring, but I'm going along the AntlR's doc example.
        std::wstring s = antlrcpp::s2ws(tree->toStringTree(&parser));
        // hopefully easy to read indentator
        std::wstring curindent = L"";
        for (wchar_t c : s)
        {
            if (c == L'(')
            {
                std::wcout << "\n";
                curindent += L"  ";
                std::wcout << curindent << c;
            }
            else if (c == L')')
            {
                std::wcout << c << "\n";
                curindent = curindent.substr(0, std::max(2_sz, curindent.size()) - 2);
                std::wcout << curindent;
            }
            else
            {
                std::wcout << c;
            }
        }
        std::wcout << std::endl; // flush
    }

    /// this function supports the --visitsym option
    // @symbolMqn   starting point of symbol homonyms graph discovery. Mqn: mangled qualified name
    void PrintVisitSymbol(IntermediateRepresentation& ir, string_view symbolMqn, RelationshipExtentFlag visitOptions)
    {
        IdAndKind* symbol = ir.GetIdAndKindInfo(QualifiedNameView{symbolMqn});
        if (!symbol)
        {
            std::cerr << "Error: symbol " << symbolMqn.data() << " not found. To list all symbols use --dumpsym option.\n";
            return;
        }
        std::cout << "Symbol found. kind: " << Kind::ToStr(ir.GetKind(symbol->first)) << ". Homonyms list:\n";
        HomonymVisitor hv{[&ir](QualifiedNameView qnv) { return ir.GetKindInfo({{qnv}}); }};
        hv(symbol->first,
           [](const Seenat& at, RelationshipExtent category)
             {
                 std::cout << "- {categ: " << RelationshipExtent::ToStr(category)
                      << ", id: " << Decorate("'", at.m_referredDefinition.GetName())
                      << ", at: ':" << at.m_where.m_line << ":" << at.m_where.m_charPos + 1 << "'"
                      << ", token#: " << at.m_where.m_focusedTokenId << "}\n";
             },
           visitOptions);
    }

    void ParseWarningLevel(const map<string, docopt::value>& args, DiagnosticStream& warningConfig)
    {
        for (auto level : Warn::Enumerate{})
        {
            auto optionString = "--" + string{Warn::ToStr(level)};  // example "--W0"
            auto lookup = args.find(optionString);
            if (lookup != args.end() && lookup->second.asBool())
            {
                if (level >= Warn::Wx)
                {
                    warningConfig.SetAsErrorLevel(level);
                }
                else
                {
                    warningConfig.SetRevealedWarningLevel(level);
                }
            }
        }
    }
}

namespace AZ
{
    string_view GetFileLeafName(string_view path)
    {
        return Slice(path, path.find_last_of("/\\") + 1, -1);
    }

    inline void DoAsserts()
    {
#ifndef NDEBUG
        using namespace AZ::Tests;

        DoAsserts2();
        DoAsserts4();
        DoAsserts5();
        DoAsserts6();
#endif
    }
}

int main(int argc, const char* argv[])
{
    using namespace AZ;
    using namespace AZ::ShaderCompiler::Main;

    DoAsserts();

    int processReturnCode = 0;
    try
    {
        bool constexpr showHelpIfRequested = true;
        // Major.Minor.Revision
        auto versionString = string{"AZSL Compiler " AZSLC_MAJOR "." AZSLC_MINOR "." AZSLC_REVISION " "} + GetCurrentOsName().data();
        map<string, docopt::value> args
            = docopt::docopt(USAGE, { argv + 1, argv + argc }, showHelpIfRequested, versionString);

        auto parseLongCommandLineArgument = [&args](const string& name, string_view errorMessage) -> long
        {
            try
            {
                return args[name].asLong();
            }
            catch (...)
            {
                throw std::runtime_error(errorMessage.data());
            }
        };

        if (args["--listpredefined"].asBool())
        {
            verboseCout.m_on = false;
            ANTLRInputStream is;
            azslLexer lexer{&is};
            DumpPredefinedVocabulary(&lexer);
            return 0;
        }

        verboseCout.m_on = args["--verbose"].asBool();

        bool useStdin = args["-"].asBool();
        // we need to scope a stream object here, to be able to bind a polymorphic reference to it
        std::ifstream ifs;
        if (!useStdin)
        {
            ifs = std::ifstream(args["FILE"].asString()); // try to open as file
        }

        std::istream& in{ useStdin ? std::cin : ifs };
        if (!in.good())
        {
            throw std::runtime_error("input file could not be opened");
        }

        const string inputFileName = useStdin ? "" : args["FILE"].asString();
        AzslcException::s_currentSourceFileName = useStdin ? "stdin" : args["FILE"].asString();

        bool useOutputFile = !!args["-o"];
        const string outputFileName = useOutputFile ? args["-o"].asString() : "";

        ANTLRInputStream input(in);
        azslLexer lexer(&input);
        CommonTokenStream tokens(&lexer);
        IntermediateRepresentation ir(&lexer);
        auto allTokens = lexer.getAllTokens();
        if (lexer.getNumberOfSyntaxErrors() > 0)
        {
            throw std::runtime_error("syntax errors present");
        }
        ConstructLineMap(&allTokens, &ir);
        lexer.reset();
        auto azslParserEventListener = AzslParserEventListener(ir);
        azslParser parser(&tokens);
        parser.removeErrorListeners();
        parser.addErrorListener(&azslParserEventListener);
        tree::ParseTree* tree = parser.compilationUnit();

        if (parser.getNumberOfSyntaxErrors() > 0)
        {
            throw std::runtime_error("grammatic errors present");
        }

        if (args["--syntax"].asBool())
        {  // if we are here with no exception then the syntax pass is valid.
        }
        else  // continue with semantic, and later emission
        {
            if (!useStdin)
            {
                StdFs::path inSource{ args["FILE"].asString() };
                ir.m_metaData.m_insource = StdFs::absolute(inSource).lexically_normal().generic_string();
            }
            tree::ParseTreeWalker walker;
            Texture2DMSto2DCodeMutator texture2DMSto2DCodeMutator(&ir);
            SemaCheckListener semanticListener{&ir};
            warningCout.m_onErrorCallback = [](string_view message)
                                            {
                                                throw AzslcException{WX_WARNINGS_AS_ERRORS, "as-error", string{message}};
                                            };
            ParseWarningLevel(args, warningCout);
            const char* nonValidativeOptions[] = { "--full", "--ia", "--om", "--srg", "--options", "--dumpsym", "--ast", "--bindingdep", "--visitsym", "--strip-unused-srgs" };
            bool anyNonValidativeOption = std::any_of(std::begin(nonValidativeOptions), std::end(nonValidativeOptions),
                                                      [&](auto opt)
                                                      {
                                                          return args[opt].isBool() ? args[opt].asBool() : !!args[opt];
                                                      });
            semanticListener.m_silentPrintExtensions = !args["--semantic"].asBool() || args["--verbose"].asBool(); // print-extensions are useful for interested parties; but not normal operation.
            const bool convertToNoMS = args["--no-ms"].asBool();
            if (convertToNoMS)
            {
                semanticListener.m_functionCallMutator = &texture2DMSto2DCodeMutator;
            }
            warningCout.m_on = !anyNonValidativeOption;  // warnings are interesting for emission, and explicit semantic check modes.

            // Enable attribute namespaces
            if (args["--namespace"])
            {
                auto spaces = Split<vector<string>>(args["--namespace"].asString(), ",");
                std::for_each(spaces.begin(), spaces.end(),
                    [&](const string& space) { ir.AddAttributeNamespaceFilter(space); });
            }

            UnboundedArraysValidator::Options unboundedArraysValidationOptions = {
                args["--use-spaces"].asBool(), args["--unique-idx"].asBool()
            };
            if (args["--max-spaces"])
            {
                unboundedArraysValidationOptions.m_maxSpaces = parseLongCommandLineArgument("--max-spaces", "--max-spaces requires a number. eg --max-spaces=4");
            }
            ir.m_sema.m_unboundedArraysValidator.SetOptions(unboundedArraysValidationOptions);

            // semantic logic and validation
            walker.walk(&semanticListener, tree);

            Options emitOptions;
            emitOptions.m_useLogicalSpaces = args["--use-spaces"].asBool();
            emitOptions.m_useUniqueIndices = args["--unique-idx"].asBool();
            emitOptions.m_emitConstantBufferBody = args["--cb-body"].asBool();
            emitOptions.m_emitRootSig = args["--root-sig"].asBool();
            emitOptions.m_padRootConstantCB = args["--pad-root-const"].asBool();
            emitOptions.m_skipMatrix33Padding = args["--skip-matrix-padding"].asBool();

            if (args["--root-const"])
            {
                emitOptions.m_rootConstantsMaxSize = parseLongCommandLineArgument("--root-const", "--root-const requires a number of bytes. eg --root-const=128");
            }

            if (args["--min-descriptors"])
            {
                sscanf(args["--min-descriptors"].asString().c_str(), "%d,%d,%d,%d,%d",
                       &emitOptions.m_minAvailableDescriptors.m_descriptorsTotal,
                       &emitOptions.m_minAvailableDescriptors.m_spaces,
                       &emitOptions.m_minAvailableDescriptors.m_samplers,
                       &emitOptions.m_minAvailableDescriptors.m_textures,
                       &emitOptions.m_minAvailableDescriptors.m_buffers);
            }

            if (args["--max-spaces"])
            {
                emitOptions.m_maxSpaces = parseLongCommandLineArgument("--max-spaces", "--max-spaces requires a number. eg --max-spaces=4");
            }

            auto isZpc = args["--Zpc"].asBool();
            auto isZpr = args["--Zpr"].asBool();
            if (isZpc && isZpr)
            {
                throw std::runtime_error("Cannot specify --Zpr and --Zpc together, use --help to get usage information");
            }
            else if (isZpr)
            {
                emitOptions.m_emitRowMajor = true;
                emitOptions.m_forceEmitMajor = true;
            }
            else if (isZpc)
            {
                emitOptions.m_emitRowMajor = false; // Default
                emitOptions.m_forceEmitMajor = true;
            }

            if (args["--pack-dx12"].asBool())
            {
                emitOptions.m_packConstantBuffers = AZ::ShaderCompiler::Packing::Layout::DirectXPacking;
                emitOptions.m_packDataBuffers = AZ::ShaderCompiler::Packing::Layout::DirectXStoragePacking;
            }

            if (args["--pack-vulkan"].asBool())
            {
                emitOptions.m_packConstantBuffers = AZ::ShaderCompiler::Packing::Layout::RelaxedStd140Packing;
                emitOptions.m_packDataBuffers = AZ::ShaderCompiler::Packing::Layout::RelaxedStd430Packing;
            }

            if (args["--pack-opengl"].asBool())
            {
                emitOptions.m_packConstantBuffers = AZ::ShaderCompiler::Packing::Layout::StrictStd140Packing;
                emitOptions.m_packDataBuffers = AZ::ShaderCompiler::Packing::Layout::StrictStd430Packing;
            }

            // middle end logic
            MiddleEndConfiguration middleEndConfigration{ emitOptions.m_rootConstantsMaxSize,
                                                          emitOptions.m_packConstantBuffers,
                                                          emitOptions.m_packDataBuffers,
                                                          emitOptions.m_emitRowMajor,
                                                          emitOptions.m_padRootConstantCB,
                                                          emitOptions.m_skipMatrix33Padding };
            ir.MiddleEnd(middleEndConfigration);
            if (convertToNoMS)
            {
                texture2DMSto2DCodeMutator.RunMiddleEndMutations();
            }

            // If ir fails to find any root members in the source, overwrite the m_numOfRootConstants to 0
            if (ir.m_rootConstantStructUID.m_name == "")
            {
                emitOptions.m_rootConstantsMaxSize = 0;
            }
            // intermediate state validation
            ir.Validate();

            bool doEmission = true;

            if (args["--strip-unused-srgs"].asBool())
            {
                ir.RemoveUnusedSrgs();
            }

            if (args["--dumpsym"].asBool())
            {
                DumpSymbols(ir);
                doEmission = false;
            }
            else if (args["--ast"].asBool())
            {
                PrintAst(tree, parser);
                doEmission = false;
            }
            else if (args["--visitsym"])
            {
                using RE = RelationshipExtent;
                RelationshipExtentFlag visitOptions{RE::Self};  // at least self.  + optional things as listed here-under
                static constexpr array<pair<const char*, RE::EnumType>, 4> optToRelation = {{ {"-d", RE::Reference},
                                                                                              {"-f", RE::Family},
                                                                                              {"-v", RE::OverloadSet},
                                                                                              {"-r", RE::Recursive} }};
                for (auto&& possibleOption : optToRelation)
                {
                    visitOptions |= args[possibleOption.first].asBool() ? possibleOption.second : RE::EnumType(0);
                }
                PrintVisitSymbol(ir, args["--visitsym"].asString(), visitOptions);
                doEmission = false;
            }
            else
            {
                bool checkerFlagsPresent = args["--semantic"].asBool() || args["--verbose"].asBool(); // or --syntax but we already exited by now.
                doEmission = !checkerFlagsPresent;
            }

            if (doEmission)
            {
                std::ofstream mainOutFile;

                if (useOutputFile)
                {
                    mainOutFile = std::ofstream(outputFileName);
                    if (!mainOutFile.good())
                    {
                        throw std::runtime_error("output file could not be opened");
                    }
                }

                std::ostream& out{ useOutputFile ? mainOutFile : std::cout };

                CodeReflection reflecter{ &ir, &tokens, out };

                // Lambda to create an output stream and perform an output action
                auto prepareOutputAndCall = [&](const string& suffix, std::function<void(CodeReflection&)> action)
                {
                    string outputName;
                    if (useOutputFile)
                    {
                        outputName = string(GetFileNameWithoutExtension(outputFileName));
                    }
                    else
                    {
                        outputName = string(GetFileNameWithoutExtension(inputFileName));
                    }
                    outputName = outputName + "." + suffix + ".json";

                    std::ofstream outFile = std::ofstream(outputName);
                    if (!outFile.good())
                    {
                        throw std::runtime_error("output file '" + outputName + "' could not be opened");
                    }

                    std::ostream& out{ outFile };
                    CodeReflection reflecter{ &ir, &tokens, out };

                    action(reflecter);
                };

                if (args["--full"].asBool())
                {   // Combine the default emission and the ia, om, srg, options, bindingdep commands
                    CodeEmitter emitter{ &ir, &tokens, out };
                    if (convertToNoMS)
                    {
                        emitter.SetCodeMutator(&texture2DMSto2DCodeMutator);
                    }
                    out << "// HLSL emission by " << versionString << "\n";
                    emitter.Run(emitOptions);

                    prepareOutputAndCall("ia", [&](CodeReflection& r){r.DumpShaderEntries();});
                    prepareOutputAndCall("om", [&](CodeReflection& r) {r.DumpOutputMergerLayout(); });
                    prepareOutputAndCall("srg", [&](CodeReflection& r) {r.DumpSRGLayout(emitOptions); });
                    prepareOutputAndCall("options", [&](CodeReflection& r) {r.DumpVariantList(emitOptions); });
                    prepareOutputAndCall("bindingdep", [&](CodeReflection& r) {r.DumpResourceBindingDependencies(emitOptions); });
                }
                else if (args["--ia"].asBool())
                {   // Reflect the Input Assembler layout and the Compute shader entries
                    reflecter.DumpShaderEntries();
                }
                else if (args["--om"].asBool())
                {   // Reflect the Input Assembler layout
                    reflecter.DumpOutputMergerLayout();
                }
                else if (args["--srg"].asBool())
                {   // Reflect the Shader Resource Groups layout
                    reflecter.DumpSRGLayout(emitOptions);
                }
                else if (args["--options"].asBool())
                {   // Reflect the list of available variant options for this shader
                    reflecter.DumpVariantList(emitOptions);
                }
                else if (args["--bindingdep"].asBool())
                {
                    reflecter.DumpResourceBindingDependencies(emitOptions);
                }
                else
                {   // Emit the shader source code
                    CodeEmitter emitter{ &ir, &tokens, out };
                    if (convertToNoMS)
                    {
                        emitter.SetCodeMutator(&texture2DMSto2DCodeMutator);
                    }
                    out << "// HLSL emission by " << versionString << "\n";
                    emitter.Run(emitOptions);
                }
            }
        }
    }
    catch (const exception& e)
    {
        OutputNestedAndException(e);
        processReturnCode = 1;
    }
    catch (...)
    {
        std::cerr << "Unknown exception" << std::endl;
        processReturnCode = 1;
    }

    return processReturnCode;
}
/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 * 
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#include "AzslcReflection.h"
#include "AzslcPlatformEmitter.h"

#include <tuple>
#include <cmath>

#include <filesystem>
namespace StdFs = std::filesystem;

namespace AZ::ShaderCompiler
{
    template <typename OStreamable>
    Json::Value ToJson(const OStreamable& streamableObj)
    {
        std::ostringstream baseStr;
        baseStr << streamableObj;
        return baseStr.str();
    }

    bool CodeReflection::BuildIAElement(Json::Value& jsonVal, const IdentifierUID& uid, bool allowStruct) const
    {
        auto& varInfo = *m_ir->GetSymbolSubAs<VarInfo>(uid.m_name);

        if (IsPredefinedType(varInfo.GetTypeClass()))
        {
            if (const auto semOpt = varInfo.m_declNode->SemanticOpt)
            {
                // Semantic name and index
                auto semanticName = semOpt->Name->getText();
                const size_t index = semanticName.find_last_not_of("0123456789") + 1;
                const uint32_t semanticIndex = (index == semanticName.length()) ?
                    0 : static_cast<uint32_t>(std::stoi(semanticName.substr(index)));
                semanticName = semanticName.substr(0, index);
                bool isSystemValue = (semOpt->Name->HLSLSemanticSystem() != nullptr);

                // Array dimensions
                Json::Value varArrayDimensions(Json::arrayValue);
                for (const auto dim : varInfo.m_typeInfoExt.GetDimensions())
                {
                    varArrayDimensions.append(Json::Value(dim));
                }

                Json::Value semStream(Json::objectValue);
                semStream["name"]           = ExtractLeaf(uid.m_name).data();
                semStream["fullType"]       = varInfo.GetTypeId().m_name;
                semStream["baseType"]       = varInfo.m_typeInfoExt.m_coreType.m_arithmeticInfo.UnderlyingScalarToStr();
                semStream["semanticName"]   = semanticName;
                semStream["semanticIndex"]  = semanticIndex;
                semStream["systemValue"]    = isSystemValue;
                semStream["dimensions"]     = varArrayDimensions;
                semStream["rows"]           = varInfo.m_typeInfoExt.m_coreType.m_arithmeticInfo.m_rows;
                semStream["cols"]           = varInfo.m_typeInfoExt.m_coreType.m_arithmeticInfo.m_cols;

                jsonVal.append(semStream);

                return true;
            }
            else
            {
                return false;
            }
        }

        if (!allowStruct)
        {
            return false;
        }

        // From the non-predefineds we only support POD (struct) as valid element for the Input Assembler
        auto idKind = m_ir->GetIdAndKindInfo(varInfo.GetTypeId().GetName());
        if (!idKind)
        {
            return false;
        }

        auto& [typeId, typeKind] = *idKind;
        if (typeKind.GetKind() != Kind::Struct)
        {   // It's ok not to have POD attributes in other methods, but those are not valid vs entries so return false here
            return false;
        }

        // Structs are PODs, so all member fields can only be variables
        auto& classInfo = typeKind.GetSubRefAs<ClassInfo>();
        for (const auto& memberVar : classInfo.GetMemberFields())
        {
            if (!BuildIAElement(jsonVal, memberVar, false)) // Second pass prevents structs in structs
            {
                return false;
            }
        }

        return jsonVal.size() > 0;
    }

    bool CodeReflection::BuildOMStruct(const ExtendedTypeInfo& returnTypeRef, string_view semanticOverride, Json::Value& jsonVal, int& semanticIndex) const
    {
        auto idKind = m_ir->GetIdAndKindInfo(returnTypeRef.m_coreType.m_typeId.GetName());
        if (!idKind)
        {
            return false;
        }

        auto&[typeId, typeKind] = *idKind;
        if (typeKind.GetKind() != Kind::Struct)
        {   // It's ok not to have POD attributes in other methods, but those are not valid ps entries so return false here
            return false;
        }

        // Structs are PODs, so all member fields can only be variables
        auto& classInfo = typeKind.GetSubRefAs<ClassInfo>();
        for (const auto& memberVar : classInfo.GetMemberFields())
        {
            auto& attrVarInfo = *m_ir->GetSymbolSubAs<VarInfo>(memberVar.m_name);

            bool buildOMResult = false;
            if (!semanticOverride.empty())
            {
                if (!BuildOMElement(jsonVal, attrVarInfo.m_typeInfoExt, semanticOverride, semanticIndex, false))
                {
                    return false;
                }
            }
            else
            {
                // Semantic name and index
                auto hlslSemantic = attrVarInfo.m_declNode->hlslSemantic();
                if (hlslSemantic == nullptr || hlslSemantic->Name->HLSLSemanticSystem() == nullptr)
                {
                    return false;
                }
                auto[semanticName, semanticIndex, isSystemValue] = ExtractHlslSemantic(hlslSemantic);
                if (!BuildOMElement(jsonVal, attrVarInfo.m_typeInfoExt, semanticName.c_str(), semanticIndex, isSystemValue))
                {
                    return false;
                }
            }
        }

        return jsonVal.size() > 0;
    }

    bool ValidOutputSemanticIndex(string_view semanticName, const int semanticIndex)
    {
        if (EqualNoCase(semanticName, "SV_Target"))
        {
            return (semanticIndex >= 0 && semanticIndex < kMaxRenderTargets);
        }

        return (semanticIndex == 0);
    }

    bool IsValidPSOutput(string_view &semanticOverride, int& semanticIndex, Json::Value& jsonVal, const ExtendedTypeInfo &returnTypeRef)
    {
        if (semanticOverride.empty())
        {   // dxc error: Semantic must be defined for all parameters of an entry function or patch constant function
            return false;
        }

        if (!ValidOutputSemanticIndex(semanticOverride, semanticIndex))
        {   // dxc error: [semanticName] semantic index exceeds maximum (7)
            return false;
        }

        for (auto existingSemantic : jsonVal)
        {
            if (semanticOverride.find(existingSemantic["semanticName"].asCString()) != string::npos &&
                semanticIndex == existingSemantic["semanticIndex"].asInt())
            {   // dxc error: Parameter with semantic [semanticName] has overlapping semantic index at [semanticIndex]
                return false;
            }
        }

        if (!IsArithmetic(returnTypeRef.m_coreType.m_typeClass))
        {   // fxc internal error: compilation aborted unexpectedly
            // dxc hangs
            return false;
        }

        if (returnTypeRef.m_coreType.m_arithmeticInfo.m_rows > 0)
        {   // dxc error: Pixel shader output registers are not indexable.
            return false;
        }

        return true;
    }

    bool CodeReflection::BuildOMElement(Json::Value& jsonVal, const ExtendedTypeInfo& returnTypeRef, string_view semanticOverride, int& semanticIndex, bool isSystemValue) const
    {
        // Structs are allowed as pixel shader output, if the type is registered walk over its attributes here
        if (!IsPredefinedType(returnTypeRef.m_coreType.m_typeClass))
        {
            return BuildOMStruct(returnTypeRef, semanticOverride, jsonVal, semanticIndex);
        }

        if (!IsValidPSOutput(semanticOverride, semanticIndex, jsonVal, returnTypeRef))
        {   // We only want to emit a list of potential pixel shader entry points
            //  so give up here if any
            return false;
        }

        Json::Value semStream (Json::objectValue);

        bool isVoid = returnTypeRef.m_coreType.m_typeClass == TypeClass::Void;

        semStream["baseType"] = isVoid ? "void" : returnTypeRef.m_coreType.m_arithmeticInfo.UnderlyingScalarToStr();

        auto numElements = returnTypeRef.m_coreType.m_arithmeticInfo.m_cols;
        semStream["cols"] = numElements;
        semStream["semanticName"] = semanticOverride.data();

        if (EqualNoCase(semanticOverride, "SV_Target"))
        {
            semStream["format"] = isVoid ? "None" : OutputFormat::ToStr(m_ir->m_metaData.m_outputFormatHint[semanticIndex]).data();;
        }
        else if (StartsWithNoCase(semanticOverride, "SV_Depth"))
        {
            semStream["format"] = OutputFormat::ToStr(OutputFormat::R32).data();
        }
        else if (EqualNoCase(semanticOverride, "SV_Coverage") || EqualNoCase(semanticOverride, "SV_StencilRef"))
        {
            semStream["format"] = OutputFormat::ToStr(OutputFormat::R32).data();
        }
        else if (!(StartsWithNoCase(semanticOverride, "SV_")))
        {
            // Can't end up here, which means there is newly added grammar - it should be handled properly
            assert(false);
        }

        // This behavior conforms to how dxc and fxc layout output semantics.
        // Any output semantic declaration in a structure will override any member variable declarations recursively.
        // The end result is semantic index in order of declaration rather than what is specified per member variable.
        semStream["semanticIndex"] = semanticIndex++;

        semStream["systemValue"] = isSystemValue;

        jsonVal.append(semStream);

        return true;
    }

    Json::Value CodeReflection::GetShaderEntries(const char * const sEntry) const
    {
        Json::Value inputLayouts(Json::arrayValue);

        // Emit all vertex and compute shader entry functions
        for (const auto& symId : m_ir->m_symbols.GetOrderedSymbols())
        {
            const auto& [uid, sym] = *m_ir->m_symbols.GetIdAndKindInfo(symId.m_name);
            const UnqualifiedName funcName{ExtractLeaf(uid.m_name)};

            bool validFunc = ((sym.GetKind() == Kind::Function) && IsGlobal(uid.m_name) &&
                (sEntry == nullptr || funcName == sEntry));
            if (!validFunc)
            {   // It's not a function or at least not the function we are looking for
                continue;
            }

            Json::Value functionEntry(Json::objectValue);
            functionEntry["entry"] = string{RemoveLastParenthesisGroup(funcName)};

            Json::Value semanticStreams(Json::arrayValue);
            const auto& funcSubInfo = sym.GetSubRefAs<FunctionInfo>();
            for (const auto it : funcSubInfo.GetParameters(false))
            {
                if (!it.m_varId.IsEmpty())
                {
                    validFunc &= BuildIAElement(semanticStreams, it.m_varId, true/*Allow structs on the first level*/);
                }
            }

            // Optional - compute shader entries also have [numthreads] attribute
            auto attrInfo = m_ir->m_symbols.GetAttribute(uid, "numthreads");
            if (attrInfo)
            {
                Json::Value numThreads(Json::arrayValue);
                for (auto arg : attrInfo->m_argList)
                {
                    if (!holds_alternative<ConstNumericVal>(arg))
                    {
                        continue;                        
                    }

                    const auto& constVal = get<ConstNumericVal>(arg);
                    if (!holds_alternative<int32_t>(constVal) && !holds_alternative<uint32_t>(constVal))
                    {
                        continue;
                    }

                    auto threadCount = ExtractValueAsInt64(constVal, std::numeric_limits<int64_t>::min());
                    if (threadCount <= 0)
                    {
                        continue;
                    }

                    numThreads.append(Json::Value(static_cast<int>(threadCount)));
                }

                if (numThreads.size() == 3)
                {   // We expect exactly 3 numbers that specify the ThreadGroup dimensions
                    functionEntry["numthreads"] = numThreads;
                }
            }

            // the shader attribute is the way to declare raytracing entrypoints so they are valid entries
            if (validFunc || m_ir->m_symbols.GetAttribute(uid, "shader"))
            {
                functionEntry["streams"] = semanticStreams;
                inputLayouts.append(functionEntry);
            }
        }

        return inputLayouts;        
    }

    Json::Value CodeReflection::GetOutputMergerLayout(const char * const psEntry) const
    {
        Json::Value outputLayouts(Json::arrayValue);

        // Emit all pixel shader entry functions
        for (const auto& [uid, sym] : m_ir->GetOrderedSymbolsOfSubType_2<FunctionInfo>())
        {
            UnqualifiedNameView funcName = ExtractLeaf(uid.m_name);

            bool validFunc = (IsGlobal(uid.m_name)
                              && (psEntry == nullptr || strcmp(psEntry, funcName.data()) == 0));
            if (!validFunc)
            {   // It's not the function we are looking for
                continue;
            }

            Json::Value functionEntry(Json::objectValue);
            functionEntry["entry"] = string{RemoveLastParenthesisGroup(funcName)};

            Json::Value renderTargets(Json::arrayValue);
            const auto& funcSubInfo = *sym;

            string semanticName("");
            int semanticIndex = 0;
            bool isSystemValue = false;
            if (funcSubInfo.m_defNode->hlslSemantic())
            {
                tie (semanticName, semanticIndex, isSystemValue) = ExtractHlslSemantic(funcSubInfo.m_defNode->hlslSemantic());
            }

            validFunc &= BuildOMElement(renderTargets, funcSubInfo.m_returnType, semanticName, semanticIndex, isSystemValue);

            int depthFoundNTimes = 0;
            for (auto existingSemantic : renderTargets)
            {
                if (existingSemantic["semanticName"].asString().find("Depth") != string::npos)
                {
                    depthFoundNTimes++;
                }
            }
            // dxc error: Pixel Shader only allows one type of depth semantic to be declared
            validFunc &= (depthFoundNTimes <= 1);

            if (validFunc)
            {
                functionEntry["renderTargets"] = renderTargets;
                outputLayouts.append(functionEntry);
            }
        }

        return outputLayouts;        
    }

    void CodeReflection::DumpOutputMergerLayout(const char * const psEntry) const
    {
        Json::Value iaRoot(Json::objectValue);
        iaRoot["meta"] = "Output Merger Layout exported by AZSLc";
        iaRoot["source"] = m_ir->OriginalSource();
        iaRoot["material"] = "Output Merger Layout exported by AZSLc";

        iaRoot["outputLayouts"] = GetOutputMergerLayout(psEntry);
        m_out << iaRoot;
    }

    void CodeReflection::DumpShaderEntries() const
    {
        Json::Value entries(Json::objectValue);
        entries["meta"] = "Shader entries exported by AZSLc";
        entries["source"] = m_ir->OriginalSource();
        entries["material"] = "Unknown material";

        entries["inputLayouts"] = GetShaderEntries(nullptr);
        m_out << entries;                
    }

    uint32_t CodeReflection::GetViewStride(const IdentifierUID& memberId, const AZ::ShaderCompiler::Packing::Layout& layoutPacking, const Options& options) const
    {
        const auto* varInfoPtr = m_ir->GetSymbolSubAs<VarInfo>(memberId.m_name);
        if (!varInfoPtr)
        {
            return 0;
        }

        assert(IsViewType(varInfoPtr->GetTypeClass()));

        if (varInfoPtr->m_typeInfoExt.m_genericParameter.IsEmpty())
        {
            if (varInfoPtr->GetTypeClass() == TypeClass::ByteAddressBuffer)
            {
                return 4;
            }
            else
            {
                // Unspecified generic types default to float4
                return 16;
            }
        }

        const auto genericType = varInfoPtr->m_typeInfoExt.m_genericParameter;
        if (!IsUserDefined(genericType.m_typeClass))
        {
            assert(!genericType.m_arithmeticInfo.IsEmpty());
            return genericType.m_arithmeticInfo.GetTotalSize();
        }

        Json::Value emptyLayout(Json::arrayValue);
        const auto& structMember = genericType.m_typeId;
        uint32_t startAt = 0;
        return BuildUserDefinedMemberLayout(emptyLayout, structMember, options, layoutPacking, startAt, "");
    }

    uint32_t CodeReflection::BuildUserDefinedMemberLayout(Json::Value& membersContainer,
                                                          const IdentifierUID& exportedTypeId,
                                                          const Options& options,
                                                          const AZ::ShaderCompiler::Packing::Layout layoutPacking,
                                                          uint32_t& startAt, string_view namePrefix) const
    {
        // Alignment start
        uint32_t tempOffset = startAt = Packing::AlignOffset(layoutPacking, startAt, Packing::Alignment::asStructStart, 0, 0);

        uint32_t largestMemberSize = 0;

        const auto* classInfo = m_ir->GetSymbolSubAs<ClassInfo>(exportedTypeId.m_name);
        for (const auto& memberField : classInfo->GetMemberFields())
        {
            const auto currentStride = tempOffset;
            BuildMemberLayout(membersContainer, namePrefix, memberField, false, options, GetExtendedLayout(layoutPacking), tempOffset);
            largestMemberSize = std::max(largestMemberSize, tempOffset - currentStride);
        }

        tempOffset = Packing::AlignStructToLargestMember(layoutPacking, tempOffset, largestMemberSize);

        // Alignment end
        tempOffset = Packing::AlignOffset(layoutPacking, tempOffset, Packing::Alignment::asStructEnd, 0, 0);

        // Total size equals the end offset less the starting address
        return tempOffset - startAt;   
    }

    uint32_t CodeReflection::BuildMemberLayout(Json::Value& membersContainer,
                                               string_view namePrefix,
                                               const IdentifierUID& memberId,
                                               const bool isArrayItr,
                                               const Options& options,
                                               const AZ::ShaderCompiler::Packing::Layout layoutPacking,
                                               uint32_t& offset) const
    {
        const auto* varInfoPtr = m_ir->GetSymbolSubAs<VarInfo>(memberId.m_name);
        uint32_t size = 0;

        if (varInfoPtr)
        {
            const auto& varInfo = *varInfoPtr;

            // View types should only be called from GetViewStride until we decide to support them as struct constants
            assert(!IsChameleon(varInfo.GetTypeClass()));

            auto exportedType = varInfo.m_typeInfoExt.m_coreType;

            if (!exportedType.IsPackable())
            {
                throw std::logic_error{"reflection error: unpackable type ("
                    + exportedType.m_typeId.m_name
                    + ") in layout member "
                    + memberId.m_name};
            }
            TypeClass varClass = exportedType.m_typeClass;
            bool isPrefedined  = IsPredefinedType(varClass);
            Json::Value memberLayout(Json::objectValue);
            const auto& shortName = memberId.GetNameLeaf();
            memberLayout["constantId"]       = isArrayItr ? namePrefix.data() : namePrefix.data() + shortName;
            memberLayout["qualifiedName"]    = memberId.m_name;
            memberLayout["typeKind"]         = isPrefedined ? "Predefined" :
                IsProductType(varClass) ? "Struct"    : TypeClass::ToStr(varClass).data();
            memberLayout["typeName"]         = varInfo.GetTypeId().m_name;         

            size = varInfo.m_typeInfoExt.GetTotalSize(layoutPacking, options.m_emitRowMajor);
            auto startAt = offset;

            // Alignment start
            if (exportedType.m_arithmeticInfo.IsMatrix() || exportedType.m_arithmeticInfo.IsVector())
            {
                const auto rows = exportedType.m_arithmeticInfo.m_rows;
                const auto cols = exportedType.m_arithmeticInfo.m_cols;
                const auto packAlignment = exportedType.m_arithmeticInfo.IsMatrix() ? Packing::Alignment::asMatrixStart : Packing::Alignment::asVectorStart;
                startAt = offset = Packing::AlignOffset(layoutPacking, offset, packAlignment, rows, cols);
            }

            uint32_t totalArraySize = 1;
            ArrayDimensions listOfArrayDim = varInfo.m_typeInfoExt.GetDimensions();
            std::reverse(listOfArrayDim.m_dimensions.begin(), listOfArrayDim.m_dimensions.end());
            for (const auto dim : varInfo.m_typeInfoExt.GetDimensions())
            {
                totalArraySize *= dim;
            }

            if (varInfo.m_typeInfoExt.IsArray() && !isArrayItr)
            {
                startAt = offset = Packing::AlignOffset(layoutPacking, offset, Packing::Alignment::asArrayStart, 0, 0);
                uint32_t arrayOffset = startAt;
                for (uint32_t i = 0; i < totalArraySize; i++)
                {
                    // Construct dimension, [m][n], [p][q][r], etc
                    string strDimIndex = "";
                    int prevDim = 1;
                    for (const auto dim : listOfArrayDim)
                    {
                        // If the array dimension is 3, construct index for an element i in array [x][y][z]
                        strDimIndex = "[" + std::to_string((i / prevDim) % dim) + "]" + strDimIndex;
                        prevDim *= dim;
                    }

                    if (!m_ir->GetIdAndKindInfo(varInfo.GetTypeId().m_name))
                    {
                        continue;
                    }

                    // If array is a structure
                    if (IsProductType(varClass))
                    {
                        size = BuildUserDefinedMemberLayout(membersContainer, exportedType.m_typeId, options, layoutPacking, startAt = offset,
                            (namePrefix.data() + shortName + strDimIndex + "."));

                        offset = Packing::PackNextChunk(layoutPacking, size, startAt);

                        // Add packing into array
                        size = Packing::PackIntoArray(layoutPacking, size, varInfo.m_typeInfoExt.GetDimensions());
                    }
                    else
                    {
                        // Alignment start
                        startAt = offset = Packing::AlignOffset(layoutPacking, offset, Packing::Alignment::asArrayStart, 0, 0);

                        // We want to calculate the offset for each array element
                        uint32_t tempOffset = startAt;

                        BuildMemberLayout(membersContainer, (namePrefix.data() + shortName + strDimIndex), memberId, true, options, layoutPacking, tempOffset);

                        // Alignment end
                        tempOffset = Packing::AlignOffset(layoutPacking, tempOffset, Packing::Alignment::asArrayEnd, 0, 0);
                        size = tempOffset - startAt;

                        offset = Packing::PackNextChunk(layoutPacking, size, startAt);

                        // Add packing into array
                        size = Packing::PackIntoArray(layoutPacking, size, varInfo.m_typeInfoExt.GetDimensions());
                    }
                }
                startAt = arrayOffset;
            }
            else if (IsProductType(varClass))
            {
                size = BuildUserDefinedMemberLayout(membersContainer, exportedType.m_typeId, options, layoutPacking, startAt, 
                                          (namePrefix.data() + shortName + "."));

                // Add packing into array
                size = Packing::PackIntoArray(layoutPacking, size, varInfo.m_typeInfoExt.GetDimensions());
            }
            else if (varInfo.m_typeInfoExt.IsArray())
            {
                // Get the size of one element from total size
                size = varInfo.m_typeInfoExt.GetSingleElementSize(layoutPacking, options.m_emitRowMajor);
            }
            else if (varInfo.GetTypeClass() == TypeClass::Enum)
            {
                auto* asClassInfo = m_ir->GetSymbolSubAs<ClassInfo>(varInfo.GetTypeId().GetName());
                size = asClassInfo->Get<EnumerationInfo>()->m_underlyingType.m_arithmeticInfo.GetBaseSize();
            }

            offset = Packing::PackNextChunk(layoutPacking, size, startAt);

            // Alignment end
            if (exportedType.m_arithmeticInfo.IsMatrix() || exportedType.m_arithmeticInfo.IsVector())
            {
                const auto rows = exportedType.m_arithmeticInfo.m_rows;
                const auto cols = exportedType.m_arithmeticInfo.m_cols;
                const auto packAlignment = exportedType.m_arithmeticInfo.IsMatrix() ? Packing::Alignment::asMatrixEnd : Packing::Alignment::asVectorEnd;
                offset = Packing::AlignOffset(layoutPacking, offset, packAlignment, rows, cols);
            }

            if (varInfo.m_typeInfoExt.IsArray())
            {
                offset = Packing::AlignOffset(layoutPacking, offset, Packing::Alignment::asArrayEnd, 0, 0);
            }

            size = offset - startAt;

            // Array dimensions
            Json::Value varArrayDimensions(Json::arrayValue);
            for (const auto dim : varInfo.m_typeInfoExt.GetDimensions())
            {
                varArrayDimensions.append(Json::Value(dim));
            }

            memberLayout["constantByteOffset"]   = startAt;
            memberLayout["constantByteSize"]     = size;
            memberLayout["typeDimensions"]       = varArrayDimensions;

            membersContainer.append(memberLayout);
        }

        return size;
    }

    void CodeReflection::DumpVariantList(const Options& options) const
    {
        m_out << GetVariantList(options);
    }

    static void ReflectBinding(Json::Value& output, const RootSigDesc::SrgParamDesc& bindInfo)
    {
        output["count"] = (bindInfo.m_isUnboundedArray) ? -1 : bindInfo.m_registerRange;
        output["index"] = bindInfo.m_registerBinding.m_pair[BindingPair::Set::Untainted].m_registerIndex;
        output["space"] = bindInfo.m_registerBinding.m_pair[BindingPair::Set::Untainted].m_logicalSpace;
        output["index-merged"] = bindInfo.m_registerBinding.m_pair[BindingPair::Set::Merged].m_registerIndex;
        output["space-merged"] = bindInfo.m_registerBinding.m_pair[BindingPair::Set::Merged].m_logicalSpace;
    }

    void CodeReflection::DumpSRGLayout(const Options& options) const
    {
        uint32_t numOf32bitConst = GetNumberOf32BitConstants(options, m_ir->m_rootConstantStructUID);
        RootSigDesc rootSig = BuildSignatureDescription(options, numOf32bitConst);

        Json::Value srgRoot(Json::objectValue);
        srgRoot["meta"] = "SRGs layout exported by AZSLc";
        srgRoot["source"] = m_ir->OriginalSource();

        Json::Value srgLayouts(Json::arrayValue);

        // Reflect all SRGs
        for (auto& [srgUid, srgInfo] : m_ir->GetOrderedSymbolsOfSubType_2<SRGInfo>())
        {
            Json::Value srgLayout(Json::objectValue);
            srgLayout["id"] = srgInfo->m_declNode->Name->getText();

            // Try to locate the original filename where this SRG is declared
            auto lineBefore = m_ir->m_lineMap.lower_bound(srgInfo->m_declNode->getStart()->getLine());
            if (lineBefore != m_ir->m_lineMap.begin() && (lineBefore != m_ir->m_lineMap.end() || m_ir->m_lineMap.size() > 0))
            {
                lineBefore--;
                const string& containing = lineBefore->second.m_containingFilename;
                srgLayout["originalFileName"]    = StdFs::absolute(containing).lexically_normal().generic_string();
                srgLayout["originalLineNumber"]  = static_cast<Json::Value::UInt64>(lineBefore->second.m_forcedLineNumber); // TODO: fix according to following concept:
                /*auto nearestLineDirective = lineBefore->second.m_forcedLineNumber;
                srgLayout["originalLineNumber"]  =  CurrentLine - nearestLineDirective;*/
            }
            auto semantic = m_ir->GetSymbolSubAs<ClassInfo>(srgInfo->m_semantic->GetName())->Get<SRGSemanticInfo>();

            srgLayout["bindingSlot"] = *semantic->m_frequencyId; // Semantic check has asserted that we have it, so we can dereference here.

            if (srgInfo->m_shaderVariantFallback)
            {
                srgLayout["fallbackSize"] = *semantic->m_variantFallback;
                srgLayout["fallbackName"] = srgInfo->m_shaderVariantFallback->GetNameLeaf();
            }

            Json::Value buffersList(Json::arrayValue);
            Json::Value imagesList(Json::arrayValue);

            // External CBVs
            for (const auto& cId : srgInfo->m_CBs)
            {
                const auto& bindInfo = rootSig.Get(cId);

                uint32_t strideSize = GetViewStride(cId, options.m_packConstantBuffers, options);

                auto& srgMemberInfo = *m_ir->GetSymbolSubAs<VarInfo>(cId.m_name);
                assert(srgMemberInfo.IsConstantBuffer());
                string typeNameLeaf = srgMemberInfo.m_typeInfoExt.GetDisplayShortName();

                Json::Value dataView(Json::objectValue);
                dataView["id"] = ExtractLeaf(cId.m_name).data();
                dataView["type"] = typeNameLeaf;
                dataView["usage"] = "Read";
                dataView["stride"] = strideSize;
                ReflectBinding(dataView, bindInfo);

                buffersList.append(dataView);
            }

            // SRVs and UAVs
            for (const auto& tId : srgInfo->m_srViews)
            {
                const auto& bindInfo = rootSig.Get(tId);

                uint32_t strideSize = GetViewStride(tId, options.m_packDataBuffers, options);

                auto& srgMemberInfo = *m_ir->GetSymbolSubAs<VarInfo>(tId.m_name);
                auto viewName = srgMemberInfo.m_typeInfoExt.GetDisplayShortName();
                bool isBufferView = IsViewTypeBuffer(srgMemberInfo.GetTypeClass());
                bool isReadWriteView = IsReadWriteView(viewName);

                // Relaxed vector std140 and std430 packing rules
                if (isBufferView && options.m_packConstantBuffers == AZ::ShaderCompiler::Packing::Layout::RelaxedStd140Packing)
                {
                    strideSize = Packing::AlignUp(strideSize, Packing::s_bytesPerRegister);
                }

                Json::Value dataView(Json::objectValue);
                dataView["id"]     = ExtractLeaf(tId.m_name).data();
                dataView["type"]   = viewName;
                dataView["usage"]  = (isReadWriteView) ? "ReadWrite" : "Read";
                ReflectBinding(dataView, bindInfo);
                dataView["stride"] = strideSize;

                if (isBufferView)
                {
                    buffersList.append(dataView);
                }
                else
                {
                    imagesList.append(dataView);
                }
            }

            srgLayout["inputsForBufferViews"] = buffersList;
            srgLayout["inputsForImageViews"] = imagesList;

            Json::Value samplersList(Json::arrayValue);
            for (const auto& sId : srgInfo->m_samplers)
            {
                const auto& bindInfo = rootSig.Get(sId);

                const auto* srgMemberInfo = m_ir->GetSymbolSubAs<VarInfo>(sId.m_name);
                const auto& samplerInfo = *srgMemberInfo->m_samplerState;

                Json::Value samplerJson(Json::objectValue);
                samplerJson["Id"] = sId.GetNameLeaf();
                samplerJson["isDynamic"] = samplerInfo.m_isDynamic;
                ReflectBinding(samplerJson, bindInfo);

                if (!samplerInfo.m_isDynamic)
                {
                    // Emit predefined enums for static sampler
                    samplerJson["anisotropyMax"] = samplerInfo.m_anisotropyMax;
                    samplerJson["anisotropyEnable"] = samplerInfo.m_anisotropyEnable;
                    samplerJson["filterMin"] = (samplerInfo.m_filterMin == SamplerStateDesc::FilterMode::Linear) ? "Linear" : "Point";
                    samplerJson["filterMag"] = (samplerInfo.m_filterMag == SamplerStateDesc::FilterMode::Linear) ? "Linear" : "Point";
                    samplerJson["filterMip"] = (samplerInfo.m_filterMip == SamplerStateDesc::FilterMode::Linear) ? "Linear" : "Point";
                    samplerJson["reductionType"] = ToJson(samplerInfo.m_reductionType);
                    samplerJson["comparisonFunc"] = ToJson(samplerInfo.m_comparisonFunc);
                    samplerJson["addressU"] = ToJson(samplerInfo.m_addressU);
                    samplerJson["addressV"] = ToJson(samplerInfo.m_addressV);
                    samplerJson["addressW"] = ToJson(samplerInfo.m_addressW);
                    samplerJson["mipLodMin"] = samplerInfo.m_mipLodMin;
                    samplerJson["mipLodMax"] = samplerInfo.m_mipLodMax;
                    samplerJson["mipLodBias"] = samplerInfo.m_mipLodBias;
                    samplerJson["borderColor"] = ToJson(samplerInfo.m_borderColor);
                    samplerJson["isComparison"] = samplerInfo.m_isComparison;
                }

                samplersList.append(samplerJson);
            }
            srgLayout["inputsForSamplers"] = samplersList;

            // SRG Constants
            // Call extracted func for rgInfo->m_implicitStruct
            if (!srgInfo->m_implicitStruct.GetMemberFields().empty())
            {
                const auto& layoutPacking = options.m_packConstantBuffers;
                uint32_t offset = 0;
                Json::Value structLayout(Json::arrayValue);

                for (const auto& srgConst : srgInfo->m_implicitStruct.GetMemberFields())
                {
                    BuildMemberLayout(structLayout, "", srgConst, false, options, layoutPacking, offset);
                }

                srgLayout["inputsForSRGConstants"] = structLayout;

                // CBuffer for SRG Constants
                {
                    const auto& bindInfo = rootSig.Get(srgUid);

                    Json::Value dataView(Json::objectValue);
                    dataView["id"] = ExtractLeaf(srgUid.m_name).data();
                    dataView["usage"] = "Read";
                    ReflectBinding(dataView, bindInfo);

                    srgLayout["bufferForSRGConstants"] = dataView;
                }
            }

            srgLayouts.append(srgLayout);

        }
        srgRoot["ShaderResourceGroups"] = srgLayouts;

        Json::Value rootConstantLayout(Json::objectValue);

        if (options.m_rootConstantsMaxSize > 0)
        {
            const auto& layoutPacking = options.m_packConstantBuffers;
            Json::Value structLayout(Json::arrayValue);
            uint32_t startAt = 0;
            uint32_t strideSize = BuildUserDefinedMemberLayout(structLayout, m_ir->m_rootConstantStructUID, options, options.m_packConstantBuffers, startAt, "");
            strideSize = GetPlatformEmitter().AlignRootConstants(strideSize);

            rootConstantLayout["inputsForInlineConstants"] = structLayout;

            const auto& bindInfo = rootSig.Get(m_ir->m_rootConstantStructUID);
            Json::Value dataView(Json::objectValue);
            dataView["id"] = ExtractLeaf(m_ir->m_rootConstantStructUID.m_name).data();
            dataView["usage"] = "Read";
            ReflectBinding(dataView, bindInfo);
            dataView["sizeInBytes"] = strideSize;

            rootConstantLayout["bufferForInlineConstants"] = dataView;

            // Add the layout to Root node
            srgRoot["InlineConstantBuffer"] = rootConstantLayout;
        }

        m_out << srgRoot;
    }

    bool CodeReflection::IsNonOverloaded(const IdentifierUID& uid) const
    {                      // func() to func
                           // because in AZIR mangling scheme, the parenthesized name is the concrete function name, and the core name is the overload-set name.
        string_view core = RemoveLastParenthesisGroup(uid.GetName());
        auto* coreSymbol = m_ir->GetSymbolSubAs<OverloadSetInfo>(QualifiedNameView{core});
        return !coreSymbol || !coreSymbol->HasOverloads();
    }

    bool CodeReflection::IsPotentialEntryPoint(const IdentifierUID& uid) const
    {
        // only global and non overloaded, potentially qualifies. we can also add --ia detectors.
        return m_ir->GetKind(uid) == Kind::Function && IsGlobal(uid.GetName()) && IsNonOverloaded(uid);
    }

    void CodeReflection::DiscoverTopLevelFunctionDependencies(const IdentifierUID& uid,
                                                              set<IdentifierUID>& output,
                                                              const MapOfBeginToSpanAndUid& scopes,
                                                              set<IdentifierUID>&& funcStack_ = {}) const
    {
        // discover references:
        auto* kindInfo = m_ir->GetKindInfo(uid);
        for (auto& seenat : kindInfo->GetSeenats())
        {
            assert(uid == seenat.m_referredDefinition);
            // TODO: the assumption that intervals where distinct doesnt hold anymore now that we have unnamed scopes
            auto intervalIter = FindInterval(scopes, seenat.m_where.m_focusedTokenId, [](ssize_t key, auto& value)
                                             {
                                                 return value.first.properlyContains({key, key});
                                             });
            if (intervalIter != scopes.cend())
            {
                const IdentifierUID& encloser = intervalIter->second.second;
                if (m_ir->GetKind(encloser) == Kind::Function)
                {
                    // detect cycles:
                    if (funcStack_.find(encloser) != funcStack_.end())
                    {
                        throw AzslcEmitterException(EMITTER_RECURSION_NOT_PERMITTED,
                                                    seenat.m_where.m_line, seenat.m_where.m_charPos,
                                                    ConcatString("Recursion not permitted in AZSL. ", uid.m_name, " in ", encloser.m_name));
                    }
                    if (IsPotentialEntryPoint(encloser))  // reduce a bit the amount of unused data by filtering by potential entry points
                    {
                        output.insert(encloser);
                    }
                    // recurse
                    auto it = funcStack_.insert(encloser).first;  // push
                    DiscoverTopLevelFunctionDependencies(encloser, output, scopes, CastToRValueReference(funcStack_));
                    funcStack_.erase(it);  // pop
                }
            }
            else // no interval found -> assume global scope
            {
                // the only sort of reference that can appear outside of any scope are within global variable initializers.
                antlr4::ParserRuleContext* syntaxContext = m_ir->m_tokenMap.GetNode(seenat.m_where.m_focusedTokenId);
                auto* varInitializerContext = ExtractInitializerParent(syntaxContext);
                if (varInitializerContext) // if null, it's highly suspicious though. what syntax construct allows that ?
                {
                    auto* declarator = polymorphic_downcast<AstUnnamedVarDecl*>(varInitializerContext->parent);
                    // reconstruct the name to get the UID
                    UnqualifiedName declaredIdentifier{ExtractVariableNameIdentifier(declarator)->getText()};
                    QualifiedNameView globalScope{"/"};
                    QualifiedName variable = MakeFullyQualified(globalScope, declaredIdentifier);
                    auto& [identified, kind] = *m_ir->GetIdAndKindInfo(variable);  // unchecked dereference here, because symbol presence is an invariant
                    assert(kind.GetKind() == Kind::Variable);  // what else
                    DiscoverTopLevelFunctionDependencies(identified, output, scopes, CastToRValueReference(funcStack_)); // continue tracking
                }
            }
        }
    }

    void CodeReflection::DumpResourceBindingDependencies(const Options& options) const
    {
        uint32_t numOf32bitConst  = GetNumberOf32BitConstants(options, m_ir->m_rootConstantStructUID);
        RootSigDesc rootSignature = BuildSignatureDescription(options, numOf32bitConst);

        // prepare a lookup acceleration data structure for reverse mapping tokens to scopes.
        MapOfBeginToSpanAndUid scopeStartToFunctionIntervals;
        for (auto& [uid, interval] : m_ir->m_scope.m_scopeIntervals)
        {
            if (m_ir->GetKind(uid) == Kind::Function)  // Filter out unnamed blocs and types. We need a set of disjoint intervals as an invariant for the next algorithm.
            {
                // the reason to choose .a as the key is so we can query using Infimum (sort of lower_bound)
                scopeStartToFunctionIntervals[interval.a] = std::make_pair(interval, uid);
            }
        }

        Json::Value srgRoot(Json::objectValue);
        // Order the reflection by SRG for convenience
        for (const RootSigDesc::SrgDesc& srgDesc : rootSignature.m_srGroups)
        {
            auto uid = srgDesc.m_uid;
            if (uid.m_name != m_ir->m_rootConstantStructUID.m_name) // Since root constant isn't part of SRG resource, and just an alias of SRG members, skip for now.
            {
                auto* srgInfo = m_ir->GetKindInfo(uid)->GetSubAs<SRGInfo>();
                Json::Value srgMember(Json::objectValue);

                // functions to factorize node output
                auto dependencyListToJson = [](const set<IdentifierUID>& dependencyList) -> Json::Value
                {
                    Json::Value allEntriesJson(Json::arrayValue);
                    for_each(dependencyList.begin(), dependencyList.end(), [&allEntriesJson](const IdentifierUID& id)
                                                                           {
                                                                               allEntriesJson.append(string{RemoveLastParenthesisGroup(id.GetNameLeaf())});
                                                                           });
                    return allEntriesJson;
                };

                auto makeJsonNodeForOneResource = [&dependencyListToJson](const set<IdentifierUID>& dependencyList,
                    const RootSigDesc::SrgParamDesc& binding,
                    const Json::Value& allConstants)
                {
                    Json::Value resourceJsonValue(Json::objectValue);
                    resourceJsonValue["dependentFunctions"] = dependencyListToJson(dependencyList);
                    if (!allConstants.empty())
                    {
                        resourceJsonValue["participantConstants"] = allConstants;
                    }
                    BindingPair::Set bindingQuery = BindingPair::Set::Untainted;
                    resourceJsonValue["binding"]["type"] = RootParamType::ToStr(binding.m_type).data();
                    ReflectBinding(resourceJsonValue["binding"], binding);
                    return resourceJsonValue;
                };

                optional<RootSigDesc::SrgParamDesc> srgConstants;  // if we have SRG Constants we treat them later
                for (auto& srgParam : srgDesc.m_parameters)
                {
                    if (srgParam.m_type == RootParamType::SrgConstantCB)
                    {
                        assert(!srgConstants); // can't have multiple of those per SRG.
                        srgConstants = srgParam;
                    }
                    else
                    {
                        set<IdentifierUID> dependencyList;
                        DiscoverTopLevelFunctionDependencies(srgParam.m_uid, dependencyList, scopeStartToFunctionIntervals);
                        srgMember[srgParam.m_uid.GetNameLeaf()] = makeJsonNodeForOneResource(dependencyList, srgParam, {});
                    }
                }
                // SRG constants (and the variant-fallback) are in one special constant buffer
                if (srgConstants || srgInfo->m_shaderVariantFallback)
                {
                    Json::Value allConstants(Json::arrayValue);
                    // make a merged list of dependencies, shared by all individual constants.
                    set<IdentifierUID> dependencyList;
                    for (auto& srgConstant : srgInfo->m_implicitStruct.GetMemberFields())
                    {
                        allConstants.append({ srgConstant.GetNameLeaf() });
                        DiscoverTopLevelFunctionDependencies(srgConstant, dependencyList, scopeStartToFunctionIntervals);
                    }
                    // variant fallback support
                    if (srgInfo->m_shaderVariantFallback)
                    {
                        // no need to append m_shaderVariantFallback to allConstants because the fallback already exists in the memberFields
                        // all option variables converge to the fallback
                        for (auto& [varUid, varSub] : m_ir->GetOrderedSymbolsOfSubType_2<VarInfo>())
                        {
                            if (varSub->CheckHasStorageFlag(StorageFlag::Option))
                            {
                                DiscoverTopLevelFunctionDependencies(varUid, dependencyList, scopeStartToFunctionIntervals);
                            }
                        }
                    }
                    srgMember[string{ ExtractLeaf(MakeSrgConstantsCBName(uid)) }] = makeJsonNodeForOneResource(dependencyList, *srgConstants, allConstants);
                }
                srgRoot[uid.GetNameLeaf()] = srgMember;
            }
        }

        m_out << srgRoot;
    }
}

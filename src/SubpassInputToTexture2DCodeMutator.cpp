/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 * 
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#include "SubpassInputToTexture2DCodeMutator.h"


namespace AZ::ShaderCompiler
{
    static constexpr char FunctionNameLoad[] = "SubpassLoad";

    ///////////////////////////////////////////////////////////////////////
    // azslParserBaseListener Overrides ...
    void SubpassInputToTexture2DCodeMutator::enterFunctionCallExpression(azslParser::FunctionCallExpressionContext* ctx)
    {
        const auto expressionCtx = ctx->expression();
        const std::string functionName = expressionCtx->stop->getText();

        if (functionName == FunctionNameLoad)
        {
            OnEnterLoad(ctx);
        }
    }
    ///////////////////////////////////////////////////////////////////////


    ///////////////////////////////////////////////////////////////////////
    // ICodeEmissionMutator Overrides ...
    const CodeMutation* SubpassInputToTexture2DCodeMutator::GetMutation(ssize_t tokenId) const
    {
        auto itor = m_mutations.find(tokenId);
        if (itor == m_mutations.end())
        {
            return nullptr;
        }
        return &itor->second;
    }

    bool SubpassInputToTexture2DCodeMutator::RunMiddleEndMutations()
    {
        // Get all variables that are members of something of type Texture2DMS
        // We use this function pointer to find SRGs that have no references.
        auto subpassInputFilterFunc = +[](KindInfo* kindInfo) {
            const auto* varInfo = kindInfo->GetSubAs<VarInfo>();
            return varInfo->m_typeInfoExt.m_coreType.m_typeClass == TypeClass::SubpassInput;
            };

        vector<IdentifierUID> subpassInputVariables = m_ir->GetFilteredSymbolsOfSubType<VarInfo>(subpassInputFilterFunc);
        if (!m_supportsSubpassInputs)
        {
            MutateTypeOfMultiSampleVariables(subpassInputVariables);
        }
        return !subpassInputVariables.empty();
    }

    ///////////////////////////////////////////////////////////////////////

    static UnqualifiedName GetSymbolName(azslParser::ExpressionContext* expressionCtx)
    {
        const auto& children = expressionCtx->children;
        // We only care for cases with three children:
        // "<Symbol>", ".", "<funcName>"
        if (children.size() == 3)
        {
            string symbolName = Replace(children[0]->getText(), "::", "/");
            return UnqualifiedName{ symbolName };
        }
        return UnqualifiedName();
    }

    void SubpassInputToTexture2DCodeMutator::OnEnterLoad(azslParser::FunctionCallExpressionContext* ctx)
    {
        // First we must capture the complete name of the symbol that called <Symbol>.Load(...)
        const auto expressionCtx = ctx->expression();
        const UnqualifiedName uqSymbolName = GetSymbolName(expressionCtx);
        const SubpassInputType subpassInputType = GetSubpassInputClass(uqSymbolName);
        if (subpassInputType == SubpassInputType::None)
        {
            return;
        }

        // Define the mutations.
        if (m_supportsSubpassInputs)
        {
            const auto argumentListCtx = ctx->argumentList();
            if (argumentListCtx)
            {
                const auto argumentsCtx = argumentListCtx->arguments();
                auto vectorOfArguments = argumentsCtx->expression();

                // Found a "SubpassLoad" call and SubpassInputs are supported.
                // We need to remove all parameters.
                // m_subpassInput.SubpassLoad(int3(1, 2, 0)) ----> m_subpassInput.SubpassLoad()
                for (uint32_t i = 0; i < vectorOfArguments.size(); ++i)
                {
                    auto secondArgContext = vectorOfArguments[i];
                    const ssize_t startingTokenIndex = secondArgContext->start->getTokenIndex();
                    const ssize_t stoppingTokenIndex = secondArgContext->stop->getTokenIndex();
                    for (ssize_t tokenIndex = startingTokenIndex; tokenIndex <= stoppingTokenIndex; ++tokenIndex)
                    {
                        CodeMutation codeMutation;
                        codeMutation.m_replace.emplace("");
                        m_mutations.emplace(tokenIndex, codeMutation);
                    }
                }
            }
        }
        else
        {
            // Replace SubpassLoad -> Load and keed the arguments
            // m_subpassInput.SubpassLoad(int3(1, 2, 0)) ----> m_subpassInput.Load(int3(1, 2, 0))
            CodeMutation codeMutation;
            codeMutation.m_replace.emplace("Load");
            m_mutations.emplace(expressionCtx->stop->getTokenIndex(), codeMutation);
        }
    }

    SubpassInputToTexture2DCodeMutator::SubpassInputType SubpassInputToTexture2DCodeMutator::GetSubpassInputClass(const UnqualifiedName& uqSymbolName)
    {
        if (uqSymbolName.empty())
        {
            return SubpassInputType::None;
        }
        // We only care if the symbol that is calling SubpassLoad(...) is of type SubpassInput or SubpassInputMS
        IdAndKind* idkind = m_ir->m_sema.LookupSymbol(uqSymbolName);
        if (!idkind)
        {
            return SubpassInputType::None;
        }
        auto& [uid, kind] = *idkind;
        if (kind.GetKind() != Kind::Variable)
        {
            return SubpassInputType::None;
        }
        auto varInfo = kind.GetSubAs<VarInfo>();
        if (varInfo->GetTypeClass() != TypeClass::SubpassInput)
        {
            return SubpassInputType::None;
        }
        if (EndsWith(varInfo->m_typeInfoExt.m_coreType.m_typeId.GetName(), "MS"))
        {
            return SubpassInputType::SubpassInputMS;
        }
        return SubpassInputType::SubpassInput;
    }

    size_t SubpassInputToTexture2DCodeMutator::MutateTypeOfMultiSampleVariables(const vector<IdentifierUID>& subpassInputVariables)
    {
        size_t mutationCount = 0;
        for (const auto& uid : subpassInputVariables)
        {
            auto varInfo = m_ir->GetSymbolSubAs<VarInfo>(uid.GetName());
            auto& typeId = varInfo->m_typeInfoExt.m_coreType.m_typeId;
            auto typeName = typeId.GetName();
            if (typeName == "?SubpassInput")
            {
                typeId.m_name = QualifiedName{ "?Texture2D" };
            }
            else
            {
                typeId.m_name = QualifiedName{ "?Texture2DMS" };
            }
            ++mutationCount;
        }

        return mutationCount;
    }
} //namespace AZ::ShaderCompiler

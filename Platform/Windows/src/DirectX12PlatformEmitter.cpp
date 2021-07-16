/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 * 
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#include <AzslcEmitter.h>
#include "DirectX12PlatformEmitter.h"

namespace AZ::ShaderCompiler
{
    static constexpr char DirectX12PlatformEmitterName[] = "dx";
    static const PlatformEmitter* s_platformEmitter = DirectX12PlatformEmitter::RegisterPlatformEmitter();

    const PlatformEmitter* DirectX12PlatformEmitter::RegisterPlatformEmitter() noexcept(false)
    {
        static DirectX12PlatformEmitter platformEmitter; // Static linkage, will be destroyed

        static bool alreadyRegistered = false;
        if (!alreadyRegistered)
        {
            PlatformEmitter::SetEmitter(DirectX12PlatformEmitterName, &platformEmitter);
            alreadyRegistered = true;
        }

        return &platformEmitter;
    }
    
    string DirectX12PlatformEmitter::GetRootSig(const CodeEmitter& codeEmitter, const RootSigDesc& rootSig, const Options&, BindingPair::Set querySet) const
    {
        vector<string> rootAttrList;
        // SRG Constants are emitted as one CB per SRG, bound to the RootSignature as RootDescriptor
        for (auto& srg : rootSig.m_srGroups)
        {
            for (auto& param : srg.m_parameters)
            {
                std::stringstream rootParam;
                const Binding& location = param.m_registerBinding.m_pair[querySet];
                switch (param.m_type)
                {
                case RootParamType::SrgConstantCB:
                {
                    assert(param.m_registerRange == 1);
                    rootParam << "            \"CBV(b" << std::to_string(location.m_registerIndex)
                              << ", space = " << std::to_string(location.m_logicalSpace)
                              << ", visibility=SHADER_VISIBILITY_ALL)";
                    rootAttrList.push_back(rootParam.str());
                    break;
                }
                case RootParamType::RootConstantCB:
                    rootParam << "            \"RootConstants(num32BitConstants=" << std::to_string(param.m_num32BitConstants)
                              << ", b" << std::to_string(location.m_registerIndex)
                              << ", space = " << std::to_string(location.m_logicalSpace)
                              << ", visibility=SHADER_VISIBILITY_ALL)";
                    rootAttrList.push_back(rootParam.str());
                    break;
                default:
                    break;
                }
            }
        }

        // Next, process the remaining descriptor tables by frequency.
        for (auto& srg : rootSig.m_srGroups)
        {
            vector<string> descriptorTable, samplerTable;

            for (auto& param : srg.m_parameters)
            {
                if (param.m_type != RootParamType::SrgConstantCB && param.m_type != RootParamType::RootConstantCB) // already treated in the previous loop
                {
                    std::stringstream rootParam;
                    rootParam << RootParamType::ToStr(param.m_type)
                        << "(" << ToLower(BindingType::ToStr(RootParamTypeToBindingType(param.m_type)));  // eg "CBV(b" or "SRV(t" or "Sampler(s"
                    rootParam << std::to_string(param.m_registerBinding.m_pair[querySet].m_registerIndex)
                        << ", space = " << std::to_string(param.m_registerBinding.m_pair[querySet].m_logicalSpace)
                        << ", numDescriptors = " << std::to_string(param.m_registerRange) << ")";

                    const auto* memberInfo = codeEmitter.GetIR()->GetSymbolSubAs<VarInfo>(param.m_uid.m_name);
                    bool isSampler = param.m_type == RootParamType::Sampler;
                    auto& destinationVector = isSampler ? samplerTable : descriptorTable;
                    if (!isSampler || memberInfo->m_samplerState->m_isDynamic)
                    {
                        destinationVector.push_back(rootParam.str());
                    }
                }
            }

            if (!descriptorTable.empty())
            {
                rootAttrList.push_back(Decorate("            \"DescriptorTable(", Join(descriptorTable.begin(), descriptorTable.end()       , ", \" \\\n                            \""), ", visibility=SHADER_VISIBILITY_ALL)"));
            }
            if (!samplerTable.empty())
            {
                rootAttrList.push_back(Decorate("            \"DescriptorTable(", Join(samplerTable.begin(), samplerTable.end(), ", \" \\\n                            \""), ", visibility=SHADER_VISIBILITY_ALL)"));
            }
        }

        // Static samplers
        for (auto& srg : rootSig.m_srGroups)
        {
            for (auto& param : srg.m_parameters)
            {
                std::stringstream rootParam;

                if (param.m_type == RootParamType::Sampler)
                {
                    const auto* memberInfo = codeEmitter.GetIR()->GetSymbolSubAs<VarInfo>(param.m_uid.m_name);
                    const auto& samplerInfo = *memberInfo->m_samplerState;
                    if (!samplerInfo.m_isDynamic)
                    {
                        rootParam << "            \"StaticSampler(s" << std::to_string(param.m_registerBinding.m_pair[querySet].m_registerIndex)
                                  << ", space = " << std::to_string(param.m_registerBinding.m_pair[querySet].m_logicalSpace)
                                  << ", visibility=SHADER_VISIBILITY_ALL"
                                  << samplerInfo << ")";
                        rootAttrList.push_back(rootParam.str());
                    }
                }
            }
        }

        rootAttrList.insert(rootAttrList.begin(), "\"RootFlags(0)");

        return Decorate("#define sig ", Join(rootAttrList.begin(), rootAttrList.end(), ", \" \\\n"), "\"\n\n");
    }
    
}

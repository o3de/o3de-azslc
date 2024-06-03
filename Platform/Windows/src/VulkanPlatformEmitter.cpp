/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 * 
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#include <AzslcEmitter.h>
#include "VulkanPlatformEmitter.h"

namespace AZ::ShaderCompiler
{
    static constexpr char VulkanPlatformEmitterName[] = "vk";
    static const PlatformEmitter* s_platformEmitter = VulkanPlatformEmitter::RegisterPlatformEmitter();

    const PlatformEmitter* VulkanPlatformEmitter::RegisterPlatformEmitter() noexcept(false)
    {
        static VulkanPlatformEmitter platformEmitter; // Static linkage, will be destroyed

        static bool alreadyRegistered = false;
        if (!alreadyRegistered)
        {
            PlatformEmitter::SetEmitter(VulkanPlatformEmitterName, &platformEmitter);
            alreadyRegistered = true;
        }

        return &platformEmitter;
    }

    string VulkanPlatformEmitter::GetRootConstantsView(const CodeEmitter& codeEmitter, const RootSigDesc&, const Options&, BindingPair::Set) const
    {
        std::stringstream strOut;

        const auto& structUid = codeEmitter.GetIR()->m_rootConstantStructUID;
        const auto& rootCBForEmission = codeEmitter.GetTranslatedName(RootConstantsViewName, UsageContext::DeclarationSite);
        strOut << "[[vk::push_constant]]\n";
        strOut << UnmangleTrimedName(structUid.GetName()) << " " << rootCBForEmission << ";\n\n";

        return strOut.str();        
    }

    std::pair<string, string> VulkanPlatformEmitter::GetDataViewHeaderFooter(const CodeEmitter& codeEmitter, const IdentifierUID& symbol, uint32_t bindInfoRegisterIndex, string_view registerTypeLetter, optional<string> stringifiedLogicalSpace) const
    {
        std::stringstream stream;
        optional<AttributeInfo> inputAttachmentIndexAttribute = codeEmitter.GetIR()->m_symbols.GetAttribute(symbol, "input_attachment_index");
        if (inputAttachmentIndexAttribute)
        {
            // example result in HLSL:
            /*
                   #ifdef AZ_USE_SUBPASSINPUT
                   [[vk::binding(0,0)]]
                   [[vk::input_attachment_index(0)]]
                   #endif
                   AzSubpassInput srg_myData;
            */
            stream << "#ifdef AZ_USE_SUBPASSINPUT\n";
            inputAttachmentIndexAttribute->m_namespace = "vk";
            inputAttachmentIndexAttribute->m_category = AttributeCategory::Sequence;
            MakeOStreamStreamable soss(stream);
            CodeEmitter::EmitAttribute(*inputAttachmentIndexAttribute, soss);
            stream << "[[vk::binding(" << bindInfoRegisterIndex;
            if (stringifiedLogicalSpace)
            {
                stream << ", " << *stringifiedLogicalSpace;
            }
            stream << ")]]\n";
            stream << "#else\n static\n#endif\n";  // for the stub mode, we don't export the phony variable
        }

        string registerString;
        if (!inputAttachmentIndexAttribute)
        {   // fallback to the base behavior in non-input-attachment cases for the `.. : register();` syntax.
            registerString = PlatformEmitter::GetDataViewHeaderFooter(codeEmitter,
                                                                      symbol,
                                                                      bindInfoRegisterIndex,
                                                                      registerTypeLetter,
                                                                      stringifiedLogicalSpace).second;
        }
        return { stream.str(), registerString };
    }
}

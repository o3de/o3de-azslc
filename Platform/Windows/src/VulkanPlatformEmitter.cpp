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

    string VulkanPlatformEmitter::GetSpecializationConstant(const CodeEmitter& codeEmitter, const IdentifierUID& symbolUid, const Options& options) const
    {
        std::stringstream stream;
        auto* ir = codeEmitter.GetIR();
        auto* varInfo = ir->GetSymbolSubAs<VarInfo>(symbolUid.GetName());
        auto retInfo = varInfo->GetTypeRefInfo();
        string typeAsStr = codeEmitter.GetTranslatedName(retInfo, UsageContext::ReferenceSite);
        string defaultValue = codeEmitter.GetInitializerClause(varInfo);
        Modifiers forbidden = StorageFlag::Static;
        assert(varInfo->m_specializationId >= 0);
        stream << "[[vk::constant_id(" << varInfo->m_specializationId << ")]]\n";
        if (retInfo.m_typeClass == TypeClass::Enum)
        {
            // Enums are not a valid type for specialization constant, so we use the underlaying scalar type.
            // The we add a global static variable with the enum type that cast from the specialization constant.
            auto* enumClassInfo = ir->GetSymbolSubAs<ClassInfo>(retInfo.m_typeId.GetName());
            auto& enumerators = enumClassInfo->GetOrderedMembers();
            auto scalarType = enumClassInfo->Get<EnumerationInfo>()->m_underlyingType.m_arithmeticInfo.UnderlyingScalarToStr();
            string scName = JoinAllNestedNamesWithUnderscore(symbolUid.m_name) + "_SC_OPTION";
            stream << "const " << scalarType << " " << scName;
            // TODO: if using a default value, emit it as the underlying scalar type, since enums are not valid default values for
            // specialization constants (casting is also not allowed). We set default values for shader options at runtime so it's not
            // a problem.
            stream << " = (" << scalarType << ")" << "0;\n";
            // Set the default value for the global static variable as the value of the specialization constant.
            defaultValue = std::move(scName);
            forbidden = Modifiers{};
        }
        stream << codeEmitter.GetTranslatedName(varInfo->m_typeInfoExt, UsageContext::ReferenceSite, options, forbidden) + " ";
        stream << codeEmitter.GetTranslatedName(symbolUid.m_name, UsageContext::DeclarationSite) + " = ";
        stream << "(" << typeAsStr << ")" << (defaultValue.empty() ? "0" : defaultValue) << "; \n";
        return stream.str();
    }   
}

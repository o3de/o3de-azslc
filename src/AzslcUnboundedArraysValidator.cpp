/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 * 
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#include "AzslcUnboundedArraysValidator.h"

namespace AZ::ShaderCompiler
{
    void UnboundedArraysValidator::SetOptions(const Options& options)
    {
        if (!options.m_maxSpaces)
        {
            throw std::runtime_error{ "--max-spaces must be greater than 0" };
        }
        m_options = options;
    }

    bool UnboundedArraysValidator::CheckUnboundedArrayFieldCanBeAddedToSrg(const IdentifierUID& srgUid, SRGInfo& srgInfo, const IdentifierUID& varUid, const VarInfo& varInfo, TypeClass typeClass,
        string* errorMessage)
    {
        if (!CanBeDeclaredAsUnboundedArray(typeClass))
        {
            if (errorMessage)
            {
                *errorMessage = ConcatString("Data type of ( ", varUid.GetName(), " ) can not be packed as unbounded array");
            }
            return false;
        }

        srgInfo.m_unboundedArrays.push_back(varUid);

        if (!CheckResourceCanBeAddedToSrgWhenUniqueIndicesIsEnabled(srgUid, varUid, errorMessage))
        {
            return false;
        }

        // Only types that can be declared as unbounded array consume register space.
        BindingType bindingType = GetBindingType(varInfo.m_typeInfoExt);
        auto spaceIndex = GetSpaceIndexForSrg(srgUid);
        ArrayOfUnboundedUids& arrayOfUnboundedUids = m_unboundedUidsPerSpace[spaceIndex];
        const IdentifierUID& unboundedUid = arrayOfUnboundedUids[bindingType];
        if (!unboundedUid.IsEmpty())
        {
            // An unbounded array was already declared for this resource type. We can not add
            // another declaration of this type in this register space.
            if (errorMessage)
            {
                *errorMessage = ConcatString("More than one unbounded resource (", unboundedUid.GetName(), " and ", varUid.GetName(), ") in register space");
            }
            return false;
        }

        // Register the unbounded array.
        arrayOfUnboundedUids[bindingType] = varUid;
        return true;
    }

    bool UnboundedArraysValidator::CheckFieldCanBeAddedToSrg(bool isUnboundedArray, const IdentifierUID& srgUid, SRGInfo& srgInfo, const IdentifierUID& varUid, const VarInfo& varInfo, TypeClass typeClass,
        string* errorMessage)
    {
        if (isUnboundedArray)
        {
            return CheckUnboundedArrayFieldCanBeAddedToSrg(srgUid, srgInfo, varUid, varInfo, typeClass, errorMessage);
        }
        auto spaceIndex = GetSpaceIndexForSrg(srgUid);

        if (m_unboundedUidsPerSpace.empty())
        {
            // All good. No unbounded array of any kind has been registered so far.
            return true;
        }

        if (!CanBeDeclaredAsUnboundedArray(typeClass))
        {
            // The only possibility of error is if --use-spaces is false,
            // and there's already an unbounded array of type 'b' declared in another SRG.
            if (!m_options.m_useSpacesEnabled)
            {
                // We use register 0 because if --use-spaces was not specified in the command line
                // then there's only one space for all registers and its index is 0, aka "space0".
                const ArrayOfUnboundedUids& arrayOfUnboundedUids = m_unboundedUidsPerSpace[0];
                const IdentifierUID& unboundedUid = arrayOfUnboundedUids[BindingType::B];
                if (!unboundedUid.IsEmpty())
                {
                    if (errorMessage)
                    {
                        *errorMessage = ConcatString("The unbounded resource [", unboundedUid.GetName(), "], doesn't allow [", varUid.GetName(), "] to be added to the register space");
                    }
                    return false;
                }
            }
            return true;
        }

        if (!CheckResourceCanBeAddedToSrgWhenUniqueIndicesIsEnabled(srgUid, varUid, errorMessage))
        {
            return false;
        }

        // Only types that can be declared as unbounded array consume register space.
        const ArrayOfUnboundedUids& arrayOfUnboundedUids = m_unboundedUidsPerSpace[spaceIndex];
        BindingType bindingType = GetBindingType(varInfo.m_typeInfoExt);
        const IdentifierUID& unboundedUid = arrayOfUnboundedUids[bindingType];
        if (!unboundedUid.IsEmpty())
        {
            // An unbounded array was already declared for this resource type. We can not add
            // another declaration of this type in this register space.
            if (errorMessage)
            {
                *errorMessage = ConcatString("The unbounded resource [", unboundedUid.GetName(), "], doesn't allow [", varUid.GetName(), "] to be added to the register space");
            }
            return false;
        }

        return true;
    }

    UnboundedArraysValidator::SpaceIndex UnboundedArraysValidator::GetSpaceIndexForSrg(const IdentifierUID& srgUid)
    {
        SpaceIndex spaceIndex = 0;
        auto findIt = m_srgToSpaceIndex.find(srgUid);
        if (findIt == m_srgToSpaceIndex.end())
        {
            if (m_options.m_useSpacesEnabled)
            {
                if (m_options.m_maxSpaces - 1 > m_maxSpaceIndex)
                {
                    spaceIndex = static_cast<SpaceIndex>(m_srgToSpaceIndex.size());
                    m_maxSpaceIndex = std::max(spaceIndex, m_maxSpaceIndex);
                }
                else
                {
                    spaceIndex = m_maxSpaceIndex;
                }
            }
            // We are using resize() instead of push_back() because if the size doesn't change resize() is no-op.
            m_unboundedUidsPerSpace.resize(static_cast<size_t>(m_maxSpaceIndex) + 1);
            m_srgToSpaceIndex.emplace(srgUid, spaceIndex);
        }
        else
        {
            spaceIndex = findIt->second;
        }
        return spaceIndex;
    }

    bool UnboundedArraysValidator::CheckResourceCanBeAddedToSrgWhenUniqueIndicesIsEnabled(const IdentifierUID& srgUid, const IdentifierUID& varUid, string* errorMessage) const
    {
        if (m_options.m_useUniqueIndicesEnabled)
        {
            if (m_options.m_useSpacesEnabled)
            {
                // if --unique-idx is true, and --use-spaces is true, we allow only one
                // unbounded array per SRG. But if, for a given SRG and unbounded array was already
                // registered then it is an error to add another variable that consumes register resources.
                IdentifierUID unboundedArrayUid = GetFirstUnboundedArrayFromSrg(srgUid);
                if (!unboundedArrayUid.IsEmpty())
                {
                    if (errorMessage)
                    {
                        *errorMessage = ConcatString("The unbounded resource [", unboundedArrayUid.GetName(), "], doesn't allow [", varUid.GetName(), "] to be added to the register space");
                    }
                    return false;
                }
            }
            else
            {
                // if --unique-idx is true, and --use-spaces is false, we allow only one
                // unbounded array across all SRGs. If an unbounded array was already
                // registered in any SRG then it is an error to add another variable that consumes register resources.
                IdentifierUID unboundedArrayUid = GetFirstUnboundedArrayAcrossAllSrgs();
                if (!unboundedArrayUid.IsEmpty())
                {
                    if (errorMessage)
                    {
                        *errorMessage = ConcatString("The unbounded resource [", unboundedArrayUid.GetName(), "], doesn't allow [", varUid.GetName(), "] to be added to the register space");
                    }
                    return false;
                }
            }
        }
        return true;
    }

    IdentifierUID UnboundedArraysValidator::GetFirstUnboundedArrayFromSrg(const IdentifierUID& srgUid) const
    {
        const auto& itor = m_srgToSpaceIndex.find(srgUid);
        if (itor == m_srgToSpaceIndex.end())
        {
            return {};
        }
        SpaceIndex spaceIndex = itor->second;
        const ArrayOfUnboundedUids& arrayOfUnboundedUids = m_unboundedUidsPerSpace[spaceIndex];
        for (const auto& uid : arrayOfUnboundedUids)
        {
            if (!uid.IsEmpty())
            {
                return uid;
            }
        }
        return {};
    }

    IdentifierUID UnboundedArraysValidator::GetFirstUnboundedArrayAcrossAllSrgs() const
    {
        for (const auto& arrayOfUnboundedUids : m_unboundedUidsPerSpace)
        {
            for (const auto& uid : arrayOfUnboundedUids)
            {
                if (!uid.IsEmpty())
                {
                    return uid;
                }
            }
        }
        return {};
    }

} // namespace AZ::ShaderCompiler

/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 * 
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */
#pragma once

#include "GenericUtils.h"
#include "AzslcKindInfo.h"

namespace AZ::ShaderCompiler
{
    //! Helper class for validation of all possible use cases for unbounded arrays.
    struct UnboundedArraysValidator final
    {
        UnboundedArraysValidator() = default;
        ~UnboundedArraysValidator() = default;

        struct Options
        {
            //! Takes the value of --use-spaces command line option.
            //! When false, only one unbounded array of each type (b, t, u, s) can be daclared
            //! across all SRGs.
            //! When true, each SRG can have a its own unique set of unbounded arrays for b, t, u, s.
            bool m_useSpacesEnabled = false;
            //! Takes the value of --unique-idx command line option.
            //! When false each register resource type b, t, u, s can have its own unbounded array per register space.
            //! When true only one of b, t, u, s can have the unbounded array.
            bool m_useUniqueIndicesEnabled = false;
            //! Takes the value of --max-spaces
            //! Max number of register spaces space0, space1, space2, ... space<m_optionMaxSpaces - 1>
            uint32_t m_maxSpaces = std::numeric_limits<uint32_t>::max();
        };

        //! asserts if at least one option has an invalid value.
        void SetOptions(const Options& options);

        //! Validates, semantically speaking, if a variable/field can be added to a SRG.
        //! The key concept is that unbounded arrays are only allowed for unpackable shader resources like SRV, UAV, Samplers and CBV.
        //! And the other key concept is that an unbounded array takes "ownership" of the whole register range starting from the register index
        //! assigned to them.
        //! For example:
        //! ShaderResourceGroup MySrg {
        //!     Texture2D m_a;    // Owns t0 registers. OK
        //!     Texture2D m_b[];  // Unbounded Array. Owns t1+ registers. OK.
        //!     Texture2D m_c;    // BAD because the whole t1+ register range is being assigned to "m_b[]"
        //! }
        //! If it returns false, *errorMessage will have the details.
        //! param isUnboundedArray If true the field is being declared as "m_var[]" instead if "m_var".
        bool CheckFieldCanBeAddedToSrg(bool isUnboundedArray, const IdentifierUID& srgUid, SRGInfo& srgInfo, const IdentifierUID& varUid, const VarInfo& varInfo, TypeClass typeClass,
            string* errorMessage = nullptr);

    private:
        //! Helper for CheckFieldCanBeAddedToSrg. Only called if @varUid was declared as an unbounded array.
        //! If it returns false, *errorMessage will have the details.
        bool CheckUnboundedArrayFieldCanBeAddedToSrg(const IdentifierUID& srgUid, SRGInfo& srgInfo, const IdentifierUID& varUid, const VarInfo& varInfo, TypeClass typeClass,
            string* errorMessage = nullptr);

        //! When this function is called, it is guaranteed that varUid refers to a variable
        //! that can be bound to a resource register.
        //! For example:
        //! A variable like "float m_var;" can NOT be bound to a resource register.
        //! A variable like "Texture2D m_var;" is a resource that can be bound to a "tX" register. 
        bool CheckResourceCanBeAddedToSrgWhenUniqueIndicesIsEnabled(const IdentifierUID& srgUid, const IdentifierUID& varUid, string* errorMessage = nullptr) const;

        IdentifierUID GetFirstUnboundedArrayFromSrg(const IdentifierUID& srgUid) const;

        IdentifierUID GetFirstUnboundedArrayAcrossAllSrgs() const;

        using SpaceIndex = uint32_t; // represents register space0, space1, ...

        //! Returns the space index that corresponds to the given SRG.
        //! Calculating the correct space index depends on the commmand
        //! line options --use-spaces (Options.m_useSpacesEnabled), and
        //! --max-spaces (Options.m_maxSpaces).
        //! The calculated space index is stored in m_srgToSpaceIndex the first time
        //! this function is called for any given SRG.
        SpaceIndex GetSpaceIndexForSrg(const IdentifierUID& srgUid);

        //! Some of the command line options pertinent to validation of unbounded arrays.
        Options m_options;

        //! Key is an SRG Uid, value is its space index.
        unordered_map<IdentifierUID, SpaceIndex> m_srgToSpaceIndex;
        //! Keeps track of max SpaceIndex value in m_srgToSpaceIndex.
        SpaceIndex m_maxSpaceIndex = 0; 
        using ArrayOfUnboundedUids = array<IdentifierUID, BindingType::EndEnumeratorSentinel_>;
        //! The index is the SpaceIndex, the content represents a size-fixed array, where each subscript,
        //! if not empty, means that there's already an unbounded array declared for such resource
        //! type, therefore we can detect if the user is trying to declare another resource after an unbounded
        //! array, which is forbidden.
        //! The size of this array is managed in GetSpaceIndexForSrg().
        vector<ArrayOfUnboundedUids> m_unboundedUidsPerSpace;

    };
} // namespace AZ::ShaderCompiler

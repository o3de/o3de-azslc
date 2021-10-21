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
    struct IntermediateRepresentation;

    //! This is a companion class to AZ::ShaderCompiler::IntermediateRepresentation.
    //! It consolidates all functions and algoritms required to process the
    //! [[pad_to(N)]]
    //! attribute.
    //! The [[pad_to(N)]] attribute is only allowed in 'struct' definitions, and
    //! only valid AFTER a member variable declaration.
    //! 'N' must be a multiple of 4.
    //! [[pad_to(N)]] inserts dummy variables until the next variable in the struct
    //! starts at an offset aligned to N.
    class PadToAttributeMutator final
    {
    public:
        PadToAttributeMutator() = delete;
        explicit PadToAttributeMutator(IntermediateRepresentation& ir) : m_ir(ir) {}
        ~PadToAttributeMutator() = default;

        //! Called each time a [[pad_to(N)]] line is found when the input file is being parsed.
        //! Throws an exception in case of error.
        void ProcessPadToAttribute(const AttributeInfo& attrInfo);

        // This function is the main entry point to do code mutation related with the [[pad_to(N)]] attribute.
        // It is ran during the MiddleEnd() that will mutate
        // the symbols table (@m_symbols) by inserting  padding variables
        // per the data recorded in @m_structsToPad.
        // If there are no [[pad_to(N)]] attributes, this function is a no-op.
        void MutateStructs(const MiddleEndConfiguration& middleEndconfigration);

    private:

        using MapOfVarInfoUidToPadding = unordered_map<IdentifierUID, uint32_t>;
        using MapOfStructUidToPaddingMap = unordered_map<IdentifierUID, MapOfVarInfoUidToPadding>;

        ///////////////////////////////////////////////////////////////////////
        // Functions used for sorting START

        // Returns a vector<IdentifierUID> with the sorted struct IdentifierUID from @structsToPad.
        // This function runs a classical depth-first search topological sort.
        // The idea is that the IdentifierUID at the end of the returned vector represent structs that
        // need padding but they depend on structs at the beginnning of the vector to be padded first.
        vector<IdentifierUID> GetSortedStructUidList(const MapOfStructUidToPaddingMap& structsToPad) const;

        // Helper Recursive function for depth-search topological sorting of the Struct Uids that require padding.
        void StructUidSortVisitFunction(const IdentifierUID& structUid, unordered_set<IdentifierUID>& visitedStructs, vector<IdentifierUID>& sortedList) const;

        // Helper function used during AddPaddingToStructs()
        // pair.first is the struct type IdentifierUID.
        // pair.second is the variable IdentifierUID.
        vector<pair<IdentifierUID, IdentifierUID>> GetVariablesOfStructTypeThatRequirePadding(const ClassInfo* classInfo) const;

        // Functions used for sorting END
        ///////////////////////////////////////////////////////////////////////

        // Inserts the requested paddings to the struct named @structUid.
        // @classInfo is the ClassInfo data for @structUid.
        void InsertStructPaddings(ClassInfo* classInfo,
                                  const IdentifierUID& structUid, const MapOfVarInfoUidToPadding& varInfoUidToPadMap,
                                  const MiddleEndConfiguration& middleEndconfigration);

        // Recursive function that returns the size of a variable @memberId.
        // Additionally in the in-out parameter @offset it accepts the starting offset
        // of the variable and updates it to what should be the offset of the next variable.
        uint32_t CalculateMemberLayout(const IdentifierUID& memberId,
                                       const bool isArrayItr,
                                       const bool emitRowMajor,
                                       const AZ::ShaderCompiler::Packing::Layout layoutPacking,
                                       uint32_t& offset /*in-out*/) const;

        // Recursive function, companion of CalculateMemberLayout() that is called
        // when a variable is of type struct, class or interface.
        // Returns the whole size of the struct, class or interface.
        uint32_t CalculateUserDefinedMemberLayout(const IdentifierUID& exportedTypeId,
                                                  const bool emitRowMajor,
                                                  const AZ::ShaderCompiler::Packing::Layout layoutPacking,
                                                  uint32_t& startAt /*in-out*/) const;

        // Adds the minimum amount of variables to @classInfo until the struct/class grows in size by @numBytesToAdd
        // @param classInfo
        // @param insertionIndex Index within ClassInfo::m_memberFields where the new variables should be inserted.
        // @param startingOffset Used as alignment reference for the bytes that will be added.
        // @param numBytesToAdd Will add as many variables as necessary until this amount of bytes are
        //        appended to the ClassInfo.
        // @returns The number of unique VarInfo that were added to ClassInfo::m_memberFields
        size_t InsertPaddingVariables(ClassInfo* classInfo, const IdentifierUID& structUid, size_t insertionIndex, uint32_t startingOffset, uint32_t numBytesToAdd);

        // This class is an extension of the IntermediateRepresentation.
        IntermediateRepresentation& m_ir;

        // This map is populated during input file parsing.
        // The Key of this map is the UID of a struct or class.
        // The Value is another Map that represents the variables within the struct
        // that need to be padded to a specific boundary.
        // The information stored in this map will be used during MutateStructs()
        // to insert padding variables that will guarantee alignment boundaries as requested
        // by the usage of [[pad_to(N)]] attributes.
        MapOfStructUidToPaddingMap m_structsToPad;
    };
} // namespace AZ::ShaderCompiler

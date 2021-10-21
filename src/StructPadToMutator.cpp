/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 * 
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */


#include "StructPadToMutator.h"
#include "AzslcIntermediateRepresentation.h"

namespace AZ::ShaderCompiler
{
    void StructPadToMutator::ProcessPadToAttribute(const AttributeInfo& attrInfo)
    {
        //The pad_to(N) attribute only accepts one input argument.
        if (attrInfo.m_argList.size() != 1)
        {
            auto errorMsg = FormatString("The [[pad_to(N)]] attribute only accepts one argument of integral type. %zu arguments were given.", attrInfo.m_argList.size());
            m_ir.ThrowAzslcIrException(IR_INVALID_PAD_TO_ARGUMENTS, attrInfo.m_lineNumber, errorMsg);
        }
        //Is the argument integral?
        if (!holds_alternative<ConstNumericVal>(attrInfo.m_argList[0]))
        {
            string errorMsg("The [[pad_to(N)]] attribute only accepts one argument of integral type. A non integral argument was given.");
            m_ir.ThrowAzslcIrException(IR_INVALID_PAD_TO_ARGUMENTS, attrInfo.m_lineNumber, errorMsg);
        }
        // Read the integral.
        auto pad_to_value = ExtractValueAs<uint32_t>(get<ConstNumericVal>(attrInfo.m_argList[0]), uint32_t(0));
        if (!pad_to_value)
        {
            string errorMsg("Failed to read input integral to [[pad_to(N)]].");
            m_ir.ThrowAzslcIrException(IR_INVALID_PAD_TO_ARGUMENTS, attrInfo.m_lineNumber, errorMsg);
        }
        // Must be a multiple of 4.
        static const uint32_t MultipleOf = 4;
        if (pad_to_value & (MultipleOf-1))
        {
            auto errorMsg = FormatString("Invalid integral in [[pad_to(N)]]. %u is not a multiple of %u", pad_to_value, MultipleOf);
            m_ir.ThrowAzslcIrException(IR_INVALID_PAD_TO_ARGUMENTS, attrInfo.m_lineNumber, errorMsg);
        }

        auto& [curScopeId, curScopeKindInfo] = m_ir.GetCurrentScopeIdAndKind();
        if (curScopeKindInfo.IsKindOneOf(Kind::Struct))
        {
            // We need to get the variable declared before this attribute.
            auto varUid = m_ir.GetLastMemberVariable(curScopeId);
            if (varUid.IsEmpty())
            {
                auto errorMsg = FormatString("The [[pad_to(N)]] attribute must be added after a member variable inside 'struct'."
                                             " The current scope '%.*s' doesn't have a declared variable yet.",
                                             static_cast<int>(curScopeId.GetName().size()), curScopeId.GetName().data());
                m_ir.ThrowAzslcIrException(IR_INVALID_PAD_TO_LOCATION, attrInfo.m_lineNumber, errorMsg);
            }
            auto structItor = m_structsToPad.find(curScopeId);
            if (structItor == m_structsToPad.end())
            {
                m_structsToPad[curScopeId] = MapOfVarInfoUidToPadding();
            }
            MapOfVarInfoUidToPadding& varInfoUidToPadMap = m_structsToPad[curScopeId];
            auto varInfoItor = varInfoUidToPadMap.find(varUid);
            if (varInfoItor != varInfoUidToPadMap.end())
            {
                // It appears that there are two consecutive [[pad_to(N)]] attributes. This is an error.
                auto errorMsg = string("Two consecutive [[pad_to(N)]] attributes are not allowed inside 'struct'.");
                m_ir.ThrowAzslcIrException(IR_INVALID_PAD_TO_LOCATION, attrInfo.m_lineNumber, errorMsg);
            }
            varInfoUidToPadMap[varUid] = pad_to_value;
        }
        else
        {
            auto errorMsg = FormatString("The [[pad_to(N)]] attribute is only supported inside 'struct'. The current scope '%.*s' is not a struct.",
                static_cast<int>(curScopeId.GetName().size()), curScopeId.GetName().data());
            m_ir.ThrowAzslcIrException(IR_INVALID_PAD_TO_LOCATION, attrInfo.m_lineNumber, errorMsg);
        }
    }

    void StructPadToMutator::MutateStructs(const MiddleEndConfiguration& middleEndconfigration)
    {
        if (m_structsToPad.empty())
        {
            return;
        }

        // Build sorted list from the keys in @m_structsToPad so that the first 'structs' don't reference other structs that require padding.
        // In other words, We must first pad the structs that don't reference other structs that need padding.
        const auto sortedStructUids = GetSortedStructUidList(m_structsToPad);

        for (const auto& structUid : sortedStructUids)
        {
            const auto& varInfoUidToPadMap = m_structsToPad[structUid];
            auto classInfo = m_ir.GetSymbolSubAs<ClassInfo>(structUid.GetName());
            if (!classInfo)
            {
                auto errorMsg = FormatString("Error during struct padding: couldn't find ClassInfo for struct %.*s", structUid.GetName().size(), structUid.GetName().data());
                throw std::logic_error(errorMsg);
            }
            InsertStructPaddings(classInfo, structUid, varInfoUidToPadMap, middleEndconfigration);
        }
    }

    vector<IdentifierUID> StructPadToMutator::GetSortedStructUidList(const MapOfStructUidToPaddingMap& structsToPad) const
    {
        vector<IdentifierUID> sortedList;

        unordered_set<IdentifierUID> visitedStructs;
        unordered_set<IdentifierUID> unvisitedStructs;
        for (const auto &item : structsToPad)
        {
            unvisitedStructs.insert(item.first);
        }
        
        while (!unvisitedStructs.empty())
        {
            const IdentifierUID unvisitedStructUid = *unvisitedStructs.begin();
            StructUidSortVisitFunction(unvisitedStructUid, visitedStructs, sortedList);
            unvisitedStructs.erase(unvisitedStructUid);
        }

        return sortedList;
    }


    void StructPadToMutator::StructUidSortVisitFunction(const IdentifierUID& structUid, unordered_set<IdentifierUID>& visitedStructs, vector<IdentifierUID>& sortedList) const
    {
        if (visitedStructs.count(structUid))
        {
            return;
        }
        
        const auto* classInfoPtr = m_ir.GetSymbolSubAs<ClassInfo>(structUid.m_name);
        const auto listOfPairs = GetVariablesOfStructTypeThatRequirePadding(classInfoPtr);
        for (const auto& [typeUid, varUid] : listOfPairs)
        {
            StructUidSortVisitFunction(typeUid, visitedStructs, sortedList);
        }
        
        visitedStructs.insert(structUid);
        sortedList.push_back(structUid);
    }


    vector<pair<IdentifierUID, IdentifierUID>> StructPadToMutator::GetVariablesOfStructTypeThatRequirePadding(const ClassInfo* classInfo) const
    {
        vector<pair<IdentifierUID, IdentifierUID>> retList;
        const auto& memberFields = classInfo->GetMemberFields();
        for (const auto &memberUid : memberFields)
        {
            const auto* varInfoPtr = m_ir.GetSymbolSubAs<VarInfo>(memberUid.m_name);
            if (!varInfoPtr)
            {
                continue;
            }
            const auto& typeUid = varInfoPtr->GetTypeId();
            const auto kind = m_ir.GetKind(typeUid);
            if (!kind.IsOneOf(Kind::Struct))
            {
                continue;
            }
            if (m_structsToPad.find(typeUid) == m_structsToPad.end())
            {
                // It's of struct type, but doesn't require padding.
                continue;
            }
            retList.emplace_back(typeUid, memberUid);
        }
        return retList;
    }

    void StructPadToMutator::InsertStructPaddings(ClassInfo* classInfo,
                                                  const IdentifierUID& structUid,
                                                  const MapOfVarInfoUidToPadding& varInfoUidToPadMap,
                                                  const MiddleEndConfiguration& middleEndconfigration)
    {
        uint32_t nextMemberOffset = 0;
        auto& memberFields = classInfo->GetMemberFields();
        for (size_t idx = 0; idx < memberFields.size(); idx++)
        {
            // Calculate current offset & size.
            const auto& varUid = memberFields[idx];
            CalculateMemberLayout(varUid, false, middleEndconfigration.m_isRowMajor, middleEndconfigration.m_packDataBuffers, nextMemberOffset);

            // Nothing else to do, if this variable doesn't need padding.
            const auto varItor = varInfoUidToPadMap.find(varUid);
            if (varItor == varInfoUidToPadMap.end())
            {
                continue;
            }

            const uint32_t padToBoundary = varItor->second;
            uint32_t bytesToAdd = 0;
            if (padToBoundary < nextMemberOffset)
            {
                // We will only AlignUp if padToBoundary is a power of two.
                if (!IsPowerOfTwo(padToBoundary))
                {
                    //Runtime error.
                    const string errorMsg = FormatString("Offset %u after Member variable %.*s of struct %.*s "
                                                         "is bigger than requested boundary = [[pad_to(%u)]], and this case requires a power of two boundary.",
                                                          nextMemberOffset,
                                                          static_cast<int>(varUid.m_name.size()), varUid.m_name.data(),
                                                          static_cast<int>(structUid.m_name.size()), structUid.m_name.data(),
                                                          padToBoundary);
                    const auto * varInfoPtr= m_ir.GetSymbolSubAs<VarInfo>(varUid.m_name);
                    m_ir.ThrowAzslcIrException(IR_PAD_TO_CASE_REQUIRES_POWER_OF_TWO, varInfoPtr->GetOriginalLineNumber(), errorMsg);
                }
                const uint32_t alignedOffset = Packing::AlignUp(nextMemberOffset, padToBoundary);
                bytesToAdd = alignedOffset - nextMemberOffset;
            }
            else
            {
                bytesToAdd = padToBoundary - nextMemberOffset;
            }

            if (!bytesToAdd)
            {
                // Nothing to do.
                continue;
            }

            idx += InsertPaddingVariables(classInfo, structUid, idx+1, nextMemberOffset, bytesToAdd);
            nextMemberOffset += bytesToAdd;
        }
    }

    uint32_t StructPadToMutator::CalculateMemberLayout(const IdentifierUID& memberId,
                                                       const bool isArrayItr,
                                                       const bool emitRowMajor,
                                                       const AZ::ShaderCompiler::Packing::Layout layoutPacking,
                                                       uint32_t& offset) const
    {
        const auto* varInfoPtr = m_ir.GetSymbolSubAs<VarInfo>(memberId.m_name);
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

            size = varInfo.m_typeInfoExt.GetTotalSize(layoutPacking, emitRowMajor);
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
                    if (!m_ir.GetIdAndKindInfo(varInfo.GetTypeId().m_name))
                    {
                        continue;
                    }

                    // If array is a structure
                    if (IsProductType(varClass))
                    {
                        startAt = offset;
                        size = CalculateUserDefinedMemberLayout(exportedType.m_typeId, emitRowMajor, layoutPacking, startAt);

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

                        CalculateMemberLayout(memberId, true, emitRowMajor, layoutPacking, tempOffset);

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
                size = CalculateUserDefinedMemberLayout(exportedType.m_typeId, emitRowMajor, layoutPacking, startAt);

                // Add packing into array
                size = Packing::PackIntoArray(layoutPacking, size, varInfo.m_typeInfoExt.GetDimensions());
            }
            else if (varInfo.m_typeInfoExt.IsArray())
            {
                // Get the size of one element from total size
                size = varInfo.m_typeInfoExt.GetSingleElementSize(layoutPacking, emitRowMajor);
            }
            else if (varInfo.GetTypeClass() == TypeClass::Enum)
            {
                auto* asClassInfo = m_ir.GetSymbolSubAs<ClassInfo>(varInfo.GetTypeId().GetName());
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
        }

        return size;
    }


    uint32_t StructPadToMutator::CalculateUserDefinedMemberLayout(
                                                          const IdentifierUID& exportedTypeId,
                                                          const bool emitRowMajors,
                                                          const AZ::ShaderCompiler::Packing::Layout layoutPacking,
                                                          uint32_t& startAt) const
    {
        // Alignment start
        uint32_t tempOffset = startAt = Packing::AlignOffset(layoutPacking, startAt, Packing::Alignment::asStructStart, 0, 0);

        uint32_t largestMemberSize = 0;

        const auto* classInfo = m_ir.GetSymbolSubAs<ClassInfo>(exportedTypeId.m_name);
        for (const auto& memberField : classInfo->GetMemberFields())
        {
            const auto currentStride = tempOffset;
            CalculateMemberLayout(memberField, false, emitRowMajors, GetExtendedLayout(layoutPacking), tempOffset);
            largestMemberSize = std::max(largestMemberSize, tempOffset - currentStride);
        }

        tempOffset = Packing::AlignStructToLargestMember(layoutPacking, tempOffset, largestMemberSize);

        // Alignment end
        tempOffset = Packing::AlignOffset(layoutPacking, tempOffset, Packing::Alignment::asStructEnd, 0, 0);

        // Total size equals the end offset less the starting address
        return tempOffset - startAt;   
    }


    size_t StructPadToMutator::InsertPaddingVariables(ClassInfo* classInfo, const IdentifierUID& structUid,
                                                      size_t insertionIndex, uint32_t startingOffset, uint32_t numBytesToAdd)
    {
        auto getFloatTypeNameOfSize = +[](uint32_t sizeInBytes) -> const char *
        {
            static const char * floatNames[4] = {
                "float", "float2", "float3", "float4"
            };
            const uint32_t idx = (sizeInBytes >> 2) - 1;
            return floatNames[idx];
        };

        auto createVariableInSymbolTable = [&](QualifiedNameView parentName, const string& typeName, UnqualifiedName varName, uint32_t itemsCount = 0) -> IdentifierUID
        {
            QualifiedName dummySymbolFieldName{ JoinPath(parentName, varName) };

            // Add the dummy field to the symbol table.
            auto& [newVarUid, newVarKind] = m_ir.m_symbols.AddIdentifier(dummySymbolFieldName, Kind::Variable);
            // Fill up the data.
            VarInfo newVarInfo;
            newVarInfo.m_declNode = nullptr;
            newVarInfo.m_isPublic = false;
            ExtractedTypeExt padType = { UnqualifiedNameView(typeName), nullptr };
            if (itemsCount < 1)
            {
                newVarInfo.m_typeInfoExt = ExtendedTypeInfo{ m_ir.m_sema.CreateTypeRefInfo(padType),
                             {}, {}, {}, Packing::MatrixMajor::Default };
            }
            else
            {
                newVarInfo.m_typeInfoExt = ExtendedTypeInfo{ m_ir.m_sema.CreateTypeRefInfo(padType),
                    {}, {{itemsCount}}, {}, Packing::MatrixMajor::Default };
            }
            newVarKind.GetSubRefAs<VarInfo>() = newVarInfo;
            return newVarUid;
        };

        // The key idea is to add, at most, three variables. They will be added depending on keeping a 16-byte alignment from @startingOffset
        // 1- The first variable will be added if @startingOffset is not 16-bytes aligned. It will be a float, float2 or float3.
        // 2- If more bytes are still needed, then We'll add ONE float4[N] array, Until (N * 16) bytes fit within the bytes that are left to add.
        // 3- Finally, if there are more remaining bytes to the be added, a third float, float2 or float3 will be added.

        auto& memberFields = classInfo->GetMemberFields();
        IdentifierUID insertBeforeThisUid;
        if (insertionIndex <= memberFields.size() - 1)
        {
            insertBeforeThisUid = memberFields[insertionIndex];
        }
        size_t numAddedVariables = 0;

        // 1st variable.
        {
            const auto alignedOffset = Packing::AlignUp(startingOffset, 16);
            const auto deltaBytes = alignedOffset - startingOffset;
            if (deltaBytes < numBytesToAdd)
            {
                string typeName = getFloatTypeNameOfSize(deltaBytes);
                auto variableName = FormatString("__pad_at%u", startingOffset);
                IdentifierUID newVarUid = createVariableInSymbolTable(structUid.GetName(), typeName, UnqualifiedName{variableName});
                if (insertBeforeThisUid.IsEmpty())
                {
                    classInfo->PushMember(newVarUid, Kind::Variable);
                }
                else
                {
                    classInfo->InsertBefore(newVarUid, Kind::Variable, insertBeforeThisUid);
                }
                numAddedVariables++;
                numBytesToAdd -= deltaBytes;
                startingOffset = alignedOffset;
            }
        }

        // 2nd variable. The Array of 'float4'
        {
            const auto numFloat4s = numBytesToAdd >> 4;
            if (numFloat4s)
            {
                auto variableName = FormatString("__pad_at%u", startingOffset);
                IdentifierUID newVarUid = createVariableInSymbolTable(structUid.GetName(), "float4", UnqualifiedName{variableName}, numFloat4s);
                if (insertBeforeThisUid.IsEmpty())
                {
                    classInfo->PushMember(newVarUid, Kind::Variable);
                }
                else
                {
                    classInfo->InsertBefore(newVarUid, Kind::Variable, insertBeforeThisUid);
                }
                numAddedVariables++;
                numBytesToAdd -= (numFloat4s << 4);
                startingOffset += (numFloat4s << 4);
            }
        }

        // 3rd variable. The remainder
        if (numBytesToAdd > 0)
        {
            auto variableName = FormatString("__pad_at%u", startingOffset);
            string typeName = getFloatTypeNameOfSize(numBytesToAdd);
            IdentifierUID newVarUid = createVariableInSymbolTable(structUid.GetName(), typeName, UnqualifiedName{variableName});
            if (insertBeforeThisUid.IsEmpty())
            {
                classInfo->PushMember(newVarUid, Kind::Variable);
            }
            else
            {
                classInfo->InsertBefore(newVarUid, Kind::Variable, insertBeforeThisUid);
            }
            numAddedVariables++;
        }

        return numAddedVariables;
    }

} //namespace AZ::ShaderCompiler

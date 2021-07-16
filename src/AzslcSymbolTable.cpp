/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#include "AzslcSymbolTable.h"

namespace AZ::ShaderCompiler
{
    bool SymbolTable::HasIdentifier(QualifiedNameView symbol) const
    {
        return m_symbols.find({symbol}) != m_symbols.cend();
    }

    IdAndKind* SymbolTable::GetIdAndKindInfo(QualifiedNameView symbol)
    {
        auto iter = m_symbols.find({symbol});
        return iter == m_symbols.cend() ? nullptr : &(*iter);
    }

    const IdAndKind* SymbolTable::GetIdAndKindInfo(QualifiedNameView symbol) const
    {
        auto iter = m_symbols.find({symbol});
        return iter == m_symbols.cend() ? nullptr : &(*iter);
    }

    bool SymbolTable::DeleteIdentifier(IdentifierUID name)
    {
        auto iter = m_symbols.find(name);
        bool found = iter != m_symbols.end();
        if (found)
        {
            m_symbols.erase(iter);
            // remove from order list too
            m_order.erase(std::remove(m_order.begin(), m_order.end(), name), m_order.end());
        }
        return found;
    }

    IdAndKind& SymbolTable::AddIdentifier(QualifiedNameView symbol, Kind kind, optional<size_t> lineNumber /*= none*/)
    {
        IdentifierUID idUID{symbol};
        auto fetchedIdIt = m_symbols.find(idUID);
        if (fetchedIdIt != m_symbols.end())
        {   // found
            if (kind != fetchedIdIt->second.GetKind())
            {
                ThrowRedeclarationAsDifferentKind(symbol, kind, fetchedIdIt->second, lineNumber);
            }
            else
            {
                throw AzslcException(ORCHESTRATOR_ODR_VIOLATION, "Semantic", lineNumber, none,
                                     ConcatString("ODR (One Definition Rule) violation. Redeclaration of ",
                                                  Kind::ToStr(kind), " ", ExtractLeaf(symbol), " in ", LevelUp(symbol), "  ",
                                                  GetFirstSeenLineMessage(fetchedIdIt->second), "\n"));

                // Since a redeclaration becomes the new identity, we must erase its old appearance in the order list:
                //  (motivated by the requirement that if we emit a function body, it can't be at the site of its first declaration.
                //   since the definition is the only guaranteed place where the body will not refer to yet-undeclared symbols)
                //  As a bonus, it also cleans-up the --dumpsym option which had duplicated output.
                //  (reinstates the invariant of unicity of apparition)
                m_order.erase(std::remove(m_order.begin(), m_order.end(), fetchedIdIt->first), m_order.end());
            }
        }
        else
        {   // not found
            fetchedIdIt = m_symbols.insert(IdToKindMap::value_type{idUID, {}}).first;
            verboseCout << "new identifier added to database. name " << idUID.m_name << " kind " << Kind::ToStr(kind) << "\n";
        }
        // InitAs completely reassigns the subinfo with a freshly constructed type.
        fetchedIdIt->second.InitAs(kind);
        // remember the apparition order:
        m_order.push_back(fetchedIdIt->first);
        return *fetchedIdIt;
    }
}  // end of namespace AZ::ShaderCompiler

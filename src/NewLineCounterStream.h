/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 * 
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */
#pragma once

#include "ReflectableEnums.h"

#include <ostream>

namespace AZ
{
    //! Wraps and forwards data to a std::ostream,
    //! Overrides operator<< for char, const char * and string data and counts
    //! the number of '\n' (new line) characters that go through it.
    class NewLineCounterStream
    {
        typedef NewLineCounterStream Self;

    public:

        NewLineCounterStream(std::ostream& streamToWrap) : m_wrappedStream(streamToWrap)
        {}

        Self& operator<<(char c)
        {
            if (c == '\n')
            {
                m_lineCount++;
            }
            m_wrappedStream << c;
            return *this;
        }

        Self& operator<<(const char * nts)
        {
            const char * tmp = nts;
            while(char c = *tmp++)
            {
                if (c == '\n')
                {
                    m_lineCount++;
                }
            }
            m_wrappedStream << nts;
            return *this;
        }

        Self& operator<<(const std::string& str)
        {
            for (auto it = str.begin(); it != str.end(); ++it )
            {
                if (*it == '\n')
                {
                    m_lineCount++;
                }
            }
            m_wrappedStream << str;
            return *this;
        }

        template <class Any>
        Self& operator<<(Any&& thing) // universal reference
        {
            m_wrappedStream << thing;
            return *this;
        }

        int GetLineCount() const { return m_lineCount; }

        bool IsTheSameStream(std::ostream& stream) const { return &stream == &m_wrappedStream; } 

    private:
        std::ostream& m_wrappedStream;
        int m_lineCount = 0;
    };
}

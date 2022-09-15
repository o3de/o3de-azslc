/*
* Copyright (c) Contributors to the Open 3D Engine Project.
* For complete copyright and license terms please see the LICENSE at the root of this distribution.
* 
* SPDX-License-Identifier: Apache-2.0 OR MIT
*
*/
#pragma once

#include <ostream>
#include <sstream>

namespace AZ
{
    struct StringFormTypeEraser
    {
        template< typename T >
        StringFormTypeEraser(T&& v)  // non-explicit constructor to allow use in conversion contexts
        {
            std::ostringstream oss;
            oss << v;
            textified = oss.str();
        }
        string textified;
    };

    class Streamable
    {
    public:
        virtual Streamable& operator<<(char c) = 0;
        virtual Streamable& operator<<(const char* nts) = 0;
        virtual Streamable& operator<<(const std::string& str) = 0;
        virtual Streamable& operator<<(StringFormTypeEraser&& anything) = 0;
    };

    // trivial concrete version to wrap classic std::ostream objects
    class MakeOStreamStreamable : public Streamable
    {
    public:
        MakeOStreamStreamable(std::ostream& streamToWrap)
            : m_wrappedStream(streamToWrap)
        {}

        Streamable& operator<<(char c) override                          { m_wrappedStream << c; return *this; }
        Streamable& operator<<(const char* nts) override                 { m_wrappedStream << nts; return *this; }
        Streamable& operator<<(const std::string& str) override          { m_wrappedStream << str; return *this; }
        Streamable& operator<<(StringFormTypeEraser&& anything) override { *this << anything.textified; return *this; }

    protected:
        std::ostream& m_wrappedStream;
    };

}

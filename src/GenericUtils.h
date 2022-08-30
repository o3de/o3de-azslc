/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 * 
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */
#pragma once

#include "StdUtils.h"
#include "MetaUtils.h"

#include <sstream>

#define AZ_STRINGIFY(x) #x
#define AZ_TOSTRING(x) AZ_STRINGIFY(x)
#define AZ_FILELINE __FILE__ ":" AZ_TOSTRING(__LINE__)

namespace AZ
{
    // Create substring views of views. Works like python slicing operator [n:m] with limited modulo semantics.
    // what I ultimately desire is the range v.3 feature eg `letters[{2,end-2}]`
    // http://ericniebler.com/2014/12/07/a-slice-of-python-in-c/
    inline constexpr string_view Slice(const string_view& in, int64_t st, int64_t end)
    {
        auto inSSize = (int64_t)in.size();
        if (inSSize == 0)
        {
            return in;
        }

        while (end < 0)
        {
            end = end + inSSize + 1;
        }

        while (st < 0)
        {
            st = st + inSSize + 1;
        }
        if (end > inSSize)
        {
            end = end % inSSize;
        }

        if (st > inSSize)
        {
            st = st % inSSize;
        }
        return in.substr(st, end - st);
    }

    //static_assert(Slice("0123", 1, 2) == "1");  // visual studio 2017 can't run this. gcc 7 works. and VCpre2018 works https://godbolt.org/z/_Ycv6G
    static_assert(Slice("0123", 1, 1) == "");
    static_assert(Slice("0123", 0, 1) == "0");
    static_assert(Slice("0123", 0, 4) == "0123");
    static_assert(Slice("0123", 0, -1) == "0123");
    static_assert(Slice("0123", 0, 0) == "");
    //static_assert(Slice("0123", -3, -2) == "2");  // VS is incapable of getting this right either. (proof that it should, as dynamic assert below at //*)
    //static_assert(Slice("0123", -2, -1) == "3");
    static_assert(Slice("0123", -1, -0) == "");

    // waiting for C++20
    inline bool StartsWith(string_view haystack, string_view needle)
    {
        return Slice(haystack, 0, needle.size()).find(needle, 0) != string::npos;
        // visual studio bug prevents us from using constexpr here
    //https://developercommunity.visualstudio.com/content/problem/275141/c2131-expression-did-not-evaluate-to-a-constant-fo.html
    }

    inline bool EndsWith(string_view haystack, string_view needle)
    {
        return Slice(haystack, haystack.size() - needle.size(), haystack.size()).find(needle, 0) != string::npos;
        // visual studio bug prevents us from using constexpr here
    //https://developercommunity.visualstudio.com/content/problem/275141/c2131-expression-did-not-evaluate-to-a-constant-fo.html
    }

    // ability to create size_t literals
    // waiting for Working Group to get their stuff together https://groups.google.com/a/isocpp.org/forum/#!topic/std-proposals/tGoPjUeHlKo
    inline constexpr std::size_t operator ""_sz(unsigned long long n)
    {
        return n;
    }

    template <class Container>
    Container Split(const string& str, string_view delims = " ")
    {
        Container cont;

        std::size_t current, previous = 0;
        current = str.find_first_of(delims);
        while (current != string::npos)
        {
            if (current > previous)
            {
                cont.push_back(str.substr(previous, current - previous));
            }
            previous = current + 1;
            current = str.find_first_of(delims, previous);
        }
        cont.push_back(str.substr(previous, current - previous));
        return cont;
    }

    inline string_view GetFileNameWithoutExtension(string_view fileName)
    {
        size_t lastIndex = fileName.find_last_of(".");
        if (lastIndex == -1)
        {
            lastIndex = fileName.size();
        }

        return fileName.substr(0, lastIndex);
    }

    // debug-build asserted dyn_cast, otherwise, release-build static_cast (idea from boost library)
    template <typename To, typename From>
    To polymorphic_downcast(From instance)
    {
        static_assert(std::is_reference_v<To> || std::is_pointer_v<To>, "can't use non-ref/ptr types fot polymorphic casts");
        static_assert(std::is_reference_v<From> || std::is_pointer_v<From>, "can't use non-ref/ptr types fot polymorphic casts");
#if !defined(NDEBUG)
        assert(dynamic_cast<To>(instance));
#endif
        return static_cast<To>(instance);
    }

    /// surround a string with a prefix and a suffix
    inline string Decorate(string_view prefix, string_view body, string_view suffix)
    {
        std::stringstream ss;
        ss << prefix.data();
        ss << body.data();
        ss << suffix.data();
        return ss.str();
    }

    /// 2 arguments version in case both sides are the same
    inline string Decorate(string_view prefixAndSuffix, string_view body)
    {
        return Decorate(prefixAndSuffix, body, prefixAndSuffix);
    }

    /// reverse the effect of a symmetrical decoration
    inline string_view Undecorate(string_view decoration, string_view body)
    {
        auto indexStart = StartsWith(body, decoration) ? decoration.length() : 0;
        auto indexEnd = EndsWith(body, decoration) ? body.length() - decoration.length() : body.length();
        return Slice(body, indexStart, indexEnd);
    }

    // Erase-Remove algorithm which removes all whitespaces from a string.
    inline string RemoveWhitespaces(string haystack)
    {
        haystack.erase(std::remove_if(haystack.begin(), haystack.end(), [](unsigned char c) {return std::isspace(c); }), haystack.end());
        return haystack;
    }

    /// tells whether a position in a string is surrounded by round braces
    /// e.g. true  for arguments {"a(b)", 2}
    /// e.g. true  for arguments {"a()", 1}  by convention
    /// e.g. false for arguments {"a()", 2}  by convention
    /// e.g. false for arguments {"a(b)", 0}
    /// e.g. false for arguments {"a(b)c", 4}
    /// e.g. false for arguments {"a(b)c(d)", 4}
    /// e.g. true  for arguments {"a((b)c(d))", 5}
    inline bool WithinMatchedParentheses(string_view haystack, size_t charPosition)
    {
        const auto hayLen = haystack.length();
        // we don't even need to be looking at the left side, we suppose balanced construction.
        // let's evaluate the level of nesting at the asked pos.
        int nesting = 0;
        for (size_t pos = 0; pos <= charPosition && pos < hayLen; ++pos)
        {
            nesting += haystack[pos] == '(' ? 1
                : (haystack[pos] == ')' ? -1 : 0);
        }
        return nesting > 0;
    }

    /// replace all occurrences of substring `sub` with substring `to` within haystack.
    ///  e.g: Replace("aaa#aaa", "#", "_") gives-> "aaa_aaa"
    inline string Replace(string haystack, string_view sub, string_view to)
    {
        decltype(sub.length()) pos = 0;
        auto lFrom = sub.length();
        auto lTo = to.length();
        while (((pos = haystack.find(sub, pos)) != string::npos))
        {
            haystack.replace(pos, lFrom, to);
            pos += lTo;
        }
        return haystack;
    }

    // this one is inspired by the docopt utilities. trims whitespace by default, but can be used to trim quotes.
    constexpr inline string_view Trim(string_view haystack, string_view toTrim = " \t\n")
    {
        const auto strEnd = haystack.find_last_not_of(toTrim);
        if (strEnd == string::npos)
        {
            return {};
        }
        haystack.remove_suffix(haystack.size() - strEnd - 1);

        const auto strBegin = haystack.find_first_not_of(toTrim);
        haystack.remove_prefix(strBegin);

        return haystack;
    }

    template< typename Iter >
    string Join(Iter begin, Iter end, string_view separator = "")
    {
        if (begin == end)
            return "";

        std::stringstream ss;
        ss << *begin;

        auto aggregate = [&ss, &separator](auto s) { ss << separator.data() << s; };
        std::for_each(std::next(begin), end, aggregate);

        return ss.str();
    }

    template< typename Iterator, typename Predicate >
    bool Contains(Iterator begin, Iterator end, Predicate p)
    {
        return std::find_if(begin, end, p) != end;
    }

    /// argument in rangeV3-style version:
    template< typename Container >
    string Join(const Container& c, string_view separator = "")
    {
        return Join(c.begin(), c.end(), separator);
    }

    /// argument in rangeV3-style version:
    template< typename Container, typename Predicate >
    bool Contains(const Container& c, Predicate p)
    {
        return Contains(c.begin(), c.end(), p);
    }

    /// closest possible form of python's `in` keyword
    template< typename Element, typename Container >
    bool IsIn(const Element& element, const Container& container)
    {
        return std::find(container.begin(), container.end(), element) != container.end();
    }

    /// generate a new container with copy-and-mutated elements
    template< typename Container, typename ContainerOut, typename Functor >
    void TransformCopy(const Container& in, ContainerOut& out, Functor mutator)
    {
        std::transform(in.begin(), in.end(), std::back_inserter(out), mutator);
    }

    inline string Unescape(string_view escapedText)
    {
        std::stringstream out;
        auto it = escapedText.begin();
        while (it != escapedText.end())
        {
            char c = *it;
            if (c == '\\' && (it + 1) != escapedText.end())
            {
                ++it;
                char next = *it;
                switch (next)
                {
                case '\\': c = '\\'; break;
                case 'a': c = '\a';  break;
                case 'b': c = '\b';  break;
                case 'f': c = '\f';  break;
                case 'n': c = '\n';  break;
                case 'r': c = '\r';  break;
                case 't': c = '\t';  break;
                case 'v': c = '\v';  break;
                case '"': c = '\"';  break;
                default:
                    out << '\\';
                    c = next;
                    break;
                }
            }
            out << c;
            ++it;
        }
        return out.str();
    }

    template< typename T >
    inline string ToString(T anything)
    {
        std::ostringstream oss;
        oss << anything;
        return oss.str();
    }

    inline string&& ToString(string&& s)
    {
        return std::forward<string&&>(s);
    }

    inline const string& ToString(const string& s)
    {
        return s;
    }

    inline string ToString(const char* const  s)
    {
        return s;
    }

    inline string ToString(string_view sv)
    {
        return string{ sv };
    }

    template<typename... Types>
    string ConcatString(Types&&... args)
    {
        string ret;
        (ret += ... += ToString(args));
        return ret;
    }

    template<typename... Args>
    string FormatString(const char* format, Args... args)
    {
        int size = snprintf(nullptr, 0, format, args...) + 1; // Extra space for '\0'
        assert(size > 0);
        std::unique_ptr<char[]> buf(new char[size]);
        snprintf(buf.get(), size, format, args...);
        return string(buf.get());
    }

    // Is-One-Of will check if a variable is equal to any of the values listed on the other parameters.
    // Example: IsOneOf(variableKind, Function, Enumeration) is short for: variableKind == Function || variableKind == Enumeration.
    // 2 arguments count: recursion terminal overload.
    template <typename T>
    bool IsOneOf(T value, T tocheck)
    {
        return value == tocheck;
    }
    // Any argument count version
    template <typename T, typename... Args>
    bool IsOneOf(T value, T khead, Args... tail)
    {
        return value == khead || IsOneOf(value, tail...);
    }

    // shortcut for dynamic cast to open the opportunity to migrate to adhoc rtti later
    template <typename DestT, typename SrcT>
    DestT As(SrcT source)
    {
        static_assert((std::is_pointer_v<SrcT> && std::is_pointer_v<DestT>) || (std::is_reference_v<SrcT> && std::is_reference_v<DestT>));
        return dynamic_cast<DestT>(source);
    }

    // shortcut of As<> != nullptr
    template <typename DestT, typename SrcT>
    bool Is(SrcT source)
    {
        using PtrDestT = std::conditional_t< std::is_pointer_v<DestT>, DestT, DestT* >;
        using ConsistentDestT = std::conditional_t< std::is_pointer_v<SrcT>, PtrDestT, DestT >;
        return As<ConsistentDestT>(source) != nullptr;
    }

    // tail case
    template <typename Deduced>
    bool DynamicTypeIsAnyOf(Deduced* base)
    {
        return false;
    }
    // checks if a passed pointer to an instance, is-base-or-derived-of any one of the given types in the template argument list.
    // verify that As< at-least-one-of-args >(base) returns non-null
    template <typename Head, typename... Tail, typename Deduced>
    bool DynamicTypeIsAnyOf(Deduced* base)
    {
        return Is<Head>(base) || DynamicTypeIsAnyOf<Tail...>(base);
    }

    template <typename EnumTypeTemplateParam>
    struct Flag
    {
        template <class T>
        using SubEnumType = typename T::EnumType;

        // transform the input parameter into the underlying enum. in the case that the client instantiated the Flag from a MAKE_REFLECTABLE_ENUM_POWER macro.
        // or just keep the original client type.
        using EnumType = DetectedOr_t<EnumTypeTemplateParam, SubEnumType, EnumTypeTemplateParam>;

        static_assert(std::is_enum_v<EnumType>);

        Flag()
        {
            if constexpr (typename DetectedOr<EnumTypeTemplateParam, SubEnumType, EnumTypeTemplateParam>::value_t())
            {
                using It = typename EnumTypeTemplateParam::Iterator;
                assert(*(++It{ EnumType(4) }) == 8);  // verify that the reflectable enum is a power enum (flag-able).
            }
        }
        Flag(EnumType e) : m_value{ static_cast<UnderlyingT>(e) }
        {}

        friend Flag operator & (Flag f, EnumType e)
        {
            return EnumType(f.m_value & static_cast<UnderlyingT>(e));
        }

        friend Flag operator & (Flag lhs, Flag rhs)
        {
            return Flag(EnumType(lhs.m_value & rhs.m_value));
        }

        friend Flag operator | (Flag f, EnumType e)
        {
            return EnumType(f.m_value | static_cast<UnderlyingT>(e));
        }

        friend Flag& operator &= (Flag& f, EnumType e)
        {
            f.m_value &= static_cast<UnderlyingT>(e);
            return f;
        }

        friend Flag& operator |= (Flag& f, EnumType e)
        {
            f.m_value |= static_cast<UnderlyingT>(e);
            return f;
        }

        friend Flag& operator |= (Flag& f, const Flag& f2)
        {
            f.m_value |= f2.m_value;
            return f;
        }

        friend Flag operator ~ (const Flag& a_f)
        {
            return Flag(EnumType(~a_f.m_value));
        }

        explicit operator bool() const
        {
            return m_value != 0;
        }

        bool AsBool() const
        {
            return operator bool();
        }

        bool IsEmpty() const
        {
            return m_value == 0;
        }

        using UnderlyingT = std::underlying_type_t<EnumType>;
        UnderlyingT m_value = 0;
    };

    inline string_view GetCurrentOsName()
    {
#if defined(_WIN64)
        return "Win64";
#elif defined (_Win32)
        return "Win32";
#elif defined (__APPLE__)
        return "MacOS";
#elif defined (__linux__) || defined(__unix__) || defined(_POSIX_VERSION)
        return "Unix";
#endif
    }

    /// Log(N) find immediate lower element query in map-keys
    template< typename T, typename U >
    auto Infimum(map<T, U> const& ctr, T query)
    {
        auto it = ctr.upper_bound(query);
        return it == ctr.begin() ? ctr.cend() : --it;
    }

    /// Log(N) disjointed segments belong query
    /// You can represent segments as you wish, as long as:
    ///   you provide the predicate to determine belonging.
    ///   map-keys are segment start points.
    ///   segments don't overlap.
    /// returns: iterator to found interval key, or cend()
    template< typename T, typename U, typename IntervalCheckPredicate >
    auto FindInterval(const map<T, U>& ctr, const T& query, IntervalCheckPredicate&& isInIntervalPredicate)
    {
        auto inf = Infimum(ctr, query);
        return inf == ctr.end() ? ctr.cend() : (isInIntervalPredicate(query, inf->second) ? inf : ctr.cend());
    }

    /// Log(N) disjointed segments belong query
    /// segments are represented by their start points in the key, and last point in values. segments can't overlap.
    /// returns: iterator to found interval key, or cend()
    template< typename T, typename U>
    auto FindInterval(const map<T, U>& ctr, const T& query)
    {
        return FindInterval(ctr, query, [](T q, U last) {return q <= last; });
    }

    template< typename Deduced >
    decltype(auto) CastToRValueReference(Deduced&& value)
    {
        return static_cast<std::remove_reference_t<Deduced>&&>(value);
    }

    /// add a missing operator for convenience and shortness of code
    inline bool operator == (string_view lhs, char rhs)
    {
        return lhs.length() == 1 && lhs[0] == rhs;
    }

    inline string ToLower(string_view original)
    {
        string result;
        auto len = original.length();
        result.resize(len);
        for (int i = 0; i < len; ++i)
        {
            result[i] = static_cast<char>(tolower(original[i]));
        }
        return result;
    }

    inline bool IsPowerOfTwo(uint32_t value)
    {
        return (value > 0) && !(value & (value - 1));
    }
}

#ifndef NDEBUG
#include <set>

namespace AZ::Tests
{
    inline void DoAsserts2()
    {
        DoAsserts3();

        using namespace std::literals::string_view_literals;

        assert(Slice("0123", 1, -1) == "123");
        assert(Slice("0123", 1, 2) == "1");
        assert(Slice("0123", -3, -2) == "2"); //*
        assert(Slice("0123", -2, -1) == "3");

        assert(Unescape(R"(my beautiful string\non two lines.)") == "my beautiful string\non two lines.");
        assert(Unescape(R"(just\ a backslash)") == R"(just\ a backslash)");
        assert(Unescape(R"(real \\backslash)") == "real \\backslash");
        assert(Unescape(R"(unrecog \j escape)") == R"(unrecog \j escape)");
        assert(Unescape(R"(at end\)") == R"(at end\)");
        assert(Unescape(R"(with \"quotes\")") == R"(with "quotes")");

        assert(StartsWith("bleu", "bl"));
        assert(!StartsWith("0bleu", "bl"));
        assert(StartsWith("bleu", ""));
        assert(!StartsWith("", "0"));

        assert(!EndsWith("", "0"));
        assert(!EndsWith("stuff", "0"));
        assert(EndsWith("", ""));
        assert(EndsWith("0", "0"));
        assert(EndsWith("00", "0"));
        assert(EndsWith("nice", ""));
        assert(EndsWith("nice", "e"));
        assert(EndsWith("nice", "ce"));
        assert(EndsWith("nice", "nice"));

        // initializer list
        auto list = { "nice", "things", "come", "to", "an", "end" };
        assert(Decorate("", Join(list.begin(), list.end(), ", "), ".") == "nice, things, come, to, an, end.");

        assert(Undecorate("///", Decorate("///", "/my nice string/")) == "/my nice string/"sv);
        assert(Undecorate("\"", "non decorated") == "non decorated"sv);
        assert(Undecorate("\"", "\"decorated\"") == "decorated"sv);

        // or collection
        set<string> myset = { "zz", "mm", "aa", "bb" };
        assert(Join(myset.begin(), myset.end()) == "aabbmmzz");

        assert(Trim("\"stuff\"", "\"") == "stuff"sv);
        assert(Trim(" stuff ") == "stuff"sv);
        assert(Trim(" stuff ", ".") == " stuff "sv);
        assert(Trim("  ", " ") == ""sv);

        auto unevenSplit = Split<vector<string>>("A, BB, CCC, DDDD", ", ");
        assert(Split<vector<string>>("A, BB, CCC, DDDD", ", ")[0] == "A");
        assert(Split<vector<string>>("A, BB, CCC, DDDD", ", ")[1] == "BB");
        assert(Split<vector<string>>("A, BB, CCC, DDDD", ", ")[2] == "CCC");
        assert(Split<vector<string>>("A, BB, CCC, DDDD", ", ")[3] == "DDDD");
        auto halfSplit = Split<vector<string>>("A, BB, CCC, DDDD", "C");
        assert(halfSplit[0] == "A, BB, ");
        assert(halfSplit[1] == ", DDDD");

        {
            using Map = map<int, int>;
            Map intervals{ {2,5}, {8,9} };

            auto red = Infimum(intervals, 4);
            assert(red->first == 2);
            auto green = Infimum(intervals, 6);
            assert(green->first == 2);
            auto pink = Infimum(intervals, 8);
            assert(pink->first == 8);
            auto yellow = Infimum(intervals, 1);
            assert(yellow == intervals.cend());
            auto larger_than_all = Infimum(intervals, 15);
            assert(larger_than_all->first == 8);
            assert(FindInterval(intervals, 4) != intervals.cend());
            assert(FindInterval(intervals, 6) == intervals.cend());
            assert(FindInterval(intervals, 8) != intervals.cend());
            assert(FindInterval(intervals, 1) == intervals.cend());
        }

        assert(Replace("Srg/A", "/", "::") == "Srg::A");

        assert(WithinMatchedParentheses("a(b)", 2));
        assert(WithinMatchedParentheses("a()", 1));
        assert(!WithinMatchedParentheses("a()", 2));
        assert(!WithinMatchedParentheses("a(b)", 0));
        assert(!WithinMatchedParentheses("a(b)c", 4));
        assert(!WithinMatchedParentheses("a(b)c(d)", 4));
        assert(WithinMatchedParentheses("a((b)c(d))", 5));

        assert(IsIn("hibou", std::initializer_list<const char*>{ "chouette", "hibou", "jay" }));
        assert(!IsIn("hibou", std::initializer_list<const char*>{ "chouette", "jay" }));
    }
}
#endif

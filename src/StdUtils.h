/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 * 
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */
#pragma once

// setup of low level library includes in this file.
// if not defined -> fallback to std

#ifdef _WIN32
// I don't recommend custom lib utilities on windows because they don't have natvis and are hard to debug.
#else
#define USE_TINY_OPTIONAL
//#define USE_BOOST_OPTIONAL
#define USE_MPARK_VARIANT
#endif

#include <cassert>
#include <cctype>
#include <cfloat>

#include <algorithm>
#include <array>
#include <functional>
#include <iostream>
#include <map>
#include <regex>
#include <set>
#include <stack>
#include <string_view>
#include <tuple>
#include <unordered_map>
#include <unordered_set>

#ifdef USE_MPARK_VARIANT
#include "variant.hpp"
namespace StdUtils = mpark;
#else
#include <variant>
namespace StdUtils = std;
#endif

#if defined(USE_MPARK_VARIANT) && !defined(_WIN32)
// one shortcut for is_invocable, because Xcode9 couldn't get it right:
template <typename C, typename... T>
using is_invocable = mpark::lib::is_invocable<C, T...>;
// same for invoke_result
template <typename C, typename... T>
using invoke_result_t = mpark::lib::invoke_result_t<C, T...>;
#else
template <typename C, typename... T>
using is_invocable = std::is_invocable<C, T...>;

template <typename C, typename... T>
using invoke_result_t = std::invoke_result_t<C, T...>;
#endif

#if defined(USE_TINY_OPTIONAL)
#include <tiny/optional.h>
#elif defined(USE_BOOST_OPTIONAL)
#include <boost/optional/optional.hpp>
#else // std
#include <optional>
inline constexpr auto none = std::nullopt;
#endif

namespace AZ
{
    // C++17 `std::variant` for C++11/14/17
    using StdUtils::variant;
    using StdUtils::monostate;
    using StdUtils::get;
    using StdUtils::holds_alternative;

    // Alternatives for the C++17 std::optional
#if defined(USE_TINY_OPTIONAL)
    using tiny::optional;
    using tiny::none;
#elif defined(USE_BOOST_OPTIONAL)
    using boost::optional;
    using boost::none;
#else
    using std::optional;
#endif

    // Configure basic symbols so we can use them unqualified -> easy to change to AzStd without big refactorings.

    using std::enable_if_t;
    using std::is_same_v;

    using std::count;
    using std::exception;
    using std::pair;
    using std::tuple;

    using std::string;
    using std::string_view;

    using std::array;
    using std::map;
    using std::set;
    using std::stack;
    using std::unordered_map;
    using std::unordered_set;
    using std::vector;

    // exception type of VisitFirstNonNull
    struct AllNull : std::runtime_error
    {
        using runtime_error::runtime_error;
    };

    // Type-heterogeneity-preserving multi pointer object single visitor.
    // Returns whatever the passed functor would.
    // Throws if all passed objects are null.
    template <typename Lambda, typename T>
    invoke_result_t<Lambda, T*> VisitFirstNonNull(Lambda functor, T* object) noexcept(false)
    {
        if (object)
        {
            return functor(object);
        }
        throw AllNull{ "no non-null object passed" };
    }

    template <typename Lambda, typename T, typename... TOther>
    invoke_result_t<Lambda, T*> VisitFirstNonNull(Lambda functor, T* object, TOther*... rest) noexcept(false)
    {
        if (object)
        {
            return functor(object);
        }
        else
        {
            return VisitFirstNonNull(functor, rest...);
        }
    }

    template< typename SetType >
    void SetMerge(SetType& dest, SetType& src)
    {
#ifdef _WIN32
        dest.merge(src);  // when you have correct libraries.
#else
        for (auto it = src.begin(); it != src.end(); )
        {
            if (dest.find(*it) == dest.end())
            {
                dest.insert(std::move(*it));
                it = src.erase(it);
            }
            else
            {
                ++it;
            }
        }
#endif
    }
}

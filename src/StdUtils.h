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
#include <variant>
#include <optional>

template <typename C, typename... T>
using is_invocable = std::is_invocable<C, T...>;

template <typename C, typename... T>
using invoke_result_t = std::invoke_result_t<C, T...>;

inline constexpr auto none = std::nullopt;

namespace AZ
{
    using std::get;
    using std::holds_alternative;
    using std::monostate;
    using std::variant;
    using std::optional;

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

    template <typename SetType>
    void SetMerge(SetType& dest, SetType& src)
    {
		dest.merge(src);
    }
}

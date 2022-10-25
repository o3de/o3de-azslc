// Tiny Optional
//
// Copyright Alexander Radkov, 2019
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
//

#pragma once

namespace tiny
{
    struct nullopt_t
    {
        struct _Tag {};
        constexpr explicit nullopt_t(_Tag) {}
    };
    inline constexpr nullopt_t none    { nullopt_t::_Tag{} }; // matches boost::none
    inline constexpr nullopt_t nullopt { nullopt_t::_Tag{} }; // matches std::nullopt

    template<class _Ty>
    class optional
    {
    private:
        bool      _assigned;
        _Ty       _value;

        void reset()          { _assigned = false; }
        void assert_value() { if (!has_value())   throw std::runtime_error{ "Bad optional access!" }; }

    public:
        constexpr optional() noexcept
            : _assigned(false)
        { }

        constexpr optional(nullopt_t) noexcept
            : _assigned(false)
        { }

        constexpr optional(_Ty value) noexcept
            : _assigned(true)
            , _value(value)
        { }

        constexpr explicit operator bool() const noexcept { return _assigned; }
        constexpr bool has_value()         const noexcept { return _assigned; }
        constexpr const _Ty * operator->() const          { return std:: addressof(_value); }
        constexpr       _Ty * operator->()                { return std:: addressof(_value); }
        constexpr const _Ty& operator*()   const &        { return _value; }
        constexpr       _Ty& operator*()         &        { return _value; }
        constexpr       _Ty&& operator*()        &&       { return std:: move(_value); }
        constexpr const _Ty&& operator*()  const &&       { return std:: move(_value); }
        constexpr const _Ty&  value()      const &        { assert_value();  return _value; }
        constexpr       _Ty&  value()            &        { assert_value();  return _value; }
        constexpr       _Ty&& value()            &&       { assert_value();  return std:: move(_value); }
        constexpr const _Ty&& value()      const &&       { assert_value();  return std:: move(_value); }

        optional & operator=(const nullopt_t& _Right)
        {
            reset();
            return (*this);
        }

        template<class _Ty2 = _Ty>
        optional & operator=(_Ty2&& _Right)
        {
            _value = std:: forward<_Ty2>(_Right);
            _assigned = true;
            return (*this);
        }

        template<class _Ty2>
        optional & operator=(const optional<_Ty2>& _Right)
        {
            if (_Right)
            {
                _value = *_Right;
                _assigned = true;
            }
            else
            {
                reset();
            }

            return (*this);
        }
    };

    template<class _Ty>
    constexpr bool operator==(const optional<_Ty>& _Left, nullopt_t) noexcept
    {
        return (!_Left.has_value());
    }
    template<class _Ty>
    constexpr bool operator==(nullopt_t, const optional<_Ty>& _Right) noexcept
    {
        return (!_Right.has_value());
    }

    template<class _Ty>
    constexpr bool operator!=(const optional<_Ty>& _Left, nullopt_t) noexcept
    {
        return (_Left.has_value());
    }

    template<class _Ty>
    constexpr bool operator!=(nullopt_t, const optional<_Ty>& _Right) noexcept
    {
        return (_Right.has_value());
    }

    template<class _Ty>
    constexpr bool operator<(const optional<_Ty>&, nullopt_t) noexcept
    {
        return (false);
    }

    template<class _Ty>
    constexpr bool operator<(nullopt_t, const optional<_Ty>& _Right) noexcept
    {
        return (_Right.has_value());
    }

    template<class _Ty>
    constexpr bool operator<=(const optional<_Ty>& _Left, nullopt_t) noexcept
    {
        return (!_Left.has_value());
    }

    template<class _Ty>
    constexpr bool operator<=(nullopt_t, const optional<_Ty>&) noexcept
    {
        return (true);
    }

    template<class _Ty>
    constexpr bool operator>(const optional<_Ty>& _Left, nullopt_t) noexcept
    {
        return (_Left.has_value());
    }

    template<class _Ty>
    constexpr bool operator>(nullopt_t, const optional<_Ty>&) noexcept
    {
        return (false);
    }

    template<class _Ty>
    constexpr bool operator>=(const optional<_Ty>&, nullopt_t) noexcept
    {
        return (true);
    }

    template<class _Ty>
    constexpr bool operator>=(nullopt_t, const optional<_Ty>& _Right) noexcept
    {
        return (!_Right.has_value());
    }
}

/**
 *  @file oalplus/enumerations.hpp
 *  @brief Enumeration-related declarations
 *
 *  @author Matus Chochlik
 *
 *  Copyright 2012-2013 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#pragma once
#ifndef OALPLUS_ENUMERATIONS_1303201759_HPP
#define OALPLUS_ENUMERATIONS_1303201759_HPP

#include <oalplus/config.hpp>
#include <oalplus/string.hpp>
#include <oalplus/auxiliary/enum_class.hpp>
#include <oalplus/auxiliary/base_range.hpp>

namespace oalplus {

#if !OGLPLUS_NO_SCOPED_ENUMS
template <typename Enum>
struct EnumBaseType
{
	typedef ALenum Type;
};
#else
using oglplus::EnumBaseType;
#endif

template <typename EnumType>
inline StrLit EnumValueName(EnumType enum_value)
{
#if !OALPLUS_NO_ENUM_VALUE_NAMES
	typedef typename EnumBaseType<EnumType>::Type BaseType;
	return _ValueName(
		(EnumType*)nullptr,
		BaseType(enum_value)
	);
#else
	OGLPLUS_FAKE_USE(enum_value);
	return StrLit();
#endif
}

template <typename EnumType>
inline aux::CastIterRange<
	const typename EnumBaseType<EnumType>::Type*,
	EnumType
> EnumValueRange(EnumType)
{
#if !OALPLUS_NO_ENUM_VALUE_RANGES
	return _ValueRange((EnumType*)nullptr);
#else
	const typename EnumBaseType<EnumType>::Type* x = nullptr;
	return aux::CastIterRange<
		const typename EnumBaseType<EnumType>::Type*,
		EnumType
	>(x, x);

#endif
}

template <typename EnumType>
inline aux::CastIterRange<
	const typename EnumBaseType<EnumType>::Type*,
	EnumType
> EnumValueRange(void)
{
	return EnumValueRange(EnumType());
}

} // namespace oalplus

#endif // include guard

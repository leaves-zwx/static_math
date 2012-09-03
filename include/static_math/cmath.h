/*
 * Copyright (C) 2011-2012 Morwenn
 *
 * static_math is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * static_math is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef _SMATH_CMATH_H
#define _SMATH_CMATH_H

/**
 * @file static_math/cmath.h
 * @brief compile-time clone of the standard header cmath
 */

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <static_math/utils/type_traits.h>


namespace smath
{
    /**
     * @brief Absolute value of a number
     */
    template<typename T>
    constexpr
    typename std::enable_if<std::is_arithmetic<T>::value, T>::type
    abs(T x);

    #include <static_math/cmath.inl>

} // namespace smath


#endif // _SMATH_CMATH_H
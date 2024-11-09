/**
 * @file all_encodings.h
 * @brief Definition of `all_encodings[]`.
 * @copyright Copyright (C) 2024 The C++ Plus Project.
 */
/*
 * This file is part of the cppp-reiconv library.
 *
 * The cppp-reiconv library is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * The cppp-reiconv library is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with the cppp-reiconv library; see the file LICENSE.
 * If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef _ALL_ENCODINGS_H_
#define _ALL_ENCODINGS_H_

#include "converters.h" // IWYU pragma: keep. Include all the converters for `encodings.h.snippet`.
#include "encoding.h"

#define DEFENCODING(xxx_names, xxx, xxx_index, xxx_ifuncs1, xxx_ifuncs2, xxx_ofuncs1, xxx_ofuncs2)                     \
    {xxx_ifuncs1, xxx_ifuncs2, xxx_ofuncs1, xxx_ofuncs2},
#define DEFCODEPAGE(codepage, xxx)
#define DEFINDEX(alias, name)

static struct encoding const all_encodings[] = {
#include "encodings.h.snippet"
};

#undef DEFINDEX
#undef DEFENCODING
#undef DEFCODEPAGE

#endif /* _ALL_ENCODINGS_H_ */

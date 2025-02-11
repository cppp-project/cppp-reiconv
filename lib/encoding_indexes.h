/**
 * @file encoding_indexes.h
 * @brief All encoding's internal indexes.
 * @copyright Copyright (C) 1999-2002, 2004-2011, 2016, 2022-2023 Free Software Foundation, Inc.
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

#ifndef _ENCODING_INDEXES_H_
#define _ENCODING_INDEXES_H_

#define DEFENCODING(xxx_names, xxx, xxx_index, xxx_ifuncs1, xxx_ifuncs2, xxx_ofuncs1, xxx_ofuncs2) ei_##xxx,
#define DEFCODEPAGE(codepage, xxx)
#define DEFINDEX(alias, index)

enum
{
#include "encodings.h.snippet"
    ei_end
};

#undef DEFINDEX
#undef DEFCODEPAGE
#undef DEFENCODING

#endif /* _ENCODING_INDEXES_H_ */

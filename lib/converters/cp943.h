/**
 * @file cp943.h
 * @brief IBM CP943
 * @copyright Copyright (C) 1999-2001 Free Software Foundation, Inc.
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

#ifndef _CP943_H_
#define _CP943_H_

#include "reiconv_defines.h" // IWYU pragma: keep

/* This is essentially CP932, with many mappings missing in the AIX conversion
   table. We just pretend it were the same as CP932. */

#define cp943_mbtowc cp932_mbtowc
#define cp943_wctomb cp932_wctomb

#endif /* _CP943_H_ */

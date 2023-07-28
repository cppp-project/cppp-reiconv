/*
 * Copyright (C) 1999-2001 Free Software Foundation, Inc.
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
 * License along with the cppp-reiconv library; see the file COPYING.
 * If not, see <https://www.gnu.org/licenses/>.
 */

/*
 * IBM CP943
 */

/* This is essentially CP932, with many mappings missing in the AIX conversion
   table. We just pretend it were the same as CP932. */

#define cp943_mbtowc cp932_mbtowc
#define cp943_wctomb cp932_wctomb

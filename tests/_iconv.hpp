/**
 * @file _iconv.hpp
 * @author ChenPi11
 * @brief C++ Plus cppp-reiconv package.
 * @version 3.0.0
 * @date 2023-10-22
 * @copyright Copyright (C) 1999-2023 Free Software Foundation, Inc.
 */
/* Copyright (C) 1999-2023 Free Software Foundation, Inc.
   This file is part of the cppp-reiconv library.

   The cppp-reiconv library is free software; you can redistribute it
   and/or modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either version 3
   of the License, or (at your option) any later version.

   The cppp-reiconv library is distributed in the hope that it will be
   useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the cppp-reiconv library; see the file COPYING.
   If not, see <https://www.gnu.org/licenses/>.  */

#pragma once

#include <stddef.h>

#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

extern "C++"
{
    namespace cppp
    {
        namespace base
        {
            namespace reiconv
            {
                typedef void* iconv_t;

                extern DLL_VARIABLE iconv_t iconv_open(const char* tocode, const char* fromcode);
                extern DLL_VARIABLE size_t iconv(iconv_t icd, char **inbuf, size_t *inbytesleft, char **outbuf, size_t *outbytesleft);
                extern DLL_VARIABLE int iconv_close(iconv_t cd);
            } // namespace reiconv
        } // namespace base
    } // namespace cppp
}

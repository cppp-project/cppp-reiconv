/*
 * Copyright (C) 2023 The C++ Plus Project.
 * This file is part of the cppp-reiconv Library.
 *
 * The cppp-reiconv Library is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * The cppp-reiconv Library is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with the cppp-reiconv Library; see the file LICENSE.
 * If not, see <https://www.gnu.org/licenses/>.
 */

/*
  Complete check of function 'ascii_xxtoxx'.
*/

#include <iostream>

#include "utils.hpp"
#include <cppp/reiconv.hpp>
using namespace cppp::base::reiconv;

#define ascii_map(type) { \
    (type)0x00, (type)0x01, (type)0x02, (type)0x03, (type)0x04, (type)0x05, \
    (type)0x06, (type)0x07, (type)0x08, (type)0x09, (type)0x0A, (type)0x0B, \
    (type)0x0C, (type)0x0D, (type)0x0E, (type)0x0F, (type)0x10, (type)0x11, \
    (type)0x12, (type)0x13, (type)0x14, (type)0x15, (type)0x16, (type)0x17, \
    (type)0x18, (type)0x19, (type)0x1A, (type)0x1B, (type)0x1C, (type)0x1D, \
    (type)0x1E, (type)0x1F, (type)0x20, (type)0x21, (type)0x22, (type)0x23, \
    (type)0x24, (type)0x25, (type)0x26, (type)0x27, (type)0x28, (type)0x29, \
    (type)0x2A, (type)0x2B, (type)0x2C, (type)0x2D, (type)0x2E, (type)0x2F, \
    (type)0x30, (type)0x31, (type)0x32, (type)0x33, (type)0x34, (type)0x35, \
    (type)0x36, (type)0x37, (type)0x38, (type)0x39, (type)0x3A, (type)0x3B, \
    (type)0x3C, (type)0x3D, (type)0x3E, (type)0x3F, (type)0x40, (type)0x41, \
    (type)0x42, (type)0x43, (type)0x44, (type)0x45, (type)0x46, (type)0x47, \
    (type)0x48, (type)0x49, (type)0x4A, (type)0x4B, (type)0x4C, (type)0x4D, \
    (type)0x4E, (type)0x4F, (type)0x50, (type)0x51, (type)0x52, (type)0x53, \
    (type)0x54, (type)0x55, (type)0x56, (type)0x57, (type)0x58, (type)0x59, \
    (type)0x5A, (type)0x5B, (type)0x5C, (type)0x5D, (type)0x5E, (type)0x5F, \
    (type)0x60, (type)0x61, (type)0x62, (type)0x63, (type)0x64, (type)0x65, \
    (type)0x66, (type)0x67, (type)0x68, (type)0x69, (type)0x6A, (type)0x6B, \
    (type)0x6C, (type)0x6D, (type)0x6E, (type)0x6F, (type)0x70, (type)0x71, \
    (type)0x72, (type)0x73, (type)0x74, (type)0x75, (type)0x76, (type)0x77, \
    (type)0x78, (type)0x79, (type)0x7A, (type)0x7B, (type)0x7C, (type)0x7D, \
    (type)0x7E, (type)0x7F }

const char mbstr[] = ascii_map(char);
const char16_t u16str[] = ascii_map(char16_t);
const char32_t u32str[] = ascii_map(char32_t);

void check_mbtou16()
{
    char16_t* res = nullptr;
    size_t len = 0;
    bool ret = ascii_mbtou16(mbstr, sizeof(mbstr), &res, &len);
    if (!ret)
    {
        error("ascii_mbtou16", "Failed to convert.");
    }
    for(size_t i = 0; i < len; ++i)
    {
        if (res[i] != u16str[i])
        {
            error("check_mbtou16", "Result is not correct. (at " + std::to_string(i) + ", " + std::to_string(res[i]) + " != " + std::to_string(u16str[i]) + ")");
        }
    }
    free(res);
    success("check_mbtou16", "Conversion from multi-bytes to UTF-16 success.");
}

void check_mbtou32()
{
    char32_t* res = nullptr;
    size_t len = 0;
    bool ret = ascii_mbtou32(mbstr, sizeof(mbstr), &res, &len);
    if (!ret)
    {
        error("ascii_mbtou32", "Failed to convert.");
    }
    for(size_t i = 0; i < len; ++i)
    {
        if (res[i] != u32str[i])
        {
            error("ascii_mbtou32", "Result is not correct. (at " + std::to_string(i) + ", " + std::to_string(res[i]) + " != " + std::to_string(u32str[i]) + ")");
        }
    }
    free(res);
    success("check_mbtou32", "Conversion from multi-bytes to UTF-32 success.");
}

int main()
{
    check_mbtou16();
    check_mbtou32();
    return 0;
}

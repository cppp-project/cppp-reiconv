/**
 * @file table-from.hpp
 * @brief Create a table from CHARSET to Unicode.
 * @author ChenPi11
 * @copyright Copyright (C) 2000-2002, 2004-2005 Free Software Foundation, Inc.
 * @copyright Copyright (C) 2024 The C++ Plus Project.
 */
/*
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

#pragma once

#include <cppp/reiconv.h>
#include <iconv.h>

#ifndef _CPPP_API
#error This header is not API header of cppp-reiconv.
#endif

#include <cerrno>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>

#include "output.hpp"
#include "utils.hpp"

/**
 * @brief Hex dump of a buffer.
 * @param buf The buffer.
 * @param buflen The length of the buffer.
 * @return The hex dump of the buffer.
 */
inline std::string hexbuf(unsigned char *buf, unsigned int buflen)
{
    std::string res{"0x"};
    for (unsigned int i = 0; i < buflen; i++)
    {
        res += tohex(buf[i], 2);
    }

    return res;
}

/**
 * @brief Try to convert a buffer.
 * @param cd The cppp-reiconv handle.
 * @param buf The buffer.
 * @param buflen The length of the buffer.
 * @param out The output buffer.
 * @return The number of Unicode values in the output buffer.
 */
static int try_convert(iconv_t cd, unsigned char *buf, unsigned int buflen, unsigned int *out)
{
    const char *inbuf = (const char *)buf;
    std::size_t inbytesleft = buflen;
    char *outbuf = (char *)out;
    std::size_t outbytesleft = 3 * sizeof(unsigned int);
    std::size_t result;
    iconv(cd, nullptr, nullptr, nullptr, nullptr);
    result = iconv(cd, (char **)&inbuf, &inbytesleft, &outbuf, &outbytesleft);
    if (result != (std::size_t)(-1))
    {
        result = iconv(cd, nullptr, nullptr, &outbuf, &outbytesleft);
    }
    if (result == (std::size_t)(-1))
    {
        if (errno == EILSEQ)
        {
            return -1;
        }
        else if (errno == EINVAL)
        {
            return 0;
        }
        else
        {
            print_stderr("hexbuf(): {}\n", hexbuf(buf, buflen));
            error("table-from", "Iconv error.");
        }
    }
    else if (result > 0) /* Ignore conversions with transliteration. */
    {
        return -1;
    }
    else
    {
        if (inbytesleft != 0)
        {
            print_stderr("{}: inbytes = {}, outbytes = {}\n", hexbuf(buf, buflen), std::to_string(buflen - inbytesleft),
                         std::to_string(3 * sizeof(unsigned int) - outbytesleft));
            error("table-from", "Iconv error.");
        }
        return (3 * sizeof(unsigned int) - outbytesleft) / sizeof(unsigned int);
    }
    return 0;
}

/**
 * @brief Returns the out[] buffer as a Unicode value, formatted as 0x%04X.
 * @param out The out buffer.
 * @param outlen The length of the out buffer.
 * @return The Unicode value.
 */
static const char *ucs4_decode(const unsigned int *out, unsigned int outlen, bool bmp_only)
{
    static char hexbuf[21];
    char *p = hexbuf;
    while (outlen > 0)
    {
        if (p > hexbuf)
        {
            *p++ = ' ';
        }
        std::sprintf(p, "0x%04X", out[0]);
        out += 1;
        outlen -= 1;
        if (bmp_only && std::strlen(p) > 6)
        {
            return nullptr;
        }
        p += std::strlen(p);
    }
    return hexbuf;
}

/**
 * @brief Generate the table.
 * @param cd The cppp-reiconv handle.
 * @param i The index buffer.
 * @param index The index for generation. 0-3.
 * @param out The out buffer.
 * @param buf The index buffer.
 * @param bmp_only When true, ignore conversions outside Unicode plane 0.
 * @param save_file The save file stream.
 */
inline void run_table_from_test(iconv_t cd, unsigned int (&i)[4], std::size_t index, unsigned int (&out)[3],
                                unsigned char (&buf)[4], bool bmp_only, std::ofstream &save_file)
{
    int result;
    for (i[index] = 0; i[index] < 0x100; i[index]++)
    {
        buf[index] = i[index];
        result = try_convert(cd, buf, index + 1, out);
        if (result > 0)
        {
            const char *unicode = ucs4_decode(out, result, bmp_only);
            if (unicode != nullptr)
            {
                save_file.write("0x", 2);
                for (std::size_t j = 0; j < index + 1; j++)
                {
                    write_stream(save_file, tohex(i[j], 2));
                }
                write_stream(save_file, print_string("\t{}\n", unicode));
            }
        }
        else if (result == 0)
        {
            if (index >= 3)
            {
                print_stderr("{}: Incomplete byte sequence"
                             "\n",
                             hexbuf(buf, 4));
                error("table-from", "Incomplete byte sequence.");
            }
            run_table_from_test(cd, i, index + 1, out, buf, bmp_only, save_file);
        }
    }
}

/**
 * @brief Create a table from CHARSET to Unicode.
 * @param save_file_path The path of the save file.
 * @param charset The CHARSET.
 */
inline void table_from(const std::filesystem::path &save_file_path, const std::string &charset)
{
    /* If nonzero, ignore conversions outside Unicode plane 0. */
    bool bmp_only = (charset == "UTF-8");
    int search_depth = (bmp_only ? 3 : 4);

    std::ofstream save_file{save_file_path, std::ios::out | std::ios::trunc};
    if (!save_file.good())
    {
        error(save_file_path.string(), "Cannot open save file.");
    }

    iconv_t cd = iconv_open("UCS-4-INTERNAL", charset.c_str());
    if (cd == (iconv_t)(-1))
    {
        error("iconv_open", " Iconv open error.");
    }

    unsigned int out[3];
    unsigned char buf[4];
    unsigned int i[4];

    run_table_from_test(cd, i, 0, out, buf, bmp_only, save_file);

    iconv_close(cd);
    save_file.close();
}

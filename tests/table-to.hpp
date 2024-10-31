/**
 * @file table-to.hpp
 * @brief Create a table from Unicode to CHARSET.
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

#include "_iconv.hpp"

#include <cerrno>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>

#include "output.hpp"

inline void table_to(const std::filesystem::path &save_file_path, const std::string &charset)
{
    using namespace cppp::base::reiconv;

    // When testing UTF-8, stop at 0x10000, otherwise the output file gets too big.
    int bmp_only = (charset == "UTF-8");

    std::ofstream save_file{save_file_path, std::ios::out | std::ios::trunc};
    if (!save_file.good())
    {
        error(save_file_path, "Cannot open save file.");
    }

    iconv_t cd = iconv_open(charset.c_str(), "UCS-4-INTERNAL", true);
    if (cd == (iconv_t)(-1))
    {
        error("iconv_open", "Iconv open error.");
    }

    unsigned int i;
    unsigned char buf[10];
    for (i = 0; i < (bmp_only ? 0x10000 : 0x110000); i++)
    {
        unsigned int in = i;
        const char *inbuf = (const char *)&in;
        size_t inbytesleft = sizeof(unsigned int);
        char *outbuf = (char *)buf;
        size_t outbytesleft = sizeof(buf);
        size_t result;
        size_t result2 = 0;
        iconv(cd, nullptr, nullptr, nullptr, nullptr);
        result = iconv(cd, (char **)&inbuf, &inbytesleft, &outbuf, &outbytesleft);
        if (result != (size_t)(-1))
        {
            result2 = iconv(cd, nullptr, nullptr, &outbuf, &outbytesleft);
        }
        if (result == (size_t)(-1) || result2 == (size_t)(-1))
        {
            if (errno != EILSEQ)
            {
                std::cerr << "0x";
                std::cerr << std::hex << std::uppercase << std::setw(2) << std::setfill('0') << i;
                std::cerr << ": Iconv error." << "\n";
                error("table-to", "Iconv error.");
            }
        }
        else if (result == 0) /* Ignore conversions with transliteration. */
        {
            if (inbytesleft == 0 && outbytesleft < sizeof(buf))
            {
                unsigned int jmax = sizeof(buf) - outbytesleft;
                unsigned int j;
                save_file << "0x";
                for (j = 0; j < jmax; j++)
                {
                    save_file << std::hex << std::uppercase << std::setw(2) << std::setfill('0') << (int)buf[j];
                }
                save_file << "\t0x";
                save_file << std::hex << std::uppercase << std::setw(4) << std::setfill('0') << i << "\n";
            }
            else if (inbytesleft == 0 && i >= 0xe0000 && i < 0xe0080)
            {
                /* Language tags may silently be dropped. */
            }
            else
            {
                std::cerr << "0x";
                std::cerr << std::hex << std::uppercase << std::setw(2) << std::setfill('0') << i;
                std::cerr << ": inbytes = " << (long)(sizeof(unsigned int) - inbytesleft);
                std::cerr << ", outbytes = " << (long)(sizeof(buf) - outbytesleft) << "\n";
                error("iconv", "Iconv error.");
            }
        }
    }

    iconv_close(cd);

    save_file.close();
}

/* Copyright (C) 2000-2002, 2004-2005 Free Software Foundation, Inc.
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

/* Create a table from Unicode to CHARSET. */

#ifndef _TABLE_TO_HPP
#define _TABLE_TO_HPP

#include <cppp/reiconv.hpp>

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cerrno>

#include "throw_error.hpp"

using namespace cppp::base::reiconv;

namespace test
{
    namespace _table_to
    {
        FILE* save_file;
    }

    void table_to(const std::string& save_file_path, const std::string& charset)
    {
        using namespace _table_to;

        save_file = fopen(save_file_path.c_str(), "w");
        if (save_file == NULL)
        {
            error("table-to", "Cannot open save file.");
        }

        iconv_t cd;
        int bmp_only;

        cd = iconv_open(charset.c_str(), "UCS-4-INTERNAL");
        if (cd == (iconv_t)(-1))
        {
            error("iconv_open", "Iconv open error.");
        }

        /* When testing UTF-8, stop at 0x10000, otherwise the output file gets too
            big. */
        bmp_only = (charset == "UTF-8");

        {
            unsigned int i;
            unsigned char buf[10];
            for (i = 0; i < (bmp_only ? 0x10000 : 0x110000); i++)
            {
                unsigned int in = i;
                const char* inbuf = (const char*) &in;
                size_t inbytesleft = sizeof(unsigned int);
                char* outbuf = (char*)buf;
                size_t outbytesleft = sizeof(buf);
                size_t result;
                size_t result2 = 0;
                iconv(cd, NULL, NULL, NULL, NULL);
                result = iconv(cd, (char**)&inbuf, &inbytesleft, &outbuf, &outbytesleft);
                if (result != (size_t)(-1))
                {
                    result2 = iconv(cd, NULL, NULL, &outbuf, &outbytesleft);
                }
                if (result == (size_t)(-1) || result2 == (size_t)(-1))
                {
                    if (errno != EILSEQ)
                    {
                        fprintf(stderr, "0x%02X: iconv error.\n", i);
                        error("iconv", "Iconv error.");
                    }
                }
                else if (result == 0) /* ignore conversions with transliteration */
                {
                    if (inbytesleft == 0 && outbytesleft < sizeof(buf))
                    {
                        unsigned int jmax = sizeof(buf) - outbytesleft;
                        unsigned int j;
                        fprintf(save_file, "0x");
                        for (j = 0; j < jmax; j++)
                        {
                            fprintf(save_file, "%02X",buf[j]);
                        }
                        fprintf(save_file, "\t0x%04X\n", i);
                    }
                    else if (inbytesleft == 0 && i >= 0xe0000 && i < 0xe0080)
                    {
                        /* Language tags may silently be dropped. */
                    }
                    else
                    {
                        fprintf(stderr, "0x%02X: inbytes = %ld, outbytes = %ld\n", i, (long)(sizeof(unsigned int) - inbytesleft), (long)(sizeof(buf) - outbytesleft));
                        error("iconv", "Iconv error.");
                    }
                }
            }
        }

        if (iconv_close(cd) < 0)
        {
            error("iconv_close", "Iconv close error.");
        }

        if (fclose(save_file) < 0)
        {
            error("fclose", "IO error.");
        }
    }   
}

#endif

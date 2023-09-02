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

/* Create a table from CHARSET to Unicode. */

#ifndef _TABLE_FROM_HPP
#define _TABLE_FROM_HPP

#include <cppp/reiconv.hpp>

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cerrno>

#include "throw_error.hpp"

using namespace cppp::base::reiconv;

namespace test
{
    namespace _table_from
    {
        /* If nonzero, ignore conversions outside Unicode plane 0. */
        static int bmp_only;

        FILE* save_file;

        static const char* hexbuf (unsigned char buf[], unsigned int buflen)
        {
            static char msg[50];
            switch (buflen)
            {
                case 1: sprintf(msg,"0x%02X",buf[0]); break;
                case 2: sprintf(msg,"0x%02X%02X",buf[0],buf[1]); break;
                case 3: sprintf(msg,"0x%02X%02X%02X",buf[0],buf[1],buf[2]); break;
                case 4: sprintf(msg,"0x%02X%02X%02X%02X",buf[0],buf[1],buf[2],buf[3]); break;
                default: error("hexbuf", "Buflen out of range.");
            }
            return msg;
        }

        static int try_do (iconv_t cd, unsigned char buf[], unsigned int buflen, unsigned int* out)
        {
            const char* inbuf = (const char*) buf;
            size_t inbytesleft = buflen;
            char* outbuf = (char*) out;
            size_t outbytesleft = 3 * sizeof(unsigned int);
            size_t result;
            iconv(cd, NULL, NULL, NULL, NULL);
            result = iconv(cd, (char**)&inbuf, &inbytesleft, &outbuf, &outbytesleft);
            if (result != (size_t)(-1))
            {
                result = iconv(cd, NULL, NULL, &outbuf, &outbytesleft);
            }
            if (result == (size_t)(-1))
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
                    fprintf(stderr, "%s: iconv error.", hexbuf(buf, buflen));
                    error("table-from", "Iconv error.");
                }
            }
            else if (result > 0) /* ignore conversions with transliteration */
            {
                return -1;
            }
            else
            {
                if (inbytesleft != 0)
                {
                    fprintf(stderr, "%s: inbytes = %ld, outbytes = %ld\n", hexbuf(buf, buflen), (long)(buflen - inbytesleft), (long)(3 * sizeof(unsigned int) - outbytesleft));
                    error("table-from", "Iconv error.");
                }
                return (3 * sizeof(unsigned int) - outbytesleft) / sizeof(unsigned int);
            }
            return 0;
        }

        /* Returns the out[] buffer as a Unicode value, formatted as 0x%04X. */
        static const char* ucs4_decode (const unsigned int* out, unsigned int outlen)
        {
            static char hexbuf[21];
            char* p = hexbuf;
            while (outlen > 0)
            {
                if (p > hexbuf)
                *p++ = ' ';
                sprintf (p, "0x%04X", out[0]);
                out += 1; outlen -= 1;
                if (bmp_only && strlen(p) > 6)
                return NULL;
                p += strlen(p);
            }
            return hexbuf;
        }

    }

    void table_from (const std::string& save_file_path, const std::string& charset)
    {
        using namespace _table_from;

        save_file = fopen(save_file_path.c_str(), "w");
        if (save_file == NULL)
        {
            error("table-from", "Can't open save file.");
        }

        iconv_t cd;
        int search_depth;

        cd = iconv_open("UCS-4-INTERNAL", charset.c_str());
        if (cd == (iconv_t)(-1))
        {
            error("iconv_open"," Iconv open error.");
        }

        /* When testing UTF-8, stop at 0x10000, otherwise the output file gets too
            big. */
        bmp_only = (charset == "UTF-8");
        search_depth = (bmp_only ? 3 : 4);

        {
            unsigned int out[3];
            unsigned char buf[4];
            unsigned int i0, i1, i2, i3;
            int result;
            for (i0 = 0; i0 < 0x100; i0++)
            {
                buf[0] = i0;
                result = try_do(cd, buf, 1, out);
                if (result < 0)
                {
                    
                }
                else if (result > 0)
                {
                    const char* unicode = ucs4_decode(out, result);
                    if (unicode != NULL)
                    {
                        fprintf(save_file, "0x%02X\t%s\n", i0, unicode);
                    }
                }
                else
                {
                    for (i1 = 0; i1 < 0x100; i1++)
                    {
                        buf[1] = i1;
                        result = try_do(cd, buf, 2, out);
                        if (result < 0)
                        {

                        }
                        else if (result > 0)
                        {
                            const char* unicode = ucs4_decode(out,result);
                            if (unicode != NULL)
                            {
                                fprintf(save_file, "0x%02X%02X\t%s\n", i0, i1, unicode);
                            }
                        }
                        else
                        {
                            for (i2 = 0; i2 < 0x100; i2++)
                            {
                                buf[2] = i2;
                                result = try_do(cd, buf, 3, out);
                                if (result < 0)
                                {

                                }
                                else if (result > 0)
                                {
                                    const char* unicode = ucs4_decode(out, result);
                                    if (unicode != NULL)
                                    {
                                        fprintf(save_file, "0x%02X%02X%02X\t%s\n", i0, i1, i2, unicode);
                                    }
                                }
                                else if (search_depth > 3)
                                {
                                    for (i3 = 0; i3 < 0x100; i3++)
                                    {
                                        buf[3] = i3;
                                        result = try_do(cd, buf, 4, out);
                                        if (result < 0)
                                        {

                                        }
                                        else if (result > 0)
                                        {
                                            const char* unicode = ucs4_decode(out, result);
                                            if (unicode != NULL)
                                            {
                                                fprintf(save_file, "0x%02X%02X%02X%02X\t%s\n", i0, i1, i2, i3, unicode);
                                            }
                                        }
                                        else
                                        {
                                            fprintf(stderr, "%s: incomplete byte sequence\n", hexbuf(buf, 4));
                                            error("table-from", "Incomplete byte sequence.");
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        if (iconv_close(cd) < 0)
        {
            error("iconv_close","Iconv close error.");
        }

        if (fclose(save_file) < 0)
        {
            error("table-from", "IO Error.");
        }
    }


}

#endif

/* Copyright (C) 2005, 2012 Free Software Foundation, Inc.
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

/* Creates the beyond-BMP part of the GB18030.TXT reference table. */
/* Or creates the UTF-8.TXT reference table. */

/* Usage: ./data_generator [utf-8 | gb18030:2005 gb18030:2022] datadir stdout */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "throw_error.hpp"

void gengb18030z()
{
    int i1, i2, i3, i4, uc;

    uc = 0x10000;
    for (i1 = 0x90; i1 <= 0xe3; i1++)
    {
        for (i2 = 0x30; i2 <= 0x39; i2++)
        {
            for (i3 = 0x81; i3 <= 0xfe; i3++)
            {
                for (i4 = 0x30; i4 <= 0x39; i4++)
                {
                    
                    char buffer[32] {};
                    sprintf(buffer, "0x%02X%02X%02X%02X\t0x%X\n", i1, i2, i3, i4, uc);
                    fwrite(buffer, sizeof(char), strlen(buffer), stdout);
                    uc++;
                    if (uc == 0x110000)
                    {
                        goto done;
                    }
                }
            }
        }
    }
    done:

    if (ferror(stdout) || fclose(stdout))
    {
        error("gengb18030z", "IO Error.");
    }
    fflush(stdout);
}

void genutf8()
{
    int i1, i2, i3;

    /* Range 0x0000..0x007f */
    for (i1 = 0; i1 < 0x80; i1++)
    {
        char buffer[32] {};
        sprintf(buffer, "0x%02X\t0x%04X\n", i1, i1);
        fwrite(buffer, sizeof(char), strlen(buffer), stdout);
    }
    /* Range 0x0080..0x07ff */
    for (i1 = 2; i1 < 32; i1++)
    {
        for (i2 = 0; i2 < 64; i2++)
        {
            char buffer[32] {};
            sprintf(buffer, "0x%02X%02X\t0x%04X\n", 0xc0+i1, 0x80+i2, (i1 << 6) + i2);
            fwrite(buffer, sizeof(char), strlen(buffer), stdout);
        }
    }
    /* Range 0x0800..0xffff, except 0xd800..0xdfff */
    for (i1 = 0; i1 < 16; i1++)
        for (i2 = (i1==0 ? 32 : 0); i2 < 64; i2++)
        {
            for (i3 = 0; i3 < 64; i3++)
            {
                int u = (i1 << 12) + (i2 << 6) + i3;
                if (!(u >= 0xd800 && u < 0xe000))
                {
                    char buffer[32] {};
                    sprintf(buffer, "0x%02X%02X%02X\t0x%04X\n", 0xe0 + i1, 0x80 + i2, 0x80 + i3, u);
                    fwrite(buffer, sizeof(char), strlen(buffer), stdout);
                }
            }
        }

    if (ferror(stdout) || fclose(stdout))
    {
        error("genutf8", "IO Error.");
    }
    fflush(stdout);
}

int main (int argc, char *argv[])
{
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s [utf-8 | gb18030z]\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "utf-8") == 0)
    {
        genutf8();
    }
    else if (strcmp(argv[1], "gb18030z") == 0)
    {
        gengb18030z();
    }
    else
    {
        fprintf(stderr, "Usage: %s [utf-8 | gb18030z]\n", argv[0]);
    }

    fclose(stdout);
    return 0;
}

/**
 * @file reiconv-test.hpp
 * @brief Creates the beyond-BMP part of the GB18030.TXT reference table.
 * Or creates the UTF-8.TXT reference table.
 * @author ChenPi11
 * @copyright Copyright (C) 2005, 2012 Free Software Foundation, Inc.
 * @copyright Copyright (C) 2024 The C++ Plus Project.
 */
/**
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
 * If not, see <https://www.gnu.org/licenses/>.  */

#include <cstdio>
#include <cstdlib>
#include <string>

/**
 * @brief Generates the GB18030 reference table.
 */
void gengb18030z()
{
    int uc = 0x10000;

    for (int i1 = 0x90; i1 <= 0xe3; i1++)
    {
        for (int i2 = 0x30; i2 <= 0x39; i2++)
        {
            for (int i3 = 0x81; i3 <= 0xfe; i3++)
            {
                for (int i4 = 0x30; i4 <= 0x39; i4++)
                {
                    std::printf("0x%02X%02X%02X%02X\t0x%X\n", i1, i2, i3, i4, uc);
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

    std::fflush(stdout);
}

/**
 * @brief Generates the UTF-8 reference table.
 */
void genutf8()
{
    int i1, i2, i3;

    /* Range 0x0000..0x007f */
    for (int i1 = 0; i1 < 0x80; i1++)
    {
        std::printf("0x%02X\t0x%04X\n", i1, i1);
    }

    /* Range 0x0080..0x07ff */
    for (i1 = 2; i1 < 32; i1++)
    {
        for (i2 = 0; i2 < 64; i2++)
        {
            std::printf("0x%02X%02X\t0x%04X\n", 0xc0 + i1, 0x80 + i2, (i1 << 6) + i2);
        }
    }
    /* Range 0x0800..0xffff, except 0xd800..0xdfff */
    for (i1 = 0; i1 < 16; i1++)
        for (i2 = (i1 == 0 ? 32 : 0); i2 < 64; i2++)
        {
            for (i3 = 0; i3 < 64; i3++)
            {
                int u = (i1 << 12) + (i2 << 6) + i3;
                if (!(u >= 0xd800 && u < 0xe000))
                {
                    std::printf("0x%02X%02X%02X\t0x%04X\n", 0xe0 + i1, 0x80 + i2, 0x80 + i3, u);
                }
            }
        }
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::fprintf(stderr, "Usage: %s [utf-8 | gb18030z]\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (std::string(argv[1]) == "utf-8")
    {
        genutf8();
        return EXIT_SUCCESS;
    }

    gengb18030z();
    return EXIT_SUCCESS;
}

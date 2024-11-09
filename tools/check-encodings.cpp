/**
 * @file check-encodings.cpp
 * @brief Check if all names in `encodings.h.snippet` are in upper case.
 * @copyright Copyright (C) 2024 The C++ Plus Project.
 * @note `name_canonicalize()` will upper the encoding name. So lower-case cannot be recognized.
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

#include <cctype>
#include <cstdio>
#include <cstdlib>

template <std::size_t N> void check_upper_case(const char *const (&names)[N], ...)
{
    for (std::size_t i = 0; i < N; i++)
    {
        const char *name = names[i];
        for (; *name; name++)
        {
            unsigned char c = *(unsigned char *)name;
            if (std::islower(c))
            {
                std::fprintf(stderr, "Encoding name `%s` is not in upper case.\n", names[i]);
                std::exit(EXIT_FAILURE);
            }
        }
    }
}

int main(int argc, char *argv[])
{
    if (argc != 1)
    {
        std::fprintf(stderr, "Usage: %s\n", argv[0]);
        return EXIT_FAILURE;
    }

#define DEFENCODING(xxx_names, xxx, xxx_index, xxx_ifuncs1, xxx_ifuncs2, xxx_ofuncs1, xxx_ofuncs2)                     \
    {                                                                                                                  \
        static const char *const names[] = BRACIFY xxx_names;                                                          \
        check_upper_case(names);                                                                                       \
    }
#define DEFCODEPAGE(codepage, xxx)
#define DEFINDEX(alias, index)
#define BRACIFY(...)                                                                                                   \
    {                                                                                                                  \
        __VA_ARGS__                                                                                                    \
    }

#include "encodings.h.snippet"

    return EXIT_SUCCESS;
}

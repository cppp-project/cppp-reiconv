/**
 * @file genaliases.cpp
 * @brief Generate index enum for reiconv users.
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

#include <cstdlib>
#include <string>
#include <unordered_map>

#include "encoding_indexes.h"  // IWYU pragma: keep

#define DEFENCODING(xxx_names, xxx, xxx_index, xxx_ifuncs1, xxx_ifuncs2, xxx_ofuncs1, xxx_ofuncs2)                     \
    {#xxx_index, ei_##xxx},
#define DEFCODEPAGE(codepage, xxx)
#define DEFINDEX(alias, index)

std::unordered_map<std::string, int> enum_data = {
#include "encodings.h.snippet"
};

#undef DEFINDEX
#undef DEFCODEPAGE
#undef DEFENCODING

#define DEFENCODING(xxx_names, xxx, xxx_index, xxx_ifuncs1, xxx_ifuncs2, xxx_ofuncs1, xxx_ofuncs2)
#define DEFCODEPAGE(codepage, xxx)
#define DEFINDEX(alias, index) {#alias, #index},

std::unordered_map<std::string, std::string> aliases = {
#include "encodings.h.snippet"
};

#undef DEFINDEX
#undef DEFCODEPAGE
#undef DEFENCODING

void cpp_gen()
{
    std::puts("namespace reiconv::encoding");
    std::puts("{");
    std::puts("    enum class Encodings");
    std::puts("    {");
    for (auto &it : enum_data)
    {
        std::printf("        %s = %d,\n", it.first.c_str(), it.second);
    }
    for (auto &it : aliases)
    {
        std::printf("        %s = %s,\n", it.first.c_str(), it.second.c_str());
    }
    std::puts("    };");
    std::puts("} // reiconv::encoding");
    std::fflush(stdout);
}

void c_gen()
{
    std::puts("enum");
    std::puts("{");
    for (auto &it : enum_data)
    {
        std::printf("    ENCODING_%s = %d,\n", it.first.c_str(), it.second);
    }
    for (auto &it : aliases)
    {
        std::printf("    ENCODING_%s = ENCODING_%s,\n", it.first.c_str(), it.second.c_str());
    }
    std::puts("};");
    std::fflush(stdout);
}

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        std::fprintf(stderr, "Usage: %s [C | C++]\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (std::string(argv[1]) == "C")
    {
        c_gen();
    }
    else if (std::string(argv[1]) == "C++")
    {
        cpp_gen();
    }
    else
    {
        std::fprintf(stderr, "Usage: %s [C | C++]\n", argv[0]);
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

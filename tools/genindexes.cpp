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

/* Generate indexes enum. */

#include <cstdlib>
#include <iostream>
#include <map>

#define DEFENCODING(xxx_names, xxx, xxx_index, xxx_ifuncs1, xxx_ifuncs2, xxx_ofuncs1, xxx_ofuncs2) ei_##xxx,
#define DEFCODEPAGE(codepage, xxx)
#define DEFINDEX(alias, index)

    enum
    {
        #include "encodings.h.snippet"
    };

#undef DEFINDEX
#undef DEFCODEPAGE
#undef DEFENCODING

#define DEFENCODING(xxx_names, xxx, xxx_index, xxx_ifuncs1, xxx_ifuncs2, xxx_ofuncs1, xxx_ofuncs2) { #xxx_index, ei_##xxx },
#define DEFCODEPAGE(codepage, xxx)
#define DEFINDEX(alias, index)

std::map<std::string, int> enum_data =
{
    #include "encodings.h.snippet"
};

#undef DEFINDEX
#undef DEFCODEPAGE
#undef DEFENCODING

#define DEFENCODING(xxx_names, xxx, xxx_index, xxx_ifuncs1, xxx_ifuncs2, xxx_ofuncs1, xxx_ofuncs2)
#define DEFCODEPAGE(codepage, xxx)
#define DEFINDEX(alias, index) {#alias, #index},

std::map<std::string, std::string> aliases =
{
    #include "encodings.h.snippet"
};

#undef DEFINDEX
#undef DEFCODEPAGE
#undef DEFENCODING

int main()
{
    std::cout << "namespace cppp::base::encoding\n";
    std::cout << "{\n";
    std::cout << "    enum class Encodings\n";
    std::cout << "    {\n";
    for (auto& it : enum_data)
    {
        std::cout << "        " << it.first << " = " << it.second << ",\n";
    }
    for (auto& it : aliases)
    {
        std::cout << "        " << it.first << " = " << it.second << ",\n";
    }
    std::cout << "    };\n";
    std::cout << "} // cppp::base::encoding\n";

    return EXIT_SUCCESS;
}

/*
 * Copyright (C) 2024 The C++ Plus Project.
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

/* Creates the aliases.gperf table. */

#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <ostream>

static void emit_alias(std::ostream &out, const char *alias, const char *c_name)
{
    const char *s = alias;
    for (; *s; s++)
    {
        unsigned char c = *(unsigned char *)s;
        if (c >= 0x80)
        {
            std::fprintf(stderr, "Error: non-ASCII character in alias '%s'\n", alias);
            exit(EXIT_FAILURE);
        }
        c = std::toupper(c);
        out.put(c);
    }
    out << ", ei_" << c_name << std::endl;
}

static void emit_encoding(std::ofstream &out, const char *const *names, size_t n, const char *c_name)
{
    for (; n > 0; names++, n--)
    {
        emit_alias(out, *names, c_name);
    }
}

int main(int argc, char *argv[])
{
    std::string aliases_file_name;

    if (argc != 2)
    {
        std::fprintf(stderr, "Usage: %s aliases-file\n", argv[0]);
        return EXIT_FAILURE;
    }

    aliases_file_name = argv[1];

    std::ofstream aliases_file{aliases_file_name, std::ios::out | std::ios::trunc};

    if (!aliases_file.good())
    {
        std::perror(aliases_file_name.c_str());
        return EXIT_FAILURE;
    }

    aliases_file << "struct alias { int name; unsigned int encoding_index; };\n";
    aliases_file << "%struct-type\n";
    aliases_file << "%language=C++\n";
    aliases_file << "%define hash-function-name aliases_hash\n";
    aliases_file << "%define lookup-function-name aliases_lookup\n";
    aliases_file << "%7bit\n";
    aliases_file << "%readonly-tables\n";
    aliases_file << "%global-table\n";
    aliases_file << "%define word-array-name aliases\n";
    aliases_file << "%pic\n";
    aliases_file << "%%" << std::endl;

#define DEFENCODING(xxx_names, xxx, xxx_index, xxx_ifuncs1, xxx_ifuncs2, xxx_ofuncs1, xxx_ofuncs2)                     \
    {                                                                                                                  \
        static const char *const names[] = BRACIFY xxx_names;                                                          \
        emit_encoding(aliases_file, names, sizeof(names) / sizeof(names[0]), #xxx);                                    \
    }
#define DEFCODEPAGE(codepage, xxx)
#define DEFINDEX(alias, index)
#define BRACIFY(...) {__VA_ARGS__}

#include "encodings.h.snippet"

    aliases_file.close();
    if (!aliases_file.good())
    {
        std::perror(aliases_file_name.c_str());
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

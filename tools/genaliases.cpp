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

/* Creates the aliases.gperf table. */

// There is an old saying in China: If a code can work, do not change it.

#include <iostream>

static void emit_alias(FILE* out, const char* alias, const char* c_name)
{
    /* Output alias in upper case. */
    const char *s = alias;
    for (; *s; s++)
    {
        unsigned char c = *(unsigned char*)s;
        if (c >= 0x80)
            exit(1);
        if (c >= 'a' && c <= 'z')
            c -= 'a' - 'A';
        putc(c, out);
    }
    fprintf(out, ", ei_%s\n", c_name);
}

static void emit_encoding(FILE* out, const char* const* names, size_t n, const char* c_name)
{
    for (; n > 0; names++, n--)
    {
        emit_alias(out, *names, c_name);
    }
}

int main(int argc, char* argv[])
{
    char* aliases_file_name;
    FILE* aliases_file;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s aliases.gperf\n", argv[0]);
        return 1;
    }

    aliases_file_name = argv[1];

    aliases_file = fopen(aliases_file_name, "wb");
    if (aliases_file == nullptr)
    {
        fprintf(stderr, "Could not open '%s' for writing\n", aliases_file_name);
        return 1;
    }

    fprintf(aliases_file, "struct alias { int name; unsigned int encoding_index; };\n");
    fprintf(aliases_file, "%%struct-type\n");
    fprintf(aliases_file, "%%language=C++\n");
    fprintf(aliases_file, "%%define hash-function-name aliases_hash\n");
    fprintf(aliases_file, "%%define lookup-function-name aliases_lookup\n");
    fprintf(aliases_file, "%%7bit\n");
    fprintf(aliases_file, "%%readonly-tables\n");
    fprintf(aliases_file, "%%global-table\n");
    fprintf(aliases_file, "%%define word-array-name aliases\n");
    fprintf(aliases_file, "%%pic\n");
    fprintf(aliases_file, "%%%%\n");

#define DEFENCODING(xxx_names, xxx, xxx_index, xxx_ifuncs1, xxx_ifuncs2, xxx_ofuncs1, xxx_ofuncs2) \
    {                                                                                              \
        static const char *const names[] = BRACIFY xxx_names;                                      \
        emit_encoding(aliases_file, names, sizeof(names) / sizeof(names[0]), #xxx);                \
    }
#define DEFCODEPAGE(codepage, xxx)
#define DEFINDEX(alias, index)
#define BRACIFY(...) \
    {                \
        __VA_ARGS__  \
    }

#include "encodings.h.snippet"

    if (ferror(aliases_file) || fclose(aliases_file))
    {
        return 1;
    }
    return 0;
}

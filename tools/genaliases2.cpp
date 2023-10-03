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
 * License along with the cppp-reiconv Library; see the file COPYING.
 * If not, see <https://www.gnu.org/licenses/>.
 */

/* Creates the aliases2.h table. */

#include <iostream>

static unsigned int counter = 0;

static void emit_alias(FILE* out, const char* tag, const char* alias, const char* c_name)
{
    fprintf(out, "  S(%s_%u, \"", tag, counter);
    /* Output alias in upper case. */
    {
        const char* s = alias;
        for (; *s; s++)
        {
            unsigned char c = *(unsigned char*)s;
            if (c >= 0x80)
                exit(1);
            if (c >= 'a' && c <= 'z')
                c -= 'a' - 'A';
            putc(c, out);
        }
    }
    fprintf(out, "\", ei_%s )\n", c_name);
    counter++;
}

static void emit_encoding(FILE* out, const char* tag, const char* const* names, size_t n, const char* c_name)
{
    for (; n > 0; names++, n--)
        emit_alias(out, tag, *names, c_name);
}

int main(int argc, char* argv[])
{
    const char* tag;
    char* aliases_file_name;
    FILE* aliases_file;

    if (argc != 3)
    {
        fprintf(stderr, "Usage: genaliases2 tag aliases.h\n");
        return 1;
    }

    tag = argv[1];
    aliases_file_name = argv[2];

    aliases_file = fopen(aliases_file_name, "w");
    if (aliases_file == NULL)
    {
        fprintf(stderr, "Could not open '%s' for writing\n", aliases_file_name);
        return 1;
    }

#define DEFENCODING(xxx_names, codepage, xxx, xxx_ifuncs1, xxx_ifuncs2, xxx_ofuncs1, xxx_ofuncs2)                      \
    {                                                                                                                  \
        static const char* const names[] = BRACIFY xxx_names;                                                          \
        emit_encoding(aliases_file, tag, names, sizeof(names) / sizeof(names[0]), #xxx);                               \
    }
#define BRACIFY(...)                                                                                                   \
    {                                                                                                                  \
        __VA_ARGS__                                                                                                    \
    }
#define DEFALIAS(xxx_alias, xxx) emit_alias(aliases_file, tag, xxx_alias, #xxx);
#ifdef USE_AIX
#include "encodings_aix.def"
#endif
#ifdef USE_OSF1
#include "encodings_osf1.def"
#endif
#ifdef USE_DOS
#include "encodings_dos.def"
#endif
#ifdef USE_ZOS
#include "encodings_zos.def"
#endif
#ifdef USE_EXTRA
#include "encodings_extra.def"
#endif
#undef DEFALIAS
#undef BRACIFY
#undef DEFENCODING
    if (ferror(aliases_file) || fclose(aliases_file))
        return 1;
    return 0;
}

/* Copyright (C) 1999-2000 Free Software Foundation, Inc.
   This file is part of the GNU ICONV Library.

   The GNU ICONV Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU ICONV Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU ICONV Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* Creates the aliases2.h table. */

#include <stdio.h>
#include <stdlib.h>

#include "use_aliases2.h"

static int empty = 1;

static void emit_encoding (const char* const* names, size_t n, const char* c_name)
{
  for (; n > 0; names++, n--) {
    if (empty) {
      printf("static struct alias sysdep_aliases[] = {\n");
      empty = 0;
    }
    printf("  { \"");
    /* Output *names in upper case. */
    {
      const char* s = *names;
      for (; *s; s++) {
        unsigned char c = * (unsigned char *) s;
        if (c >= 0x80)
          exit(1);
        if (c >= 'a' && c <= 'z')
          c -= 'a'-'A';
        putc(c, stdout);
      }
    }
    printf("\", ei_%s },\n", c_name);
  }
}

int main ()
{
#define USE_SYSDEPENDENT_ONLY
#define DEFENCODING(xxx_names,xxx,xxx_ifuncs,xxx_ofuncs1,xxx_ofuncs2) \
  {                                                           \
    static const char* const names[] = BRACIFY xxx_names;     \
    emit_encoding(names,sizeof(names)/sizeof(names[0]),#xxx); \
  }
#define BRACIFY(...) { __VA_ARGS__ }
#include "encodings.def"
#undef BRACIFY
#undef DEFENCODING
#undef USE_SYSDEPENDENT_ONLY
  if (!empty) {
    printf("};\n\n");
    printf("#ifdef __GNUC__\n");
    printf("__inline\n");
    printf("#endif\n");
    printf("const struct alias *\n");
    printf("aliases2_lookup (register const char *str)\n");
    printf("{\n");
    printf("  struct alias * ptr;\n");
    printf("  unsigned int count;\n");
    printf("  for (ptr = sysdep_aliases, count = sizeof(sysdep_aliases)/sizeof(sysdep_aliases[0]); count > 0; ptr++, count--)\n");
    printf("    if (!strcmp(str,ptr->name))\n");
    printf("      return ptr;\n");
    printf("  return NULL;\n");
    printf("}\n");
  } else {
    printf("#define aliases2_lookup(str)  NULL\n");
  }
  fflush(stdout);
  if (ferror(stdout))
    exit(1);
  exit(0);
}

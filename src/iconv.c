/* Copyright (C) 2000-2005 Free Software Foundation, Inc.
   This file is part of the GNU LIBICONV Library.

   The GNU LIBICONV Library is free software; you can redistribute it
   and/or modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either version 2
   of the License, or (at your option) any later version.

   The GNU LIBICONV Library is distributed in the hope that it will be
   useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU LIBICONV Library; see the file COPYING.LIB.
   If not, write to the Free Software Foundation, Inc., 51 Franklin Street,
   Fifth Floor, Boston, MA 02110-1301, USA.  */

#include "config.h"
#ifndef ICONV_CONST
# define ICONV_CONST const
#endif

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iconv.h>
#include <errno.h>
#if HAVE_LOCALE_H
#include <locale.h>
#endif
#include <fcntl.h>

/* Ensure that iconv_no_i18n does not depend on libintl.  */
#ifdef NO_I18N
# undef ENABLE_NLS
# undef ENABLE_RELOCATABLE
#endif

#include "binary-io.h"
#include "progname.h"
#include "relocatable.h"
#include "uniwidth.h"
#include "cjk.h"
#include "gettext.h"

#define _(str) gettext(str)

static int discard_unconvertible = 0;
static int silent = 0;

static void usage (int exitcode)
{
  const char* helpstring1 =
    _("Usage: iconv [-c] [-s] [-f fromcode] [-t tocode] [file ...]");
  const char* helpstring2 =
    _("or:    iconv -l");
  fprintf(exitcode ? stderr : stdout, "%s\n%s\n", helpstring1, helpstring2);
  exit(exitcode);
}

static void print_version (void)
{
  printf("iconv (GNU libiconv %d.%d)\n",
         _libiconv_version >> 8, _libiconv_version & 0xff);
  printf("Copyright (C) %s Free Software Foundation, Inc.\n", "2000-2002");
  printf(_("\
This is free software; see the source for copying conditions.  There is NO\n\
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n"));
  printf(_("Written by %s.\n"),"Bruno Haible");
  exit(0);
}

static int print_one (unsigned int namescount, const char * const * names,
                      void* data)
{
  unsigned int i;
  (void)data;
  for (i = 0; i < namescount; i++) {
    if (i > 0)
      putc(' ',stdout);
    fputs(names[i],stdout);
  }
  putc('\n',stdout);
  return 0;
}

/* Line number and column position. */
static unsigned int line;
static unsigned int column;
static const char* cjkcode;
/* Update the line number and column position after a character was
   successfully converted. */
static void update_line_column (unsigned int uc, void* data)
{
  if (uc == 0x000A) {
    line++;
    column = 0;
  } else {
    int width = uc_width(uc, cjkcode);
    if (width >= 0)
      column += width;
    else if (uc == 0x0009)
      column += 8 - (column % 8);
  }
}

static int convert (iconv_t cd, FILE* infile, const char* infilename)
{
  char inbuf[4096+4096];
  size_t inbufrest = 0;
  char outbuf[4096];
  int status = 0;

#if O_BINARY
  SET_BINARY(fileno(infile));
#endif
  line = 1; column = 0;
  iconv(cd,NULL,NULL,NULL,NULL);
  for (;;) {
    size_t inbufsize = fread(inbuf+4096,1,4096,infile);
    if (inbufsize == 0) {
      if (inbufrest == 0)
        break;
      else {
        if (!silent) {
          fflush(stdout);
          if (column > 0)
            putc('\n',stderr);
          fprintf(stderr,_("iconv: %s:%u:%u: incomplete character or shift sequence\n"),infilename,line,column);
        }
        return 1;
      }
    } else {
      const char* inptr = inbuf+4096-inbufrest;
      size_t insize = inbufrest+inbufsize;
      inbufrest = 0;
      while (insize > 0) {
        char* outptr = outbuf;
        size_t outsize = sizeof(outbuf);
        size_t res = iconv(cd,(ICONV_CONST char**)&inptr,&insize,&outptr,&outsize);
        if (outptr != outbuf) {
          int saved_errno = errno;
          if (fwrite(outbuf,1,outptr-outbuf,stdout) < outptr-outbuf)
            return 1;
          errno = saved_errno;
        }
        if (res == (size_t)(-1)) {
          if (errno == EILSEQ) {
            if (discard_unconvertible == 1) {
              int one = 1;
              iconvctl(cd,ICONV_SET_DISCARD_ILSEQ,&one);
              discard_unconvertible = 2;
              status = 1;
            } else {
              if (!silent) {
                fflush(stdout);
                if (column > 0)
                  putc('\n',stderr);
                fprintf(stderr,_("iconv: %s:%u:%u: cannot convert\n"),infilename,line,column);
              }
              return 1;
            }
          } else if (errno == EINVAL) {
            if (inbufsize == 0 || insize > 4096) {
              if (!silent) {
                fflush(stdout);
                if (column > 0)
                  putc('\n',stderr);
                fprintf(stderr,_("iconv: %s:%u:%u: incomplete character or shift sequence\n"),infilename,line,column);
              }
              return 1;
            } else {
              inbufrest = insize;
              if (insize > 0) {
                /* Like memcpy(inbuf+4096-insize,inptr,insize), except that
                   we cannot use memcpy here, because source and destination
                   regions may overlap. */
                char* restptr = inbuf+4096-insize;
                do { *restptr++ = *inptr++; } while (--insize > 0);
              }
              break;
            }
          } else if (errno != E2BIG) {
            if (!silent) {
              int saved_errno = errno;
              fflush(stdout);
              if (column > 0)
                putc('\n',stderr);
              fprintf(stderr,_("iconv: %s:%u:%u: "),infilename,line,column);
              errno = saved_errno;
              perror("");
            }
            return 1;
          }
        }
      }
    }
  }
  {
    char* outptr = outbuf;
    size_t outsize = sizeof(outbuf);
    size_t res = iconv(cd,NULL,NULL,&outptr,&outsize);
    if (outptr != outbuf) {
      int saved_errno = errno;
      if (fwrite(outbuf,1,outptr-outbuf,stdout) < outptr-outbuf)
        return 1;
      errno = saved_errno;
    }
    if (res == (size_t)(-1)) {
      if (errno == EILSEQ) {
        if (discard_unconvertible == 1) {
          int one = 1;
          iconvctl(cd,ICONV_SET_DISCARD_ILSEQ,&one);
          discard_unconvertible = 2;
          status = 1;
        } else {
          if (!silent) {
            fflush(stdout);
            if (column > 0)
              putc('\n',stderr);
            fprintf(stderr,_("iconv: %s:%u:%u: cannot convert\n"),infilename,line,column);
          }
          return 1;
        }
      } else if (errno == EINVAL) {
        if (!silent) {
          fflush(stdout);
          if (column > 0)
            putc('\n',stderr);
          fprintf(stderr,_("iconv: %s:%u:%u: incomplete character or shift sequence\n"),infilename,line,column);
        }
        return 1;
      } else {
        if (!silent) {
          int saved_errno = errno;
          fflush(stdout);
          if (column > 0)
            putc('\n',stderr);
          fprintf(stderr,_("iconv: %s:%u:%u: "),infilename,line,column);
          errno = saved_errno;
          perror("");
        }
        return 1;
      }
    }
  }
  if (ferror(infile)) {
    fflush(stdout);
    if (column > 0)
      putc('\n',stderr);
    fprintf(stderr,_("iconv: %s: I/O error\n"),infilename);
    return 1;
  }
  return status;
}

int main (int argc, char* argv[])
{
  const char* fromcode = NULL;
  const char* tocode = NULL;
  int do_list = 0;
  iconv_t cd;
  struct iconv_hooks hooks;
  int i;
  int status;

  set_program_name (argv[0]);
#if HAVE_SETLOCALE
  /* Needed for the locale dependent encodings, "char" and "wchar_t",
     and for gettext. */
  setlocale(LC_CTYPE,"");
#if ENABLE_NLS
  /* Needed for gettext. */
  setlocale(LC_MESSAGES,"");
#endif
#endif
#if ENABLE_NLS
  bindtextdomain("libiconv",relocate(LOCALEDIR));
#endif
  textdomain("libiconv");
  for (i = 1; i < argc;) {
    if (!strcmp(argv[i],"--")) {
      i++;
      break;
    }
    if (!strcmp(argv[i],"-f")) {
      if (i == argc-1) usage(1);
      if (fromcode != NULL) usage(1);
      fromcode = argv[i+1];
      i += 2;
      continue;
    }
    if (!strcmp(argv[i],"-t")) {
      if (i == argc-1) usage(1);
      if (tocode != NULL) usage(1);
      tocode = argv[i+1];
      i += 2;
      continue;
    }
    if (!strcmp(argv[i],"-l")) {
      do_list = 1;
      i++;
      continue;
    }
    if (!strcmp(argv[i],"--help")) {
      usage(0);
    }
    if (!strcmp(argv[i],"--version")) {
      print_version();
    }
#if O_BINARY
    /* Backward compatibility with iconv <= 1.9.1. */
    if (!strcmp(argv[i],"--binary")) {
      i++;
      continue;
    }
#endif
    if (argv[i][0] == '-') {
      const char *option = argv[i] + 1;
      if (*option == '\0')
        usage(1);
      for (; *option; option++)
        switch (*option) {
          case 'c': discard_unconvertible = 1; break;
          case 's': silent = 1; break;
          default: usage(1);
        }
      i++;
      continue;
    }
    break;
  }
  if (do_list) {
    if (i != 2 || i != argc)
      usage(1);
    iconvlist(print_one,NULL);
    status = 0;
  } else {
#if O_BINARY
    SET_BINARY(fileno(stdout));
#endif
    if (fromcode == NULL)
      fromcode = "char";
    if (tocode == NULL)
      tocode = "char";
    cd = iconv_open(tocode,fromcode);
    if (cd == (iconv_t)(-1)) {
      if (iconv_open("UCS-4",fromcode) == (iconv_t)(-1))
        fprintf(stderr,_("iconv: conversion from %s unsupported\n"),fromcode);
      else if (iconv_open(tocode,"UCS-4") == (iconv_t)(-1))
        fprintf(stderr,_("iconv: conversion to %s unsupported\n"),tocode);
      else
        fprintf(stderr,_("iconv: conversion from %s to %s unsupported\n"),fromcode,tocode);
      fprintf(stderr,_("iconv: try '%s -l' to get the list of supported encodings\n"),program_name);
      exit(1);
    }
    /* Look at fromcode and tocode, to determine whether character widths
       should be determined according to legacy CJK conventions. */
    cjkcode = iconv_canonicalize(tocode);
    if (!is_cjk_encoding(cjkcode))
      cjkcode = iconv_canonicalize(fromcode);
    /* Set up hooks for updating the line and column position. */
    hooks.uc_hook = update_line_column;
    hooks.wc_hook = NULL;
    hooks.data = NULL;
    iconvctl(cd, ICONV_SET_HOOKS, &hooks);
    if (i == argc)
      status = convert(cd,stdin,_("(stdin)"));
    else {
      status = 0;
      for (; i < argc; i++) {
        const char* infilename = argv[i];
        FILE* infile = fopen(infilename,"r");
        if (infile == NULL) {
          int saved_errno = errno;
          fprintf(stderr,_("iconv: %s: "),infilename);
          errno = saved_errno;
          perror("");
          status = 1;
        } else {
          status |= convert(cd,infile,infilename);
          fclose(infile);
        }
      }
    }
    iconv_close(cd);
  }
  if (ferror(stdout) || fclose(stdout)) {
    fprintf(stderr,_("iconv: I/O error\n"));
    status = 1;
  }
  exit(status);
}

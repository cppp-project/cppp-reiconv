/* Copyright (C) 2000 Free Software Foundation, Inc.
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

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libiconv.h>
#include <errno.h>

static void usage ()
{
  fprintf(stderr,"Usage: iconv -f fromcode -t tocode [file ...]\n");
  exit(1);
}

static int convert (iconv_t cd, FILE* infile, const char* infilename)
{
  char inbuf[4096+4096];
  size_t inbufrest = 0;
  char outbuf[4096];
  iconv(cd,NULL,NULL,NULL,NULL);
  for (;;) {
    size_t inbufsize = fread(inbuf+4096,1,4096,infile);
    if (inbufsize == 0) {
      if (inbufrest == 0)
        break;
      else {
        fprintf(stderr,"iconv: %s: incomplete character or shift sequence\n",infilename);
        return 1;
      }
    } else {
      const char* inptr = inbuf+4096-inbufrest;
      size_t insize = inbufrest+inbufsize;
      inbufrest = 0;
      while (insize > 0) {
        char* outptr = outbuf;
        size_t outsize = sizeof(outbuf);
        size_t res = iconv(cd,&inptr,&insize,&outptr,&outsize);
        if (outptr != outbuf) {
          int saved_errno = errno;
          if (fwrite(outbuf,1,outptr-outbuf,stdout) < outptr-outbuf)
            return 1;
          errno = saved_errno;
        }
        if (res == (size_t)(-1)) {
          if (errno == EILSEQ) {
            fprintf(stderr,"iconv: %s: cannot convert\n",infilename);
            return 1;
          } else if (errno == EINVAL) {
            if (inbufsize == 0 || insize > 4096) {
              fprintf(stderr,"iconv: %s: incomplete character or shift sequence\n",infilename);
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
            int saved_errno = errno;
            fprintf(stderr,"iconv: %s: ",infilename);
            errno = saved_errno;
            perror("");
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
        fprintf(stderr,"iconv: %s: cannot convert\n",infilename);
        return 1;
      } else if (errno == EINVAL) {
        fprintf(stderr,"iconv: %s: incomplete character or shift sequence\n",infilename);
        return 1;
      } else {
        int saved_errno = errno;
        fprintf(stderr,"iconv: %s: ",infilename);
        errno = saved_errno;
        perror("");
        return 1;
      }
    }
  }
  if (ferror(infile)) {
    fprintf(stderr,"iconv: %s: I/O error\n",infilename);
    return 1;
  }
  return 0;
}

int main (int argc, char* argv[])
{
  const char* fromcode = NULL;
  const char* tocode = NULL;
  iconv_t cd;
  int i;
  int status;

  for (i = 1; i < argc;) {
    if (!strcmp(argv[i],"-f")) {
      if (i == argc-1) usage();
      if (fromcode != NULL) usage();
      fromcode = argv[i+1];
      i += 2;
      continue;
    }
    if (!strcmp(argv[i],"-t")) {
      if (i == argc-1) usage();
      if (tocode != NULL) usage();
      tocode = argv[i+1];
      i += 2;
      continue;
    }
    if (argv[i][0] == '-')
      usage();
    break;
  }
  if (fromcode == NULL || tocode == NULL)
    usage();
  cd = iconv_open(tocode,fromcode);
  if (cd == (iconv_t)(-1)) {
    if (iconv_open("UCS-4",fromcode) == (iconv_t)(-1))
      fprintf(stderr,"iconv: conversion from %s unsupported\n",fromcode);
    else if (iconv_open(tocode,"UCS-4") == (iconv_t)(-1))
      fprintf(stderr,"iconv: conversion to %s unsupported\n",tocode);
    else
      fprintf(stderr,"iconv: conversion from %s to %s unsupported\n",fromcode,tocode);
    exit(1);
  }
  if (i == argc)
    status = convert(cd,stdin,"(stdin)");
  else {
    status = 0;
    for (; i < argc; i++) {
      const char* infilename = argv[i];
      FILE* infile = fopen(infilename,"r");
      if (infile == NULL) {
        int saved_errno = errno;
        fprintf(stderr,"iconv: %s: ",infilename);
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
  if (ferror(stdout)) {
    fprintf(stderr,"iconv: I/O error\n");
    status = 1;
  }
  exit(status);
}

/* Copyright (C) 2000 Free Software Foundation, Inc.
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
   If not, write to the Free Software Foundation, Inc., 59 Temple Place -
   Suite 330, Boston, MA 02111-1307, USA.  */

/* Create a table from CHARSET to Unicode. */

#include "config.h"

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <iconv.h>
#include <errno.h>

static const char* hexbuf (unsigned char buf[], unsigned int buflen)
{
  static char msg[50];
  switch (buflen) {
    case 1: sprintf(msg,"0x%02X",buf[0]); break;
    case 2: sprintf(msg,"0x%02X%02X",buf[0],buf[1]); break;
    case 3: sprintf(msg,"0x%02X%02X%02X",buf[0],buf[1],buf[2]); break;
    case 4: sprintf(msg,"0x%02X%02X%02X%02X",buf[0],buf[1],buf[2],buf[3]); break;
    default: abort();
  }
  return msg;
}

static int try (iconv_t cd, unsigned char buf[], unsigned int buflen, unsigned int *out)
{
  const char* inbuf = (const char*) buf;
  size_t inbytesleft = buflen;
  char* outbuf = (char*) out;
  size_t outbytesleft = sizeof(unsigned int);
  size_t result = iconv(cd,(ICONV_CONST char**)&inbuf,&inbytesleft,&outbuf,&outbytesleft);
  if (result == (size_t)(-1)) {
    if (errno == EILSEQ) {
      return -1;
    } else if (errno == EINVAL) {
      return 0;
    } else {
      int saved_errno = errno;
      fprintf(stderr,"%s: iconv error: ",hexbuf(buf,buflen));
      errno = saved_errno;
      perror("");
      exit(1);
    }
  } else if (result > 0) /* ignore conversions with transliteration */ {
    return -1;
  } else {
    if (inbytesleft != 0 || outbytesleft != 0) {
      fprintf(stderr,"%s: inbytes = %ld, outbytes = %ld\n",hexbuf(buf,buflen),(long)(buflen-inbytesleft),(long)(sizeof(unsigned int)-outbytesleft));
      exit(1);
    }
    return 1;
  }
}

int main (int argc, char* argv[])
{
  const char* charset;
  iconv_t cd;

  if (argc != 2) {
    fprintf(stderr,"Usage: table-to charset\n");
    exit(1);
  }
  charset = argv[1];

  cd = iconv_open("UCS-4-INTERNAL",charset);
  if (cd == (iconv_t)(-1)) {
    perror("iconv_open");
    exit(1);
  }

  {
    unsigned int out;
    unsigned char buf[4];
    unsigned int i0, i1, i2, i3;
    int result;
    for (i0 = 0; i0 < 0x100; i0++) {
      buf[0] = i0;
      result = try(cd,buf,1,&out);
      if (result < 0) {
      } else if (result > 0) {
        printf("0x%02X\t0x%04X\n",i0,out);
      } else {
        for (i1 = 0; i1 < 0x100; i1++) {
          buf[1] = i1;
          result = try(cd,buf,2,&out);
          if (result < 0) {
          } else if (result > 0) {
            printf("0x%02X%02X\t0x%04X\n",i0,i1,out);
          } else {
            for (i2 = 0; i2 < 0x100; i2++) {
              buf[2] = i2;
              result = try(cd,buf,3,&out);
              if (result < 0) {
              } else if (result > 0) {
                printf("0x%02X%02X%02X\t0x%04X\n",i0,i1,i2,out);
              } else if (strcmp(charset,"UTF-8")) {
                for (i3 = 0; i3 < 0x100; i3++) {
                  buf[3] = i3;
                  result = try(cd,buf,4,&out);
                  if (result < 0) {
                  } else if (result > 0) {
                    printf("0x%02X%02X%02X%02X\t0x%04X\n",i0,i1,i2,i3,out);
                  } else {
                    fprintf(stderr,"%s: incomplete byte sequence\n",hexbuf(buf,4));
                    exit(1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  if (iconv_close(cd) < 0) {
    perror("iconv_close");
    exit(1);
  }

  if (ferror(stdin) || ferror(stdout)) {
    fprintf(stderr,"I/O error\n");
    exit(1);
  }

  exit(0);
}

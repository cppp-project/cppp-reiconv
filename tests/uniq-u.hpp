/* uniq -- remove duplicate lines from a sorted file
   Copyright (C) 86, 91, 1995-1998, 1999, 2012 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* Written by Richard Stallman and David MacKenzie. */
/* 2000-03-22  Trimmed down to the case of "uniq -u" by Bruno Haible. */
/* 2023-08-22  Change it to a C++ header for reiconv-test by ChenPi11. */

#ifndef _UNIQ_U_HPP
#define _UNIQ_U_HPP

#include <iostream>
#include <cstdlib>
#include <cstring>

namespace _uniq_u
{
    static void xalloc_fail (void)
    {
        error("xmalloc", "uniq-u: virtual memory exhausted.");
    }

    /* Allocate N bytes of memory dynamically, with error checking.  */

    void* xmalloc(size_t n)
    {
        void *p;

        p = malloc(n);
        if (p == 0)
        {
            xalloc_fail();
        }
        return p;
    }

    /* Change the size of an allocated block of memory P to N bytes,
    with error checking.
    If P is NULL, run xmalloc.  */

    void* xrealloc(void* p, size_t n)
    {
        p = realloc(p, n);
        if (p == 0)
        {
            xalloc_fail();
        }
        return p;
    }

    /* A 'struct linebuffer' holds a line of text. */

    struct linebuffer
    {
        size_t size;                  /* Allocated. */
        size_t length;                /* Used. */
        char *buffer;
    };

    /* Initialize linebuffer LINEBUFFER for use. */

    static void initbuffer(struct linebuffer* linebuffer)
    {
        linebuffer->length = 0;
        linebuffer->size = 200;
        linebuffer->buffer = (char *)xmalloc(linebuffer->size);
    }

    /* Read an arbitrarily long line of text from STREAM into LINEBUFFER.
    Keep the newline; append a newline if it's the last line of a file
    that ends in a non-newline character.  Do not null terminate.
    Return LINEBUFFER, except at end of file return 0.  */

    static struct linebuffer* readline (struct linebuffer* linebuffer, FILE* stream)
    {
        int c;
        char* buffer = linebuffer->buffer;
        char* p = linebuffer->buffer;
        char* end = buffer + linebuffer->size - 1; /* Sentinel. */

        if (feof (stream) || ferror (stream))
        {
            return 0;
        }

        do
        {
            c = getc(stream);
            if (c == EOF)
            {
                if (p == buffer)
                {
                    return 0;
                }
                if (p[-1] == '\n')
                {
                    break;
                }
                c = '\n';
            }
            if (p == end)
            {
                linebuffer -> size *= 2;
                buffer = (char *)xrealloc(buffer, linebuffer -> size);
                p = p - linebuffer -> buffer + buffer;
                linebuffer -> buffer = buffer;
                end = buffer + linebuffer -> size - 1;
            }
            *p++ = c;
        }
        while (c != '\n');

        linebuffer -> length = p - buffer;
        return linebuffer;
    }

    /* Free linebuffer LINEBUFFER's data. */
    static void freebuffer (struct linebuffer *linebuffer)
    {
        free (linebuffer -> buffer);
    }

    /* Undefine, to avoid warning about redefinition on some systems.  */
    #undef min
    template<typename T>
    constexpr inline const T& min(const T& a, const T& b)
    {
        return (a < b) ? a : b;
    }

    /* Return zero if two strings OLD and NEW match, nonzero if not.
    OLD and NEW point not to the beginnings of the lines
    but rather to the beginnings of the fields to compare.
    OLDLEN and NEWLEN are their lengths. */

    static int different(const char *old, const char *new_one, size_t oldlen, size_t newlen)
    {
        int order;

        order = memcmp(old, new_one, min(oldlen, newlen));

        if (order == 0)
        {
            return oldlen - newlen;
        }
        return order;
    }

    /* Output the line in linebuffer LINE to stream STREAM
    provided that the switches say it should be output.
    If requested, print the number of times it occurred, as well;
    LINECOUNT + 1 is the number of times that the line occurred. */

    static void writeline(const struct linebuffer* line, FILE* stream, int linecount)
    {
        if (linecount == 0)
        {
            fwrite (line -> buffer, 1, line -> length, stream);
        }
    }

    /* Process input file INFILE with output to OUTFILE.
    If either is "-", use the standard I/O stream for it instead. */
    static void check_file(const char* infile, const char* outfile)
    {
        FILE *istream;
        FILE *ostream;
        struct linebuffer lb1, lb2;
        struct linebuffer *thisline, *prevline, *exch;
        char *prevfield, *thisfield;
        size_t prevlen, thislen;
        int match_count = 0;

        istream = fopen(infile, "r");
        if (istream == NULL)
        {
            fprintf(stderr, "uniq-u: error opening %s\n", infile);
            error("fopen", "File open error.");
        }

        ostream = fopen (outfile, "w");
        if (ostream == NULL)
        {
            fprintf(stderr, "uniq-u: error opening %s\n", outfile);
            error("fopen", "File open error.");
        }

        thisline = &lb1;
        prevline = &lb2;

        initbuffer(thisline);
        initbuffer(prevline);

        if (readline(prevline, istream) == 0)
        {
            goto closefiles;
        }
        prevfield = prevline -> buffer;
        prevlen = prevline -> length;

        while (!feof(istream))
        {
            int match;
            if (readline(thisline, istream) == 0)
            {
                break;
            }
            thisfield = thisline -> buffer;
            thislen = thisline -> length;
            match = !different(thisfield, prevfield, thislen, prevlen);

            if (match)
            {
                ++match_count;
            }

            if (!match)
            {
                writeline(prevline, ostream, match_count);
                exch = prevline;
                prevline = thisline;
                thisline = exch;
                prevfield = thisfield;
                prevlen = thislen;
                if (!match)
                {
                    match_count = 0;
                }
            }
        }

        writeline(prevline, ostream, match_count);

        closefiles:
        if (ferror(istream) || fclose(istream) == EOF)
        {
            fprintf (stderr, "uniq-u: error reading %s\n", infile);
            error("fclose", "IO Error.");
        }

        if (ferror(ostream) || fclose(ostream) == EOF)
        {
            fprintf(stderr, "uniq-u: error writing %s\n", outfile);
            error("fclose", "IO Error.");
        }

        freebuffer(&lb1);
        freebuffer(&lb2);
    }
}

void uniq_u(const std::string& in_file, const std::string& out_file)
{
    using namespace _uniq_u;
    
    check_file(in_file.c_str(), out_file.c_str());
}

#endif

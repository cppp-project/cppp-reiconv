/**
 * @file uniq-u.hpp
 * @brief Remove duplicate lines from a sorted file.
 * @author Richard Stallman, David MacKenzie, Bruno Haible, ChenPi11
 * @copyright Copyright (C) 86, 91, 1995-1998, 1999, 2012 Free Software Foundation, Inc.
 * @copyright Copyright (C) 2024 ChenPi11
 * @license GPL-3.0-or-later
 */
/*
 * This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 *  (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

/* Written by Richard Stallman and David MacKenzie. */
/* 2000-03-22  Trimmed down to the case of "uniq -u" by Bruno Haible. */
/* 2023-08-22  Change it to a C++ header for reiconv-test by ChenPi11. */
/* 2023-10-08  Use '#pragma once' for header. */
/* 2024-10-26  Refactored with C++20 features by ChenPi11. */

#pragma once

#include <cstdlib>
#include <cstring>
#include <filesystem>

#include "output.hpp"

/**
 * @brief Allocate N bytes of memory dynamically, with error checking.
 * @param n The number of bytes to allocate.
 * @return The pointer to the allocated memory.
 */
inline void *xmalloc(size_t n)
{
    void *p = std::malloc(n);
    if (p == nullptr)
    {
        error("xmalloc", "uniq-u: virtual memory exhausted.");
    }
    return p;
}

/**
 * @brief Change the size of an allocated block of memory P to N bytes, with error checking.
 * @note If P is nullptr, run xmalloc.
 * @param p The pointer to the allocated memory.
 * @param n The number of bytes to allocate.
 * @return The pointer to the allocated memory.
 */
inline void *xrealloc(void *p, size_t n)
{
    p = std::realloc(p, n);
    if (p == 0)
    {
        error("xrealloc", "uniq-u: virtual memory exhausted.");
    }
    return p;
}

/**
 * @brief A 'struct linebuffer' holds a line of text.
 */
struct linebuffer
{
    std::size_t size;   // Allocated.
    std::size_t length; // Used.
    char *buffer;
};

/**
 * @brief Initialize linebuffer LINEBUFFER for use.
 * @param linebuffer The linebuffer to initialize.
 */
inline void initbuffer(struct linebuffer *linebuffer)
{
    linebuffer->length = 0;
    linebuffer->size = 200;
    linebuffer->buffer = (char *)xmalloc(linebuffer->size);
}

/**
 * @brief Read an arbitrarily long line of text from STREAM into LINEBUFFER.
 * @note Keep the newline; append a newline if it's the last line of a file
 * that ends in a non-newline character.  Do not null terminate.
 * @param linebuffer The linebuffer to read into.
 * @param stream The stream to read from.
 * @return LINEBUFFER, except at end of file return 0.
 */
static struct linebuffer *readline(struct linebuffer *linebuffer, FILE *stream)
{
    int c;
    char *buffer = linebuffer->buffer;
    char *p = linebuffer->buffer;
    char *end = buffer + linebuffer->size - 1; /* Sentinel. */

    if (std::feof(stream) || std::ferror(stream))
    {
        return 0;
    }

    do
    {
        c = std::getc(stream);
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
            linebuffer->size *= 2;
            buffer = (char *)xrealloc(buffer, linebuffer->size);
            p = p - linebuffer->buffer + buffer;
            linebuffer->buffer = buffer;
            end = buffer + linebuffer->size - 1;
        }
        *p++ = c;
    } while (c != '\n');

    linebuffer->length = p - buffer;
    return linebuffer;
}

/**
 * @brief Free linebuffer LINEBUFFER's data.
 * @param linebuffer The linebuffer to free.
 */
inline void freebuffer(struct linebuffer *linebuffer)
{
    std::free(linebuffer->buffer);
}

/**
 * @brief Return zero if two strings OLD and NEW match, nonzero if not.
 * @note OLD and NEW point not to the beginnings of the lines but rather
 * @note to the beginnings of the fields to compare.
 * @param old The old string.
 * @param new_one The new string.
 * @param oldlen The length of the old string.
 * @param newlen The length of the new string.
 * @return Zero if two strings OLD and NEW match, nonzero if not.
 */
inline int different(const char *old, const char *new_one, size_t oldlen, size_t newlen)
{
    int order = std::memcmp(old, new_one, (oldlen < newlen) ? oldlen : newlen);
    return (order == 0) ? (oldlen - newlen) : order;
}

/**
 * @brief Output the line in linebuffer LINE to stream STREAM.
 * @param line The linebuffer to output.
 * @param stream The stream to output to.
 * @param linecount The number of times that the line occurred.
 */
inline void writeline(const struct linebuffer *line, FILE *stream, int linecount)
{
    if (linecount == 0)
    {
        std::fwrite(line->buffer, 1, line->length, stream);
    }
}

/**
 * @brief Process input file INFILE with output to OUTFILE.
 * @param infile The input file.
 * @param outfile The output file.
 */
static void uniq_u(const std::filesystem::path& infile, std::filesystem::path& outfile)
{
    struct linebuffer *exch;
    char *prevfield, *thisfield;
    size_t prevlen, thislen;
    int match_count = 0;
    std::string tmp;

    tmp = infile.string();
    FILE *istream = std::fopen(tmp.c_str(), "r");
    if (istream == nullptr)
    {
        print_stderr("uniq-u: Error while opening {}\n", tmp);
        error("fopen", "File open error.");
    }

    tmp = outfile.string();
    FILE *ostream = std::fopen(tmp.c_str(), "w");
    if (ostream == nullptr)
    {
        print_stderr("uniq-u: Error while opening {}\n", tmp);
        error("fopen", "File open error.");
    }

    struct linebuffer lb1;
    struct linebuffer lb2;
    struct linebuffer *thisline = &lb1;
    struct linebuffer *prevline = &lb2;

    initbuffer(thisline);
    initbuffer(prevline);

    if (readline(prevline, istream) == 0)
    {
        goto closefiles;
    }
    prevfield = prevline->buffer;
    prevlen = prevline->length;

    while (!std::feof(istream))
    {
        int match;
        if (readline(thisline, istream) == 0)
        {
            break;
        }
        thisfield = thisline->buffer;
        thislen = thisline->length;
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
    if (std::ferror(istream) || std::fclose(istream) == EOF)
    {
        tmp = infile.string();
        print_stderr("uniq-u: Error while reading {}\n", tmp);
        error("fclose", "I/O Error.");
    }

    if (ferror(ostream) || fclose(ostream) == EOF)
    {
        tmp = outfile.string();
        print_stderr("uniq-u: Error while writing {}\n", tmp);
        error("fclose", "I/O Error.");
    }

    freebuffer(&lb1);
    freebuffer(&lb2);
}

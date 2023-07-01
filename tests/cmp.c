/*
 * Copyright (C) 2023 The C++ Plus Project.
 * This file is part of the cppp-reiconv Library.
 *
 * The cppp-reiconv Library is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either version 2.1
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

/*
  Compare 2 files difference for reiconv-test and ignore CR.
*/

/* Ignore MSVC's CRT Secure warnings. */
#define _CRT_SECSURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <locale.h>

char* file1_path;
char* file2_path;
FILE* file1;
FILE* file2;

int saved_errno;

int file1_c;
int file2_c;
long long int read_seek;

#define error(message, operation) saved_errno = errno; perror(operation); fprintf(stderr, "Error: %s in %s:%d\n", message, __FILE__, __LINE__); exit((saved_errno == 0)?1:saved_errno)

int main(int argc, char* argv[])
{
    /* Init locale info. */
    setlocale(LC_ALL, getenv("LANG"));
    errno = 0;

    /* Checking for args is correct. */
    if(argc < 2)
    {
        printf("Usage: %s file1 file2\n", argv[0]);
        return 1;
    }
    
    file1_path = argv[1];
    file2_path = argv[2];

    file1 = fopen(file1_path, "rb");
    if(file1 == NULL)
    {
        error("fopen", file1_path);
    }
    file2 = fopen(file2_path, "rb");
    if(file1 == NULL)
    {
        error("fopen", file2_path);
    }

    /* Start to compare, ignore CR */
    while(1)
    {
        ++read_seek;

        file1_c = fgetc(file1);
        if(file1_c == '\r') { continue; }

        file2_c = fgetc(file2);
        if(file2_c == '\r') { ungetc(file1_c, file1); continue; }

        if(file1_c == EOF || file2_c == EOF) { break; }

        if(file1_c != file2_c)
        {
            /* Something different */
            fprintf(stderr, "%s and %s\n", file1_path, file2_path);
            fprintf(stderr, "Someting different: at seek %lld. (%d != %d)\n", read_seek, file1_c, file2_c);
            error("compare", "Someting different");
        }
    }

    if(! (file1_c == EOF && file2_c == EOF))
    {
        fprintf(stderr, "EOF Error: at seek %lld\n", read_seek);
        if(file1_c == EOF)
        {
            fprintf(stderr, "%s EOF.\n", file1_path);
        }
        else
        {
            fprintf(stderr, "%s not EOF.\n", file1_path);
        }
        if(file2_c == EOF)
        {
            fprintf(stderr, "%s EOF.\n", file2_path);
        }
        else
        {
            fprintf(stderr, "%s not EOF.\n", file2_path);
        }
        error("fgetc", "File length may vary");
    }

    fprintf(stderr, "\033[%dm%s and %s are no different.\033[0m\n",32 , file1_path, file2_path);

    return 0;
}
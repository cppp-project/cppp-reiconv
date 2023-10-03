/*
 * Copyright (C) 1999-2008, 2011, 2018, 2020, 2023 Free Software Foundation, Inc.
 * This file is part of the cppp-reiconv library.
 *
 * The cppp-reiconv library is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * The cppp-reiconv library is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with the cppp-reiconv library; see the file COPYING.
 * If not, see <https://www.gnu.org/licenses/>.
 */

/* Part 1 of iconv_open.
   Input: const char* tocode, const char* fromcode.
   Output:
     unsigned int from_index;
     unsigned int from_surface;
     unsigned int to_index;
     unsigned int to_surface;
     int discard_ilseq;
   Jumps to 'invalid' in case of errror.
 */
{
    char buf[MAX_WORD_LENGTH + 9 + 9 + 1];
    const char *cp;
    char *bp;
    const struct alias *ap;
    unsigned int count;

    from_surface = ICONV_SURFACE_NONE;
    to_surface = ICONV_SURFACE_NONE;
    discard_ilseq = 0;

    /* Before calling HashPool::aliases_lookup, convert the input string to upper case,
     * and check whether it's entirely ASCII (we call gperf with option "-7"
     * to achieve a smaller table) and non-empty. If it's not entirely ASCII,
     * or if it's too long, it is not a valid encoding name.
     */

    /* Search tocode in the table. */
    for (cp = tocode, bp = buf, count = MAX_WORD_LENGTH + 9 + 9 + 1;; cp++, bp++)
    {
        unsigned char c = (unsigned char)*cp;
        if (c >= 0x80)
            goto invalid;
        if (c >= 'a' && c <= 'z')
            c -= 'a' - 'A';
        *bp = c;
        if (c == '\0')
            break;
        if (--count == 0)
            goto invalid;
    }
    for (;;)
    {
        char *sp = bp;
        int parsed_ignore = 0;
        if (sp - buf > 7 && memcmp(sp - 7, "/IGNORE", 7) == 0)
        {
            sp = sp - 7;
            parsed_ignore = 1;
        }
        if (sp > buf && memcmp(sp - 1, "/", 1) == 0)
        {
            bp = sp - 1;
        }
        else if (sp - buf >= 9 && memcmp(sp - 9, "/ZOS_UNIX", 9) == 0)
        {
            bp = sp - 9;
            to_surface = ICONV_SURFACE_EBCDIC_ZOS_UNIX;
        }
        else
            break;
        *bp = '\0';
        if (parsed_ignore)
            discard_ilseq = 1;
        break;
    }
    ap = HashPool::aliases_lookup(buf, bp - buf);
    if (ap == NULL)
    {
        ap = aliases2_lookup(buf);
        if (ap == NULL)
            goto invalid;
    }
    to_index = ap->encoding_index;

    /* Search fromcode in the table. */
    for (cp = fromcode, bp = buf, count = MAX_WORD_LENGTH + 9 + 9 + 1;; cp++, bp++)
    {
        unsigned char c = (unsigned char)*cp;
        if (c >= 0x80)
            goto invalid;
        if (c >= 'a' && c <= 'z')
            c -= 'a' - 'A';
        *bp = c;
        if (c == '\0')
            break;
        if (--count == 0)
            goto invalid;
    }
    for (;;)
    {
        char *sp = bp;
        int parsed_ignore = 0;
        if (sp - buf > 7 && memcmp(sp - 7, "/IGNORE", 7) == 0)
        {
            sp = sp - 7;
            parsed_ignore = 1;
        }
        if (sp > buf && memcmp(sp - 1, "/", 1) == 0)
        {
            bp = sp - 1;
        }
        else if (sp - buf >= 9 && memcmp(sp - 9, "/ZOS_UNIX", 9) == 0)
        {
            bp = sp - 9;
            from_surface = ICONV_SURFACE_EBCDIC_ZOS_UNIX;
        }
        else
            break;
        *bp = '\0';
        if (parsed_ignore)
            discard_ilseq = 1;
        break;
    }
    ap = HashPool::aliases_lookup(buf, bp - buf);
    if (ap == NULL)
    {
        ap = aliases2_lookup(buf);
        if (ap == NULL)
            goto invalid;
    }
    from_index = ap->encoding_index;
}

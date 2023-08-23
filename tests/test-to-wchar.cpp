/* Copyright (C) 2009, 2011 Free Software Foundation, Inc.
   This file is part of the cppp-reiconv library.

   The cppp-reiconv library is free software; you can redistribute it
   and/or modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either version 3
   of the License, or (at your option) any later version.

   The cppp-reiconv library is distributed in the hope that it will be
   useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the cppp-reiconv library; see the file COPYING.
   If not, see <https://www.gnu.org/licenses/>.  */

#include <iostream>
#include <cstdlib>
#include <cppp/reiconv.hpp>
#include <cerrno>
#include <string>

#include "throw_error.hpp"

using namespace cppp::base::reiconv;

/* This test checks that the conversion to wchar_t stops correctly when
   the input is incomplete.  Based on a bug report from
   Tristan Gingold <gingold@adacore.com>.  */

namespace test
{
    namespace to_wchar
    {
        void main ()
        {
            const char* wchar_type;
            if(sizeof(wchar_t) == 2)
            {
                wchar_type = "UTF-16";
            }
            else
            {
                wchar_type = "UTF-32";
            }
            iconv_t cd = iconv_open (wchar_type, "UTF-8");
            if (cd == (iconv_t)(-1)) {
                /* Skip the test on platforms without wchar_t
                (Solaris 2.6, HP-UX 11.00).  */
            } else {
                char inbuf[2] = { (char)0xc2, (char)0xa0 };
                wchar_t outbuf[10];

                char *inptr = inbuf;
                size_t inbytesleft = 1;
                char *outptr = (char *) outbuf;
                size_t outbytesleft = sizeof (outbuf);
                size_t r = iconv (cd,
                                (char **) &inptr, &inbytesleft,
                                &outptr, &outbytesleft);

                if (!(r == (size_t)(-1) && errno == EINVAL))
                {
                    error(std::string(__FILE__) + ":" + std::to_string(__LINE__),
                        "iconv() did not return EINVAL for incomplete input.");
                }
            }
        }
    }
}

int main ()
{
    test::to_wchar::main();
    return 0;
}

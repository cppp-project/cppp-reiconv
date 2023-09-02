/* Copyright (C) 2008, 2018, 2022 Free Software Foundation, Inc.
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

#include <cppp/reiconv.hpp>
#include <iostream>
#include <cstdlib>
#include <cerrno>
#include <string>

#include "throw_error.hpp"

using namespace cppp::base::reiconv;

/* This test checks that the behaviour of iconv() in the situation of an
   invalid multibyte character after a shift sequence is consistent whether
   the entire buffer is passed at once, or whether it is passed in two
   subsequent calls.  Based on a bug report from
   Roman Rybalko <roman_rybalko@users.sourceforge.net>
   at <https://savannah.gnu.org/bugs/?24216>.  */

namespace test
{
    namespace shiftseq
    {
        void main1 (void)
        {
            static const char input[] = "+2D/YQNhB";
            iconv_t cd;
            char buf[20];

            const char * inptr;
            size_t inleft;
            char * outptr;
            size_t outleft;

            cd = iconv_open ("UTF-8", "UTF-7");
            {
            size_t r;

            inptr = input;
            inleft = 9;
            outptr = buf;
            outleft = sizeof (buf);
            r = iconv (cd, (char **) &inptr, &inleft, &outptr, &outleft);
            /*
            printf ("r = %d  errno = %d  inconsumed = %d outproduced = %d\n",
                    r, errno, inptr - input, outptr - buf);
            // glibc:
            //   r = -1  errno = 84  inconsumed = 4 outproduced = 0
            // cppp-reiconv:
            //   r = -1  errno = 84  inconsumed = 1 outproduced = 0
            */
            if (!(r == (size_t)(-1) && errno == EILSEQ
                    && inptr - input == 1 && outptr - buf == 0))
            {
                error(std::string(__FILE__) + ":" + std::to_string(__LINE__), "Test 1 failed.");
            }
            }
        }

        void main2 (void)
        {
            static const char input[20] = "+2D/YQNhB";
            iconv_t cd;
            char buf[20];

            const char * inptr;
            size_t inleft;
            char * outptr;
            size_t outleft;

            cd = iconv_open ("UTF-8", "UTF-7");
            {
            size_t r;

            inptr = input;
            inleft = 5;
            outptr = buf;
            outleft = sizeof (buf);
            r = iconv (cd, (char **) &inptr, &inleft, &outptr, &outleft);
            /*
            printf ("r = %d  errno = %d  inconsumed = %d outproduced = %d\n",
                    r, errno, inptr - input, outptr - buf);
            // glibc:
            //   r = -1  errno = 84 (EILSEQ)  inconsumed = 4 outproduced = 0
            // libiconv:
            //   r = -1  errno = 22 (EINVAL)  inconsumed = 1 outproduced = 0
            */
            if (!(r == (size_t)(-1) && errno == EINVAL
                    && inptr - input == 1 && outptr - buf == 0))
            {
                error(std::string(__FILE__) + ":" + std::to_string(__LINE__), "Test 2 failed.");
            }

            inleft = input + 20 - inptr;
            r = iconv (cd, (char **) &inptr, &inleft, &outptr, &outleft);
            /*
            printf ("r = %d  errno = %d  inconsumed = %d outproduced = %d\n",
                    r, errno, inptr - input, outptr - buf);
            // glibc:
            //   r = -1  errno = 84 (EILSEQ)  inconsumed = 4 outproduced = 0
            // libiconv:
            //   r = -1  errno = 84 (EILSEQ)  inconsumed = 1 outproduced = 0
            */
            if (!(r == (size_t)(-1) && errno == EILSEQ
                    && inptr - input == 1 && outptr - buf == 0))
            {
                error(std::string(__FILE__) + ":" + std::to_string(__LINE__), "Test 2 failed.");
            }
            }
        }

        void main()
        {
            main1();
            main2();
        }
    }
}

int main()
{
    test::shiftseq::main();
    return 0;
}

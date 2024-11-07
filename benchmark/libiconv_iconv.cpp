#include "benchmark.hpp"

#include "/usr/local/include/iconv.h"

#include <cerrno>
#include <cstdlib>

#ifndef iconv
#warning iconv is not defined. Please make sure you are including libiconv instead of glibc iconv.
#warning Trying to link with libiconv. This may cause linker errors.

#undef iconv_t
#undef iconv_open
#undef iconv
#undef iconv_close

#define iconv_t libiconv_t
#define iconv_open libiconv_open
#define iconv libiconv
#define iconv_close libiconv_close

extern "C"
{
    typedef void *iconv_t;
    extern int iconv_close(iconv_t cd);
    extern iconv_t iconv_open(const char *tocode, const char *fromcode);
    extern size_t iconv(iconv_t cd, char **inbuf, size_t *inbytesleft, char **outbuf, size_t *outbytesleft);
}
#endif

constexpr std::size_t tmpbufsize = 4096;

// iconv_string without autodetection. Link with libiconv.
// See https://git.savannah.gnu.org/cgit/libiconv.git/tree/extras/iconv_string.c
int libiconv_iconv_string(const char *tocode, const char *fromcode, const char *start, const char *end, char **resultp,
                          std::size_t *lengthp)
{
    iconv_t cd = ::iconv_open(tocode, fromcode);
    std::size_t length;
    char *result;
    /* Determine the length we need. */
    {
        std::size_t count = 0;
        char tmpbuf[tmpbufsize];
        const char *inptr = start;
        std::size_t insize = end - start;
        while (insize > 0)
        {
            char *outptr = tmpbuf;
            std::size_t outsize = tmpbufsize;
            std::size_t res = ::iconv(cd, (char **)&inptr, &insize, &outptr, &outsize);
            if (res == (std::size_t)(-1) && errno != E2BIG)
            {
                int saved_errno = (errno == EINVAL ? EILSEQ : errno);
                ::iconv_close(cd);
                errno = saved_errno;
                return -1;
            }
            count += outptr - tmpbuf;
        }
        {
            char *outptr = tmpbuf;
            std::size_t outsize = tmpbufsize;
            std::size_t res = ::iconv(cd, nullptr, nullptr, &outptr, &outsize);
            if (res == (std::size_t)(-1))
            {
                int saved_errno = errno;
                ::iconv_close(cd);
                errno = saved_errno;
                return -1;
            }
            count += outptr - tmpbuf;
        }
        length = count;
    }
    if (lengthp != nullptr)
    {
        *lengthp = length;
    }
    if (resultp == nullptr)
    {
        ::iconv_close(cd);
        return 0;
    }
    result = (*resultp == nullptr ? (char *)malloc(length) : (char *)realloc(*resultp, length));
    *resultp = result;
    if (length == 0)
    {
        ::iconv_close(cd);
        return 0;
    }
    if (result == nullptr)
    {
        ::iconv_close(cd);
        errno = ENOMEM;
        return -1;
    }
    ::iconv(cd, nullptr, nullptr, nullptr, nullptr); /* return to the initial state */
    /* Do the conversion for real. */
    {
        const char *inptr = start;
        std::size_t insize = end - start;
        char *outptr = result;
        std::size_t outsize = length;
        while (insize > 0)
        {
            std::size_t res = ::iconv(cd, (char **)&inptr, &insize, &outptr, &outsize);
            if (res == (std::size_t)(-1))
            {
                if (errno == EINVAL)
                {
                    break;
                }
                else
                {
                    int saved_errno = errno;
                    ::iconv_close(cd);
                    errno = saved_errno;
                    return -1;
                }
            }
        }
        {
            std::size_t res = ::iconv(cd, nullptr, nullptr, &outptr, &outsize);
            if (res == (std::size_t)(-1))
            {
                int saved_errno = errno;
                ::iconv_close(cd);
                errno = saved_errno;
                return -1;
            }
        }
        if (outsize != 0)
            std::abort();
    }
    ::iconv_close(cd);
    return 0;
}

void libiconv_static_size_convert(const char *tocode, const char *fromcode, const char *data, std::size_t size,
                                  char **resultp, std::size_t result_size)
{
    iconv_t cd = ::iconv_open(tocode, fromcode);
    if (cd == (iconv_t)(-1))
    {
        *resultp = nullptr;
        std::abort();
    }
    *resultp = (char *)malloc(result_size);
    char *inptr = (char *)data;
    char *outptr = *resultp;
    std::size_t insize = size;
    std::size_t outsize = result_size;
    std::size_t res = ::iconv(cd, &inptr, &insize, &outptr, &outsize);
    if (res == (std::size_t)(-1))
    {
        ::iconv_close(cd);
        free(*resultp);
        std::abort();
    }
    ::iconv_close(cd);
}

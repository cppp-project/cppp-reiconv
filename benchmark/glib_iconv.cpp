#include "benchmark.hpp"

#include "/usr/include/iconv.h"

#include <cerrno>
#include <cstdlib>

#ifdef iconv
#warning iconv is defined. Please make sure you are including glibc iconv instead of libiconv.
#warning Trying to link with glibc iconv. This may cause linker errors.
#endif

constexpr const std::size_t tmpbufsize = 4096;

// iconv_string without autodetection. With glibc iconv.
// See https://git.savannah.gnu.org/cgit/libiconv.git/tree/extras/iconv_string.c
int glibc_iconv_string(const char *tocode, const char *fromcode, const char *start, const char *end, char **resultp,
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

void glibc_static_size_convert(const char *tocode, const char *fromcode, const char *data, std::size_t size,
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
        std::free(*resultp);
        std::abort();
    }
    ::iconv_close(cd);
}

#include "benchmark.hpp"

#include <cerrno>
#include <cstdlib>
#include <cstring>

extern "C"
{
    typedef void* iconv_t;
    void* iconv_open(const char* tocode, const char* fromcode);
    int iconv_close(void* cd);
    size_t iconv(void* cd, char** inbuf, size_t* inbytesleft, char** outbuf, size_t* outbytesleft);
}

void* glibc_iconv_open()
{
    return iconv_open("GB18030", "UTF-8");
}

int glibc_static_size_convert(void* cd, const char *input_data, size_t input_length, char *output_data,
                              size_t output_length)
{
    char *inptr = (char *)input_data;
    size_t insize = input_length;
    char *outptr = output_data;
    size_t outsize = output_length;
    while (insize > 0)
    {
        size_t res = iconv(cd, &inptr, &insize, &outptr, &outsize);
        if (res == (size_t)(-1))
        {
            if (errno == EINVAL)
            {
                break;
            }
            else
            {
                return -1;
            }
        }
    }
    if (iconv(cd, NULL, NULL, &outptr, &outsize) == (size_t)(-1))
    {
        return -1;
    }
    memset(outptr, 0, outsize); // Fill the rest of the buffer with '\0'.
    return 0;
}

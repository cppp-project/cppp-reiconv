#include "benchmark.hpp"

#include <cppp/reiconv.h>

#include <cerrno>
#include <cstdlib>
#include <cstring>

void* reiconv_iconv_open()
{
    return reiconv_open_from_index(ENCODING_UTF8, ENCODING_GB18030, REICONV_NO_FLAGS);
}

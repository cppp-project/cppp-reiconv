cmake_minimum_required(VERSION 3.1)
project(cppp-reiconv)

include("${CMAKE_SOURCE_DIR}/build-aux/cmake/cppp.cmake")

check_have_visibility()

include(TestBigEndian)

TEST_BIG_ENDIAN(IS_BIG_ENDIAN)

if(IS_BIG_ENDIAN)
    set(WORDS_BIGENDIAN 1)
else()
    set(WORDS_LITTLEENDIAN 1)
endif()

set(DLL_VARIABLE "")

configure_file("${srcdir}/config.h.in" "${output_includedir}/config.h")
configure_file("${srcdir}/include/iconv.h.in" "${output_includedir}/iconv.h")

include_directories("${srcdir}/lib")
include_directories("${srcdir}/lib/generated")
include_directories("${output_includedir}")

add_library(cppp-reiconv STATIC "${srcdir}/lib/iconv.c")

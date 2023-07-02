cmake_minimum_required(VERSION 3.12)
project(cppp-reiconv VERSION 2.0.0)

set(CMAKE_CXX_STANDARD 11)

include("${CMAKE_SOURCE_DIR}/build-aux/cmake/cppp.cmake")

check_have_visibility()

set(DLL_VARIABLE "__attribute__((__visibility__(\"default\")))")

configure_file("${srcdir}/include/cppp/reiconv.hpp.in" "${output_includedir}/cppp/reiconv.hpp")

# Clear DLL_VARIABLE
set(DLL_VARIABLE "")
configure_file("${srcdir}/include/cppp/reiconv.hpp.in" "${output_includedir}/cppp/reiconv.hpp.inst")

include_directories("${srcdir}/lib")
include_directories("${srcdir}/lib/generated")
include_directories("${output_includedir}")

# Add definitions
add_compile_definitions(ENABLE_EXTRA=1)

# Add library
add_library(libcppp-reiconv.shared SHARED "${srcdir}/lib/iconv.cpp")

# Set properties
set_target_properties(libcppp-reiconv.shared PROPERTIES
                        OUTPUT_NAME ${PROJECT_NAME}
                        LIBRARY_OUTPUT_DIRECTORY "${output_shareddir}"
                        ARCHIVE_OUTPUT_DIRECTORY "${output_staticddir}"
                        VERSION ${PROJECT_VERSION} )

include("tests/tests.cmake")

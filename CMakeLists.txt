cmake_minimum_required(VERSION 3.12)
project(cppp-reiconv VERSION 2.0.0)

# Define options
option(ENABLE_EXTRA "Enable extra encodings and features." OFF)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)

include("${CMAKE_SOURCE_DIR}/build-aux/cmake/cppp.cmake")

check_have_visibility()

# Generate header file for build
if(WIN32)
    set(DLL_VARIABLE "__declspec(dllexport)")
elseif(HAVE_VISIBILITY)
    set(DLL_VARIABLE "__attribute__((__visibility__(\"default\")))")
else()
    set(DLL_VARIABLE "")
endif()
configure_file("${srcdir}/include/cppp/reiconv.hpp.in" "${output_includedir}/cppp/reiconv.hpp")

# Generate header file for install
if(WIN32)
    set(DLL_VARIABLE "__declspec(dllimport)")
elseif(HAVE_VISIBILITY)
    set(DLL_VARIABLE "__attribute__((__visibility__(\"default\")))")
else()
    set(DLL_VARIABLE "")
endif()
configure_file("${srcdir}/include/cppp/reiconv.hpp.in" "${output_includedir}/cppp/reiconv.hpp.inst")

# Add includes
include_directories("${srcdir}/lib")
include_directories("${srcdir}/lib/generated")
include_directories("${output_includedir}")

# Add definitions
if(ENABLE_EXTRA)
    add_compile_definitions(ENABLE_EXTRA=1)
endif()

# Add library
cppp_build_library(${PROJECT_NAME} "${srcdir}/lib/iconv.cpp" TRUE TRUE)

# Include test suite.
include("tests/tests.cmake")

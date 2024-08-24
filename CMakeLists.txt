# Copyright (C) 2023 The C++ Plus Project.
# This file is part of the cppp-reiconv library.
#
# The cppp-reiconv library is free software; you can redistribute it
# and/or modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either version 3
# of the License, or (at your option) any later version.
#
# The cppp-reiconv library is distributed in the hope that it will be
# useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with the cppp-reiconv library; see the file LICENSE.
# If not, see <https://www.gnu.org/licenses/>.

cmake_minimum_required(VERSION 3.12)
project(cppp-reiconv
        VERSION 3.0.0
        DESCRIPTION "A character set conversion library based on GNU LIBICONV."
        HOMEPAGE_URL "https://github.com/cppp-project/cppp-reiconv"
        LANGUAGES CXX)

option(BUILD_TEST "Test suites for '${PROJECT_NAME}' enabled." ON)

set(CMAKE_CXX_STANDARD 20)

# ----------------------------------------------------------------------------------
# Import build auxiliaries.
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/build-aux")
    set(BUILD_AUX "${CMAKE_CURRENT_SOURCE_DIR}/build-aux")
    add_subdirectory("${BUILD_AUX}")
    message(STATUS "Using '${BUILD_AUX}' for C+++ build-aux directory.")
elseif(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/../build-aux")
    set(BUILD_AUX "${CMAKE_CURRENT_SOURCE_DIR}/../build-aux")
else()
    message(FATAL_ERROR "CMake build-aux directory is not exists, try to execute 'setup.cmd' or './setup.sh' to get it.")
endif()
get_filename_component(BUILD_AUX "${BUILD_AUX}" ABSOLUTE)
include("${BUILD_AUX}/cmake/cppp.cmake")
# ----------------------------------------------------------------------------------

check_have_visibility()

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")    
    add_compile_options(-Wno-unused-parameter)
    add_compile_options(-Wno-missing-field-initializers)
    add_compile_options(-Wno-implicit-fallthrough)
    add_compile_options(-Wno-unused-function)
    add_compile_options(-Wno-sign-compare)
    add_compile_options(-Wno-type-limits)
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    add_compile_options(-Wno-unused-parameter)
    add_compile_options(-Wno-missing-field-initializers)
    add_compile_options(-Wno-implicit-fallthrough)
    add_compile_options(-Wno-unused-function)
    add_compile_options(-Wno-sign-compare)
    add_compile_options(-Wno-type-limits)
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    add_compile_options(/wd4996)
    add_compile_options(/wd4267)
    add_compile_options(/wd4244)
    add_compile_options(/wd4018)
endif()

# Generate header file for install.
if(WIN32)
    set(CPPP_API "__declspec(dllimport)")
elseif(HAVE_VISIBILITY)
    set(CPPP_API "__attribute__((visibility(\"default\")))")
else()
    set(CPPP_API "")
endif()

configure_file("${CMAKE_CURRENT_SOURCE_DIR}/include/cppp/reiconv.hpp.in" "${output_includedir}/cppp/reiconv.hpp.inst")


# Generate header file for build.
if(WIN32)
    set(CPPP_API "__declspec(dllexport)")
endif()

configure_file("${CMAKE_CURRENT_SOURCE_DIR}/include/cppp/reiconv.hpp.in" "${output_includedir}/cppp/reiconv.hpp")
configure_file("${CMAKE_CURRENT_SOURCE_DIR}/windows/cppp-reiconv.rc.in" "${CMAKE_BINARY_DIR}/windows/cppp-reiconv.rc")
file(READ "${CMAKE_CURRENT_SOURCE_DIR}/lib/generated/indexes.hpp.shippet" _INDEXES_CODE)
string(STRIP "${_INDEXES_CODE}" INDEXES_CODE)
configure_file("${CMAKE_CURRENT_SOURCE_DIR}/include/cppp/encodings/reiconv.hpp.in" "${output_includedir}/cppp/encodings/reiconv.hpp")

# Add includes.
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/lib")
include_directories("${output_includedir}")

add_compile_definitions(VERSION_MAJOR=${PROJECT_VERSION_MAJOR})
add_compile_definitions(VERSION_MINOR=${PROJECT_VERSION_MINOR})
add_compile_definitions(VERSION_PATCH=${PROJECT_VERSION_PATCH})

# Add library.
cppp_build_library(${PROJECT_NAME} "${CMAKE_CURRENT_SOURCE_DIR}/lib/iconv.cpp" TRUE TRUE "${CMAKE_BINARY_DIR}/windows/cppp-reiconv.rc")

# Include test suite.
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/tests" AND BUILD_TEST)
    include("tests/tests.cmake")
endif()

# Install libraries.
cppp_install_library(${PROJECT_NAME})

# Install headers.
# PERMISSIONS 0644
install(FILES "${output_includedir}/cppp/reiconv.hpp.inst"
        DESTINATION "${install_includedir}"
        RENAME "cppp/reiconv.hpp"
        PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ )

install(FILES "${output_includedir}/cppp/encodings/reiconv.hpp"
        DESTINATION "${install_includedir}"
        RENAME "cppp/reiconv.hpp"
        PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ )

include("${CMAKE_CURRENT_SOURCE_DIR}/cpack.cmake")

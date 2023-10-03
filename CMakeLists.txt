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
# License along with the cppp-reiconv library; see the file COPYING.
# If not, see <https://www.gnu.org/licenses/>.

cmake_minimum_required(VERSION 3.12)
project(cppp-reiconv VERSION 2.1.0)

# Define options
option(ENABLE_EXTRA "Enable extra encodings and features." OFF)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# ----------------------------------------------------------------------------------
# Import build-aux subdirectory.
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/build-aux")
    set(BUILD_AUX "${CMAKE_CURRENT_SOURCE_DIR}/build-aux")
    add_subdirectory("${BUILD_AUX}")
    message(STATUS "Using '${BUILD_AUX}' for C++ Plus build-aux directory.")
elseif(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/../build-aux")
    set(BUILD_AUX "${CMAKE_CURRENT_SOURCE_DIR}/../build-aux")
else()
    message(FATAL_ERROR "CMake build-aux directory is not exists, try to execute 'setup.cmd' or './setup.sh' to get it.")
endif()
get_filename_component(BUILD_AUX "${BUILD_AUX}" ABSOLUTE)
include("${BUILD_AUX}/cmake/cppp.cmake")

cppp_init_nls_util()

# ----------------------------------------------------------------------------------
check_have_visibility()

if(MSVC)
    add_compile_options(/wd4018)
endif()

# Generate header file for build
if(WIN32)
    set(DLL_VARIABLE "__declspec(dllexport)")
elseif(HAVE_VISIBILITY)
    set(DLL_VARIABLE "__attribute__((__visibility__(\"default\")))")
else()
    set(DLL_VARIABLE "")
endif()
configure_file("${CMAKE_CURRENT_SOURCE_DIR}/include/cppp/reiconv.hpp.in" "${output_includedir}/cppp/reiconv.hpp")
configure_file("${CMAKE_CURRENT_SOURCE_DIR}/windows/libcppp-reiconv.rc.in" "${CMAKE_BINARY_DIR}/windows/libcppp-reiconv.rc")

# Generate header file for install
if(WIN32)
    set(DLL_VARIABLE "__declspec(dllimport)")
else()
    set(DLL_VARIABLE "")
endif()
configure_file("${CMAKE_CURRENT_SOURCE_DIR}/include/cppp/reiconv.hpp.in" "${output_includedir}/cppp/reiconv.hpp.inst")
cppp_nls_autotranslate("${output_includedir}/cppp/reiconv.hpp.inst" "${CMAKE_CURRENT_SOURCE_DIR}/lang")

# Add includes
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/lib")
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/lib/generated")
include_directories("${output_includedir}")

# Add definitions
if(ENABLE_EXTRA)
    message(STATUS "Extra encodings and features enabled.")
    add_compile_definitions(ENABLE_EXTRA=1)
endif()

# Add library
cppp_build_library(${PROJECT_NAME} "${CMAKE_CURRENT_SOURCE_DIR}/lib/iconv.cpp" TRUE TRUE "${CMAKE_BINARY_DIR}/windows/libcppp-reiconv.rc")

# Include test suite.
include("tests/tests.cmake")

# Install
# Static
# PERMISSIONS 0644
install(TARGETS libcppp-reiconv.static
        DESTINATION "${install_staticdir}"
        PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ
        LIBRARY DESTINATION "${install_shareddir}"
        ARCHIVE DESTINATION "${install_staticdir}"
        RUNTIME DESTINATION "${install_bindir}"
        INCLUDES DESTINATION "${install_includedir}" )

# Shared
# PERMISSIONS 0755
install(TARGETS libcppp-reiconv.shared
        EXPORT libcppp-reiconv-export
        DESTINATION "${install_shareddir}"
        PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE
        LIBRARY DESTINATION "${install_shareddir}"
        ARCHIVE DESTINATION "${install_staticdir}"
        RUNTIME DESTINATION "${install_bindir}"
        INCLUDES DESTINATION "${install_includedir}" )

# Includes
# install includes
# PERMISSIONS 0644
install(FILES "${output_includedir}/cppp/reiconv.hpp.inst"
        DESTINATION "${install_includedir}"
        RENAME "cppp/reiconv.hpp"
        PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ )

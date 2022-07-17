#!/bin/sh
# Convenience script for regenerating all autogeneratable files that are
# omitted from the version control repository. In particular, this script
# also regenerates all aclocal.m4, config.h.in, Makefile.in, configure files
# with new versions of autoconf or automake.
#
# This script requires autoconf-2.63..2.71 and automake-1.11..1.16 in the PATH.
# It also requires
#   - the gperf program.

# Copyright (C) 2003-2012, 2016, 2018-2022 Free Software Foundation, Inc.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.

# Prerequisite (if not used from a released tarball): ./autopull.sh
# Usage: ./autogen.sh

# ========== Generate files. ==========

make -f Makefile.devel totally-clean all || exit $?

(cd libcharset
 ./autogen.sh || exit $?
)

echo "$0: done.  Now you can run './configure'."

#!/bin/sh
# Convenience script for fetching auxiliary files that are omitted from
# the version control repository of this package.
#
# This script requires either
#   - the GNULIB_SRCDIR environment variable pointing to a gnulib checkout, or
#   - a preceding invocation of './gitsub.sh pull'.

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

# Usage: ./autopull.sh

./gitsub.sh pull

# ========== Copy files from gnulib, automake, or the internet. ==========

if test -n "$GNULIB_SRCDIR"; then
  test -d "$GNULIB_SRCDIR" || {
    echo "*** GNULIB_SRCDIR is set but does not point to an existing directory." 1>&2
    exit 1
  }
else
  GNULIB_SRCDIR=`pwd`/gnulib
  test -d "$GNULIB_SRCDIR" || {
    echo "*** Subdirectory 'gnulib' does not yet exist. Use './gitsub.sh pull' to create it, or set the environment variable GNULIB_SRCDIR." 1>&2
    exit 1
  }
fi
# Now it should contain a gnulib-tool.
GNULIB_TOOL="$GNULIB_SRCDIR/gnulib-tool"
test -f "$GNULIB_TOOL" || {
  echo "*** gnulib-tool not found." 1>&2
  exit 1
}
for file in build-aux/compile build-aux/ar-lib; do
  $GNULIB_TOOL --copy-file $file || exit $?
  chmod a+x $file || exit $?
done
make -f Makefile.devel \
     gnulib-clean srclib/Makefile.gnulib gnulib-imported-files srclib/Makefile.in \
     GNULIB_TOOL="$GNULIB_TOOL"

# Copy files into the libcharset subpackage, so that libcharset/autogen.sh
# does not need to invoke gnulib-tool nor automake.
for file in INSTALL.generic; do
  cp -p $file libcharset/$file || exit $?
done
for file in config.guess config.libpath config.sub install-sh libtool-reloc mkinstalldirs; do
  cp -p build-aux/$file libcharset/build-aux/$file || exit $?
done
for file in codeset.m4 fcntl-o.m4 lib-ld.m4 relocatable.m4 relocatable-lib.m4 visibility.m4; do
  cp -p srcm4/$file libcharset/m4/$file || exit $?
done

echo "$0: done.  Now you can run './autogen.sh'."

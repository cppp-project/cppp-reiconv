#!/bin/sh
# Convenience script for regenerating all autogeneratable files that are
# omitted from the version control repository. In particular, this script
# also regenerates all aclocal.m4, config.h.in, Makefile.in, configure files
# with new versions of autoconf or automake.
#
# This script requires autoconf-2.63..2.69 and automake-1.11..1.16 in the PATH.
# If not used from a released tarball, it also requires either
#   - the GNULIB_SRCDIR environment variable pointing to a gnulib checkout, or
#   - a preceding invocation of './gitsub.sh pull'.
# It also requires
#   - the gperf program.

# Copyright (C) 2003-2012, 2016, 2018-2019 Free Software Foundation, Inc.
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

# Usage: ./autogen.sh [--skip-gnulib]

skip_gnulib=false
while :; do
  case "$1" in
    --skip-gnulib) skip_gnulib=true; shift;;
    *) break ;;
  esac
done

if test $skip_gnulib = false; then
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
  $GNULIB_TOOL --copy-file build-aux/ar-lib || exit $?
  chmod a+x build-aux/ar-lib || exit $?
  make -f Makefile.devel \
       gnulib-clean srclib/Makefile.gnulib gnulib-imported-files \
       GNULIB_TOOL="$GNULIB_TOOL"
fi

make -f Makefile.devel totally-clean all || exit $?

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

(cd libcharset
 ./autogen.sh || exit $?
)

echo "$0: done.  Now you can run './configure'."

#!/bin/sh
# Convenience script for regenerating all aclocal.m4, config.h.in, Makefile.in,
# configure files with new versions of autoconf or automake.
#
# This script requires autoconf-2.60 and automake-1.9 in the PATH.
# It also requires either
#   - the GNULIB_TOOL environment variable pointing to the gnulib-tool script
#     in a gnulib checkout, or
#   - the cvs program in the PATH and an internet connection.

# Copyright (C) 2003-2007 Free Software Foundation, Inc.
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2, or (at your option)
# any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software Foundation,
# Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.

# Usage: ./autogen.sh

if test -z "$GNULIB_TOOL"; then
  # Check out gnulib in a subdirectory 'gnulib'.
  GNULIB_CVS_ROOT=':pserver:anonymous@cvs.savannah.gnu.org:/sources/gnulib'
  GNULIB_CVS_REPOSITORY='gnulib'
  if test -d gnulib; then
    (cd gnulib && cvs update -d -P)
  else
    cvs -d "$GNULIB_CVS_ROOT" checkout $GNULIB_CVS_REPOSITORY
  fi
  # Now it should contain a gnulib-tool.
  if test -f gnulib/gnulib-tool; then
    GNULIB_TOOL=`pwd`/gnulib/gnulib-tool
  else
    echo "** warning: gnulib-tool not found" 1>&2
  fi
fi
# Skip the gnulib-tool step if gnulib-tool was not found.
if test -n "$GNULIB_TOOL"; then
  if test -f srcm4/gnulib-cache.m4; then
    mv -f srcm4/gnulib-cache.m4 srcm4/gnulib-cache.m4~
  fi
  if test -f srclib/Makefile.gnulib; then
    mv -f srclib/Makefile.gnulib srclib/Makefile.gnulib~
  fi
  make -f Makefile.devel srclib/Makefile.gnulib GNULIB_TOOL="$GNULIB_TOOL"
fi

rm -f configure config.h.in include/iconv.h.build.in
rm -f lib/aliases.h lib/aliases_aix.h lib/aliases_osf1.h lib/aliases_dos.h lib/aliases_extra.h
rm -f lib/flags.h
rm -f lib/translit.h
rm -f man/iconv.1.html man/iconv.3.html man/iconv_close.3.html man/iconv_open.3.html
make -f Makefile.devel

(cd libcharset
 ./autogen.sh
)

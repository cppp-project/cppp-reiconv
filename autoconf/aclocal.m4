dnl local autoconf macros
dnl Bruno Haible 2001-02-04
dnl Marcus Daniels 1997-04-10
dnl
AC_PREREQ(2.12)dnl
dnl
dnl without AC_MSG_...:   with AC_MSG_... and caching:
dnl   AC_TRY_CPP          CL_CPP_CHECK
dnl   AC_TRY_COMPILE      CL_COMPILE_CHECK
dnl   AC_TRY_LINK         CL_LINK_CHECK
dnl   AC_TRY_RUN          CL_RUN_CHECK - would require cross-compiling support
dnl Usage:
dnl AC_TRY_CPP(INCLUDES,
dnl            ACTION-IF-FOUND [, ACTION-IF-NOT-FOUND])
dnl CL_CPP_CHECK(ECHO-TEXT, CACHE-ID,
dnl              INCLUDES,
dnl              ACTION-IF-FOUND [, ACTION-IF-NOT-FOUND])
dnl AC_TRY_xxx(INCLUDES, FUNCTION-BODY,
dnl            ACTION-IF-FOUND [, ACTION-IF-NOT-FOUND])
dnl CL_xxx_CHECK(ECHO-TEXT, CACHE-ID,
dnl              INCLUDES, FUNCTION-BODY,
dnl              ACTION-IF-FOUND [, ACTION-IF-NOT-FOUND])
dnl
define(CL_CPP_CHECK,
[AC_MSG_CHECKING(for $1)
AC_CACHE_VAL($2,[
AC_TRY_CPP([$3], $2=yes, $2=no)
])
AC_MSG_RESULT([$]$2)
if test [$]$2 = yes; then
  ifelse([$4], , :, [$4])
ifelse([$5], , , [else
  $5
])dnl
fi
])dnl
dnl
define(CL_COMPILE_CHECK,
[AC_MSG_CHECKING(for $1)
AC_CACHE_VAL($2,[
AC_TRY_COMPILE([$3],[$4], $2=yes, $2=no)
])
AC_MSG_RESULT([$]$2)
if test [$]$2 = yes; then
  ifelse([$5], , :, [$5])
ifelse([$6], , , [else
  $6
])dnl
fi
])dnl
dnl
define(CL_LINK_CHECK,
[AC_MSG_CHECKING(for $1)
AC_CACHE_VAL($2,[
AC_TRY_LINK([$3],[$4], $2=yes, $2=no)
])
AC_MSG_RESULT([$]$2)
if test [$]$2 = yes; then
  ifelse([$5], , :, [$5])
ifelse([$6], , , [else
  $6
])dnl
fi
])dnl
dnl
dnl CL_PROTO(IDENTIFIER, ACTION-IF-NOT-FOUND, FINAL-PROTOTYPE)
define(CL_PROTO,
[AC_MSG_CHECKING([for $1 declaration])
AC_CACHE_VAL(cl_cv_proto_[$1], [$2
cl_cv_proto_$1="$3"])
cl_cv_proto_$1=`echo "[$]cl_cv_proto_$1" | tr -s ' ' | sed -e 's/( /(/'`
AC_MSG_RESULTPROTO([$]cl_cv_proto_$1)
])dnl
dnl
dnl CL_PROTO_RET(INCLUDES, DECL, CACHE-ID, TYPE-IF-OK, TYPE-IF-FAILS)
define(CL_PROTO_RET,
[AC_TRY_COMPILE([$1]
AC_LANG_EXTERN[$2
], [], $3="$4", $3="$5")
])dnl
dnl
dnl CL_PROTO_TRY(INCLUDES, ANSI-DECL, TRAD-DECL, ACTION-IF-OK, ACTION-IF-FAILS)
define(CL_PROTO_TRY,
[AC_TRY_COMPILE([$1]
AC_LANG_EXTERN
[#if defined(__STDC__) || defined(__cplusplus)
$2
#else
$3
#endif
], [], [$4], [$5])
])dnl
dnl
dnl CL_PROTO_CONST(INCLUDES, ANSI-DECL, TRAD-DECL, CACHE-ID)
define(CL_PROTO_CONST,
[CL_PROTO_TRY([$1], [$2], [$3], $4="", $4="const")]
)dnl
dnl
dnl CL_SILENT(ACTION)
dnl performs ACTION, with AC_MSG_CHECKING and AC_MSG_RESULT being defined away.
define(CL_SILENT,
[pushdef([AC_MSG_CHECKING],[:])dnl
pushdef([AC_CHECKING],[:])dnl
pushdef([AC_MSG_RESULT],[:])dnl
pushdef([AC_MSG_RESULTPROTO],[:])dnl
$1[]dnl
popdef([AC_MSG_RESULTPROTO])dnl
popdef([AC_MSG_RESULT])dnl
popdef([AC_CHECKING])dnl
popdef([AC_MSG_CHECKING])dnl
])dnl
dnl
AC_DEFUN(CL_PROG_RANLIB, [AC_CHECK_PROG(RANLIB, ranlib, ranlib, true)])dnl
dnl
AC_DEFUN(CL_PROG_INSTALL,
[dnl This is mostly copied from AC_PROG_INSTALL.
# Find a good install program.  We prefer a C program (faster),
# so one script is as good as another.  But avoid the broken or
# incompatible versions:
# SysV /etc/install, /usr/sbin/install
# SunOS /usr/etc/install
# IRIX /sbin/install
# AIX /bin/install
# AFS /usr/afsws/bin/install, which mishandles nonexistent args
# SVR4 /usr/ucb/install, which tries to use the nonexistent group "staff"
# ./install, which can be erroneously created by make from ./install.sh.
AC_MSG_CHECKING(for a BSD compatible install)
if test -z "$INSTALL"; then
AC_CACHE_VAL(cl_cv_path_install,
[  IFS="${IFS= 	}"; ac_save_ifs="$IFS"; IFS="${IFS}:"
  for ac_dir in $PATH; do
    # Account for people who put trailing slashes in PATH elements.
    case "$ac_dir/" in
    /|./|.//|/etc/*|/usr/sbin/*|/usr/etc/*|/sbin/*|/usr/afsws/bin/*|/usr/ucb/*) ;;
    *)
      # OSF1 and SCO ODT 3.0 have their own names for install.
      for ac_prog in ginstall installbsd scoinst install; do
        if test -f $ac_dir/$ac_prog; then
	  if test $ac_prog = install &&
            grep dspmsg $ac_dir/$ac_prog >/dev/null 2>&1; then
	    # AIX install.  It has an incompatible calling convention.
	    # OSF/1 installbsd also uses dspmsg, but is usable.
	    :
	  else
	    if test $ac_prog = installbsd &&
	      grep src/bos $ac_dir/$ac_prog >/dev/null 2>&1; then
	      # AIX installbsd doesn't work without option "-g".
	      :
	    else
	      cl_cv_path_install="$ac_dir/$ac_prog -c"
	      break 2
	    fi
	  fi
	fi
      done
      ;;
    esac
  done
  IFS="$ac_save_ifs"
  # As a last resort, use cp.
  test -z "$cl_cv_path_install" && cl_cv_path_install="cp"
])dnl
  INSTALL="$cl_cv_path_install"
fi
dnl We do special magic for INSTALL instead of AC_SUBST, to get
dnl relative paths right. 
AC_MSG_RESULT($INSTALL)
AC_SUBST(INSTALL)dnl
# Use test -z because SunOS4 sh mishandles braces in ${var-val}.
# It thinks the first close brace ends the variable substitution.
test -z "$INSTALL_PROGRAM" && INSTALL_PROGRAM='$(INSTALL)'
AC_SUBST(INSTALL_PROGRAM)dnl
if test -z "$INSTALL_DATA"; then
  case "$INSTALL" in
    cp | */cp ) INSTALL_DATA='$(INSTALL)' ;;
    * )         INSTALL_DATA='$(INSTALL) -m 644' ;;
  esac
fi
AC_SUBST(INSTALL_DATA)dnl
])dnl
dnl
AC_DEFUN(CL_PROG_CP,
[AC_CACHE_CHECK(how to copy files, cl_cv_prog_cp, [
echo "blabla" > conftest.x
err=`/bin/sh -c "cp -p conftest.x conftest.y 2>&1"`
if test -z "$err"; then
  cl_cv_prog_cp='cp -p'
else
  cl_cv_prog_cp='cp'
fi
rm -f conftest*
])
CP="$cl_cv_prog_cp"
AC_SUBST(CP)dnl
])dnl
dnl
AC_DEFUN(CL_PROG_LN,
[AC_REQUIRE([CL_PROG_CP])dnl
AC_CACHE_CHECK(how to make hard links, cl_cv_prog_LN, [
rm -f conftestdata conftestfile
echo data > conftestfile
if ln conftestfile conftestdata 2>/dev/null; then
  cl_cv_prog_LN=ln
else
  cl_cv_prog_LN="$cl_cv_prog_cp"
fi
rm -f conftestdata conftestfile
])
LN="$cl_cv_prog_LN"
AC_SUBST(LN)dnl
])dnl
dnl
AC_DEFUN(CL_PROG_LN_S,
[AC_REQUIRE([CL_PROG_LN])dnl
dnl Make a symlink if possible; otherwise try a hard link. On filesystems
dnl which support neither symlink nor hard link, use a plain copy.
AC_MSG_CHECKING(whether ln -s works)
AC_CACHE_VAL(cl_cv_prog_LN_S, [
rm -f conftestdata
if ln -s X conftestdata 2>/dev/null; then
  cl_cv_prog_LN_S="ln -s"
else
  cl_cv_prog_LN_S="$cl_cv_prog_LN"
fi
rm -f conftestdata
])dnl
if test "$cl_cv_prog_LN_S" = "ln -s"; then
  AC_MSG_RESULT(yes)
else
  AC_MSG_RESULT(no)
fi
LN_S="$cl_cv_prog_LN_S"
AC_SUBST(LN_S)dnl
])dnl
dnl
AC_DEFUN(CL_CANONICAL_HOST,
[AC_REQUIRE([AC_PROG_CC]) dnl Actually: AC_REQUIRE([CL_CC_WORKS])
dnl Set ac_aux_dir before the cache check, because AM_PROG_LIBTOOL needs it.
ac_aux_dir=${srcdir}/$1
AC_CACHE_CHECK(host system type, cl_cv_host, [
dnl A substitute for AC_CONFIG_AUX_DIR_DEFAULT, so we don't need install.sh.
ac_config_guess=$ac_aux_dir/config.guess
ac_config_sub=$ac_aux_dir/config.sub
dnl Mostly copied from AC_CANONICAL_HOST.
# Make sure we can run config.sub.
if ${CONFIG_SHELL-/bin/sh} $ac_config_sub sun4 >/dev/null 2>&1; then :
else AC_MSG_ERROR(can not run $ac_config_sub)
fi
host_alias=$host
case "$host_alias" in
NONE)
  case $nonopt in
  NONE) dnl config.guess needs to compile things
        host_alias=`export CC; ${CONFIG_SHELL-/bin/sh} $ac_config_guess` ;;
  *)    host_alias=$nonopt ;;
  esac ;;
esac
# Don't fail just because the system is not listed in GNU's database.
if test -n "$host_alias"; then
  host=`${CONFIG_SHELL-/bin/sh} $ac_config_sub $host_alias`
else
  host_alias=unknown
  host=unknown-unknown-unknown
fi
cl_cv_host_alias="$host_alias"
cl_cv_host="$host"
])
host_alias="$cl_cv_host_alias"
host="$cl_cv_host"
changequote(,)dnl
host_cpu=`echo $host | sed 's/^\([^-]*\)-\([^-]*\)-\(.*\)$/\1/'`
host_vendor=`echo $host | sed 's/^\([^-]*\)-\([^-]*\)-\(.*\)$/\2/'`
host_os=`echo $host | sed 's/^\([^-]*\)-\([^-]*\)-\(.*\)$/\3/'`
changequote([,])dnl
AC_SUBST(host)dnl
AC_SUBST(host_cpu)dnl
AC_SUBST(host_vendor)dnl
AC_SUBST(host_os)dnl
])dnl
dnl
AC_DEFUN(CL_ICONV,
[dnl Some systems have iconv in libc, some have it in libiconv (OSF/1 and
dnl those with the standalone libiconv installed).
AC_CACHE_CHECK(for iconv, cl_cv_func_iconv, [
cl_cv_func_iconv=no
cl_cv_lib_iconv=no
AC_TRY_LINK([#include <stdlib.h>
#include <iconv.h>],
[iconv_t cd = iconv_open("",""); iconv(cd,NULL,NULL,NULL,NULL); iconv_close(cd);],
cl_cv_func_iconv=yes)
if test "$cl_cv_func_iconv" = no; then
cl_save_LIBS="$LIBS"
LIBS="$LIBS -liconv"
AC_TRY_LINK([#include <stdlib.h>
#include <iconv.h>],
[iconv_t cd = iconv_open("",""); iconv(cd,NULL,NULL,NULL,NULL); iconv_close(cd);],
cl_cv_lib_iconv=yes
cl_cv_func_iconv=yes)
LIBS="$cl_save_LIBS"
fi
])
if test "$cl_cv_func_iconv" = yes; then
  AC_DEFINE(HAVE_ICONV)
CL_PROTO([iconv], [
CL_PROTO_CONST([
#include <stdlib.h>
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif
#include <sys/types.h>
#include <iconv.h>
], [size_t iconv (iconv_t cd, char * *inbuf, size_t *inbytesleft, char * *outbuf, size_t* outbytesleft);],
[size_t iconv();],
cl_cv_proto_iconv_arg1)],
[extern size_t iconv (iconv_t cd, $cl_cv_proto_iconv_arg1 char * *inbuf, size_t *inbytesleft, char * *outbuf, size_t* outbytesleft);])
AC_DEFINE_UNQUOTED(ICONV_CONST,$cl_cv_proto_iconv_arg1)
fi
LIBICONV=
if test "$cl_cv_lib_iconv" = yes; then
  LIBICONV="-liconv"
fi
AC_SUBST(LIBICONV)
])dnl
dnl
AC_DEFUN(CL_WORDS_LITTLEENDIAN,
[AC_CACHE_CHECK(byte ordering, cl_cv_sys_endian, [
AC_TRY_RUN([int main () {
  /* Are we little or big endian?  From Harbison&Steele.  */
  union
  {
    long l;
    char c[sizeof (long)];
  } u;
  u.l = 1;
  exit (u.c[0] == 1);
}],
cl_cv_sys_endian="big endian",
cl_cv_sys_endian="little endian",
: # must guess the endianness
)
if test -z "$cl_cv_sys_endian"; then
AC_EGREP_CPP(yes,[#if defined(m68k) || defined(__m68k__) || defined(mc68000) || defined(mc68020) || defined(__mc68020__) || defined(sparc) || defined(__sparc__) || defined(MIPSEB) || defined(__MIPSEB__) || defined(hppa) || defined(__hppa) || defined(m88000) || defined(__m88k__)
  yes
#endif
], cl_cv_sys_endian="big endian")
fi
if test -z "$cl_cv_sys_endian"; then
AC_EGREP_CPP(yes,[#if defined(i386) || defined(__i386) || defined(__i386__) || defined(_I386) || defined(MIPSEL) || defined(__MIPSEL__) || defined(__alpha)
  yes
#endif
], cl_cv_sys_endian="little endian")
fi
if test -z "$cl_cv_sys_endian"; then
cl_cv_sys_endian="guessing little endian"
fi
])
case "$cl_cv_sys_endian" in
  *little*) AC_DEFINE(WORDS_LITTLEENDIAN) ;;
  *big*)    ;;
esac
])dnl
dnl
## libtool.m4 - Configure libtool for the target system. -*-Shell-script-*-
## Copyright (C) 1996-1999, 2000 Free Software Foundation, Inc.
## Originally by Gordon Matzigkeit <gord@gnu.ai.mit.edu>, 1996
##
## This program is free software; you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation; either version 2 of the License, or
## (at your option) any later version.
##
## This program is distributed in the hope that it will be useful, but
## WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
## General Public License for more details.
##
## You should have received a copy of the GNU General Public License
## along with this program; if not, write to the Free Software
## Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
##
## As a special exception to the GNU General Public License, if you
## distribute this file as part of a program that contains a
## configuration script generated by Autoconf, you may include it under
## the same distribution terms that you use for the rest of that program.

# serial 40 AC_PROG_LIBTOOL
AC_DEFUN(AC_PROG_LIBTOOL,
[AC_REQUIRE([AC_LIBTOOL_SETUP])dnl

# Save cache, so that ltconfig can load it
AC_CACHE_SAVE

# Actually configure libtool.  ac_aux_dir is where install-sh is found.
CC="$CC" CFLAGS="$CFLAGS" CPPFLAGS="$CPPFLAGS" \
LD="$LD" LDFLAGS="$LDFLAGS" LIBS="$LIBS" \
LN_S="$LN_S" NM="$NM" RANLIB="$RANLIB" \
DLLTOOL="$DLLTOOL" AS="$AS" OBJDUMP="$OBJDUMP" \
${CONFIG_SHELL-/bin/sh} $ac_aux_dir/ltconfig --no-reexec \
$libtool_flags --no-verify $ac_aux_dir/ltmain.sh $lt_target \
|| AC_MSG_ERROR([libtool configure failed])

# Reload cache, that may have been modified by ltconfig
AC_CACHE_LOAD

# This can be used to rebuild libtool when needed
LIBTOOL_DEPS="$ac_aux_dir/ltconfig $ac_aux_dir/ltmain.sh"

# Always use our own libtool.
LIBTOOL='$(SHELL) $(top_builddir)/libtool'
AC_SUBST(LIBTOOL)dnl

# Redirect the config.log output again, so that the ltconfig log is not
# clobbered by the next message.
exec 5>>./config.log
])

AC_DEFUN(AC_LIBTOOL_SETUP,
[AC_PREREQ(2.13)dnl
AC_REQUIRE([AC_ENABLE_SHARED])dnl
AC_REQUIRE([AC_ENABLE_STATIC])dnl
AC_REQUIRE([AC_ENABLE_FAST_INSTALL])dnl
AC_REQUIRE([CL_CANONICAL_HOST])dnl
AC_REQUIRE([AC_CANONICAL_BUILD])dnl
AC_REQUIRE([CL_PROG_RANLIB])dnl
AC_REQUIRE([AC_PROG_CC])dnl
AC_REQUIRE([AC_PROG_LD])dnl
AC_REQUIRE([AC_PROG_NM])dnl
AC_REQUIRE([CL_PROG_LN_S])dnl
dnl

case "$target" in
NONE) lt_target="$host" ;;
*) lt_target="$target" ;;
esac

# Check for any special flags to pass to ltconfig.
libtool_flags="--cache-file=$cache_file"
test "$enable_shared" = no && libtool_flags="$libtool_flags --disable-shared"
test "$enable_static" = no && libtool_flags="$libtool_flags --disable-static"
test "$enable_fast_install" = no && libtool_flags="$libtool_flags --disable-fast-install"
test "$ac_cv_prog_gcc" = yes && libtool_flags="$libtool_flags --with-gcc"
test "$ac_cv_prog_gnu_ld" = yes && libtool_flags="$libtool_flags --with-gnu-ld"
ifdef([AC_PROVIDE_AC_LIBTOOL_DLOPEN],
[libtool_flags="$libtool_flags --enable-dlopen"])
ifdef([AC_PROVIDE_AC_LIBTOOL_WIN32_DLL],
[libtool_flags="$libtool_flags --enable-win32-dll"])
AC_ARG_ENABLE(libtool-lock,
  [  --disable-libtool-lock  avoid locking (might break parallel builds)])
test "x$enable_libtool_lock" = xno && libtool_flags="$libtool_flags --disable-lock"
test x"$silent" = xyes && libtool_flags="$libtool_flags --silent"

# Some flags need to be propagated to the compiler or linker for good
# libtool support.
case "$lt_target" in
*-*-irix6*)
  # Find out which ABI we are using.
  echo '[#]line __oline__ "configure"' > conftest.$ac_ext
  if AC_TRY_EVAL(ac_compile); then
    case "`/usr/bin/file conftest.o`" in
    *32-bit*)
      LD="${LD-ld} -32"
      ;;
    *N32*)
      LD="${LD-ld} -n32"
      ;;
    *64-bit*)
      LD="${LD-ld} -64"
      ;;
    esac
  fi
  rm -rf conftest*
  ;;

*-*-sco3.2v5*)
  # On SCO OpenServer 5, we need -belf to get full-featured binaries.
  SAVE_CFLAGS="$CFLAGS"
  CFLAGS="$CFLAGS -belf"
  AC_CACHE_CHECK([whether the C compiler needs -belf], lt_cv_cc_needs_belf,
    [AC_TRY_LINK([],[],[lt_cv_cc_needs_belf=yes],[lt_cv_cc_needs_belf=no])])
  if test x"$lt_cv_cc_needs_belf" != x"yes"; then
    # this is probably gcc 2.8.0, egcs 1.0 or newer; no need for -belf
    CFLAGS="$SAVE_CFLAGS"
  fi
  ;;

ifdef([AC_PROVIDE_AC_LIBTOOL_WIN32_DLL],
[*-*-cygwin* | *-*-mingw*)
  AC_CHECK_TOOL(DLLTOOL, dlltool, false)
  AC_CHECK_TOOL(AS, as, false)
  AC_CHECK_TOOL(OBJDUMP, objdump, false)
  ;;
])
esac
])

# AC_LIBTOOL_DLOPEN - enable checks for dlopen support
AC_DEFUN(AC_LIBTOOL_DLOPEN, [AC_BEFORE([$0],[AC_LIBTOOL_SETUP])])

# AC_LIBTOOL_WIN32_DLL - declare package support for building win32 dll's
AC_DEFUN(AC_LIBTOOL_WIN32_DLL, [AC_BEFORE([$0], [AC_LIBTOOL_SETUP])])

# AC_ENABLE_SHARED - implement the --enable-shared flag
# Usage: AC_ENABLE_SHARED[(DEFAULT)]
#   Where DEFAULT is either `yes' or `no'.  If omitted, it defaults to
#   `yes'.
AC_DEFUN(AC_ENABLE_SHARED, [dnl
define([AC_ENABLE_SHARED_DEFAULT], ifelse($1, no, no, yes))dnl
AC_ARG_ENABLE(shared,
changequote(<<, >>)dnl
<<  --enable-shared[=PKGS]  build shared libraries [default=>>AC_ENABLE_SHARED_DEFAULT],
changequote([, ])dnl
[p=${PACKAGE-default}
case "$enableval" in
yes) enable_shared=yes ;;
no) enable_shared=no ;;
*)
  enable_shared=no
  # Look at the argument we got.  We use all the common list separators.
  IFS="${IFS= 	}"; ac_save_ifs="$IFS"; IFS="${IFS}:,"
  for pkg in $enableval; do
    if test "X$pkg" = "X$p"; then
      enable_shared=yes
    fi
  done
  IFS="$ac_save_ifs"
  ;;
esac],
enable_shared=AC_ENABLE_SHARED_DEFAULT)dnl
])

# AC_DISABLE_SHARED - set the default shared flag to --disable-shared
AC_DEFUN(AC_DISABLE_SHARED, [AC_BEFORE([$0],[AC_LIBTOOL_SETUP])dnl
AC_ENABLE_SHARED(no)])

# AC_ENABLE_STATIC - implement the --enable-static flag
# Usage: AC_ENABLE_STATIC[(DEFAULT)]
#   Where DEFAULT is either `yes' or `no'.  If omitted, it defaults to
#   `yes'.
AC_DEFUN(AC_ENABLE_STATIC, [dnl
define([AC_ENABLE_STATIC_DEFAULT], ifelse($1, no, no, yes))dnl
AC_ARG_ENABLE(static,
changequote(<<, >>)dnl
<<  --enable-static[=PKGS]  build static libraries [default=>>AC_ENABLE_STATIC_DEFAULT],
changequote([, ])dnl
[p=${PACKAGE-default}
case "$enableval" in
yes) enable_static=yes ;;
no) enable_static=no ;;
*)
  enable_static=no
  # Look at the argument we got.  We use all the common list separators.
  IFS="${IFS= 	}"; ac_save_ifs="$IFS"; IFS="${IFS}:,"
  for pkg in $enableval; do
    if test "X$pkg" = "X$p"; then
      enable_static=yes
    fi
  done
  IFS="$ac_save_ifs"
  ;;
esac],
enable_static=AC_ENABLE_STATIC_DEFAULT)dnl
])

# AC_DISABLE_STATIC - set the default static flag to --disable-static
AC_DEFUN(AC_DISABLE_STATIC, [AC_BEFORE([$0],[AC_LIBTOOL_SETUP])dnl
AC_ENABLE_STATIC(no)])


# AC_ENABLE_FAST_INSTALL - implement the --enable-fast-install flag
# Usage: AC_ENABLE_FAST_INSTALL[(DEFAULT)]
#   Where DEFAULT is either `yes' or `no'.  If omitted, it defaults to
#   `yes'.
AC_DEFUN(AC_ENABLE_FAST_INSTALL, [dnl
define([AC_ENABLE_FAST_INSTALL_DEFAULT], ifelse($1, no, no, yes))dnl
AC_ARG_ENABLE(fast-install,
changequote(<<, >>)dnl
<<  --enable-fast-install[=PKGS]  optimize for fast installation [default=>>AC_ENABLE_FAST_INSTALL_DEFAULT],
changequote([, ])dnl
[p=${PACKAGE-default}
case "$enableval" in
yes) enable_fast_install=yes ;;
no) enable_fast_install=no ;;
*)
  enable_fast_install=no
  # Look at the argument we got.  We use all the common list separators.
  IFS="${IFS= 	}"; ac_save_ifs="$IFS"; IFS="${IFS}:,"
  for pkg in $enableval; do
    if test "X$pkg" = "X$p"; then
      enable_fast_install=yes
    fi
  done
  IFS="$ac_save_ifs"
  ;;
esac],
enable_fast_install=AC_ENABLE_FAST_INSTALL_DEFAULT)dnl
])

# AC_ENABLE_FAST_INSTALL - set the default to --disable-fast-install
AC_DEFUN(AC_DISABLE_FAST_INSTALL, [AC_BEFORE([$0],[AC_LIBTOOL_SETUP])dnl
AC_ENABLE_FAST_INSTALL(no)])

# AC_PROG_LD - find the path to the GNU or non-GNU linker
AC_DEFUN(AC_PROG_LD,
[AC_ARG_WITH(gnu-ld,
[  --with-gnu-ld           assume the C compiler uses GNU ld [default=no]],
test "$withval" = no || with_gnu_ld=yes, with_gnu_ld=no)
AC_REQUIRE([AC_PROG_CC])dnl
AC_REQUIRE([CL_CANONICAL_HOST])dnl
AC_REQUIRE([AC_CANONICAL_BUILD])dnl
ac_prog=ld
if test "$ac_cv_prog_gcc" = yes; then
  # Check if gcc -print-prog-name=ld gives a path.
  AC_MSG_CHECKING([for ld used by GCC])
  ac_prog=`($CC -print-prog-name=ld) 2>&5`
  case "$ac_prog" in
    # Accept absolute paths.
changequote(,)dnl
    [\\/]* | [A-Za-z]:[\\/]*)
      re_direlt='/[^/][^/]*/\.\./'
changequote([,])dnl
      # Canonicalize the path of ld
      ac_prog=`echo $ac_prog| sed 's%\\\\%/%g'`
      while echo $ac_prog | grep "$re_direlt" > /dev/null 2>&1; do
	ac_prog=`echo $ac_prog| sed "s%$re_direlt%/%"`
      done
      test -z "$LD" && LD="$ac_prog"
      ;;
  "")
    # If it fails, then pretend we aren't using GCC.
    ac_prog=ld
    ;;
  *)
    # If it is relative, then search for the first ld in PATH.
    with_gnu_ld=unknown
    ;;
  esac
elif test "$with_gnu_ld" = yes; then
  AC_MSG_CHECKING([for GNU ld])
else
  AC_MSG_CHECKING([for non-GNU ld])
fi
AC_CACHE_VAL(ac_cv_path_LD,
[if test -z "$LD"; then
  IFS="${IFS= 	}"; ac_save_ifs="$IFS"; IFS="${IFS}${PATH_SEPARATOR-:}"
  for ac_dir in $PATH; do
    test -z "$ac_dir" && ac_dir=.
    if test -f "$ac_dir/$ac_prog" || test -f "$ac_dir/$ac_prog$ac_exeext"; then
      ac_cv_path_LD="$ac_dir/$ac_prog"
      # Check to see if the program is GNU ld.  I'd rather use --version,
      # but apparently some GNU ld's only accept -v.
      # Break only if it was the GNU/non-GNU ld that we prefer.
      if "$ac_cv_path_LD" -v 2>&1 < /dev/null | egrep '(GNU|with BFD)' > /dev/null; then
	test "$with_gnu_ld" != no && break
      else
	test "$with_gnu_ld" != yes && break
      fi
    fi
  done
  IFS="$ac_save_ifs"
else
  ac_cv_path_LD="$LD" # Let the user override the test with a path.
fi])
LD="$ac_cv_path_LD"
if test -n "$LD"; then
  AC_MSG_RESULT($LD)
else
  AC_MSG_RESULT(no)
fi
test -z "$LD" && AC_MSG_ERROR([no acceptable ld found in \$PATH])
AC_PROG_LD_GNU
])

AC_DEFUN(AC_PROG_LD_GNU,
[AC_CACHE_CHECK([if the linker ($LD) is GNU ld], ac_cv_prog_gnu_ld,
[# I'd rather use --version here, but apparently some GNU ld's only accept -v.
if $LD -v 2>&1 </dev/null | egrep '(GNU|with BFD)' 1>&5; then
  ac_cv_prog_gnu_ld=yes
else
  ac_cv_prog_gnu_ld=no
fi])
])

# AC_PROG_NM - find the path to a BSD-compatible name lister
AC_DEFUN(AC_PROG_NM,
[AC_MSG_CHECKING([for BSD-compatible nm])
AC_CACHE_VAL(ac_cv_path_NM,
[if test -n "$NM"; then
  # Let the user override the test.
  ac_cv_path_NM="$NM"
else
  IFS="${IFS= 	}"; ac_save_ifs="$IFS"; IFS="${IFS}${PATH_SEPARATOR-:}"
  for ac_dir in $PATH /usr/ccs/bin /usr/ucb /bin; do
    test -z "$ac_dir" && ac_dir=.
    if test -f $ac_dir/nm || test -f $ac_dir/nm$ac_exeext ; then
      # Check to see if the nm accepts a BSD-compat flag.
      # Adding the `sed 1q' prevents false positives on HP-UX, which says:
      #   nm: unknown option "B" ignored
      if ($ac_dir/nm -B /dev/null 2>&1 | sed '1q'; exit 0) | egrep /dev/null >/dev/null; then
	ac_cv_path_NM="$ac_dir/nm -B"
	break
      elif ($ac_dir/nm -p /dev/null 2>&1 | sed '1q'; exit 0) | egrep /dev/null >/dev/null; then
	ac_cv_path_NM="$ac_dir/nm -p"
	break
      else
	ac_cv_path_NM=${ac_cv_path_NM="$ac_dir/nm"} # keep the first match, but
	continue # so that we can try to find one that supports BSD flags
      fi
    fi
  done
  IFS="$ac_save_ifs"
  test -z "$ac_cv_path_NM" && ac_cv_path_NM=nm
fi])
NM="$ac_cv_path_NM"
AC_MSG_RESULT([$NM])
])

# AC_CHECK_LIBM - check for math library
AC_DEFUN(AC_CHECK_LIBM,
[AC_REQUIRE([CL_CANONICAL_HOST])dnl
LIBM=
case "$lt_target" in
*-*-beos* | *-*-cygwin*)
  # These system don't have libm
  ;;
*-ncr-sysv4.3*)
  AC_CHECK_LIB(mw, _mwvalidcheckl, LIBM="-lmw")
  AC_CHECK_LIB(m, main, LIBM="$LIBM -lm")
  ;;
*)
  AC_CHECK_LIB(m, main, LIBM="-lm")
  ;;
esac
])

# AC_LIBLTDL_CONVENIENCE[(dir)] - sets LIBLTDL to the link flags for
# the libltdl convenience library and INCLTDL to the include flags for
# the libltdl header and adds --enable-ltdl-convenience to the
# configure arguments.  Note that LIBLTDL and INCLTDL are not
# AC_SUBSTed, nor is AC_CONFIG_SUBDIRS called.  If DIR is not
# provided, it is assumed to be `libltdl'.  LIBLTDL will be prefixed
# with '${top_builddir}/' and INCLTDL will be prefixed with
# '${top_srcdir}/' (note the single quotes!).  If your package is not
# flat and you're not using automake, define top_builddir and
# top_srcdir appropriately in the Makefiles.
AC_DEFUN(AC_LIBLTDL_CONVENIENCE, [AC_BEFORE([$0],[AC_LIBTOOL_SETUP])dnl
  case "$enable_ltdl_convenience" in
  no) AC_MSG_ERROR([this package needs a convenience libltdl]) ;;
  "") enable_ltdl_convenience=yes
      ac_configure_args="$ac_configure_args --enable-ltdl-convenience" ;;
  esac
  LIBLTDL='${top_builddir}/'ifelse($#,1,[$1],['libltdl'])/libltdlc.la
  INCLTDL='-I${top_srcdir}/'ifelse($#,1,[$1],['libltdl'])
])

# AC_LIBLTDL_INSTALLABLE[(dir)] - sets LIBLTDL to the link flags for
# the libltdl installable library and INCLTDL to the include flags for
# the libltdl header and adds --enable-ltdl-install to the configure
# arguments.  Note that LIBLTDL and INCLTDL are not AC_SUBSTed, nor is
# AC_CONFIG_SUBDIRS called.  If DIR is not provided and an installed
# libltdl is not found, it is assumed to be `libltdl'.  LIBLTDL will
# be prefixed with '${top_builddir}/' and INCLTDL will be prefixed
# with '${top_srcdir}/' (note the single quotes!).  If your package is
# not flat and you're not using automake, define top_builddir and
# top_srcdir appropriately in the Makefiles.
# In the future, this macro may have to be called after AC_PROG_LIBTOOL.
AC_DEFUN(AC_LIBLTDL_INSTALLABLE, [AC_BEFORE([$0],[AC_LIBTOOL_SETUP])dnl
  AC_CHECK_LIB(ltdl, main,
  [test x"$enable_ltdl_install" != xyes && enable_ltdl_install=no],
  [if test x"$enable_ltdl_install" = xno; then
     AC_MSG_WARN([libltdl not installed, but installation disabled])
   else
     enable_ltdl_install=yes
   fi
  ])
  if test x"$enable_ltdl_install" = x"yes"; then
    ac_configure_args="$ac_configure_args --enable-ltdl-install"
    LIBLTDL='${top_builddir}/'ifelse($#,1,[$1],['libltdl'])/libltdl.la
    INCLTDL='-I${top_srcdir}/'ifelse($#,1,[$1],['libltdl'])
  else
    ac_configure_args="$ac_configure_args --enable-ltdl-install=no"
    LIBLTDL="-lltdl"
    INCLTDL=
  fi
])

dnl old names
AC_DEFUN(AM_PROG_LIBTOOL, [indir([AC_PROG_LIBTOOL])])dnl
AC_DEFUN(AM_ENABLE_SHARED, [indir([AC_ENABLE_SHARED], $@)])dnl
AC_DEFUN(AM_ENABLE_STATIC, [indir([AC_ENABLE_STATIC], $@)])dnl
AC_DEFUN(AM_DISABLE_SHARED, [indir([AC_DISABLE_SHARED], $@)])dnl
AC_DEFUN(AM_DISABLE_STATIC, [indir([AC_DISABLE_STATIC], $@)])dnl
AC_DEFUN(AM_PROG_LD, [indir([AC_PROG_LD])])dnl
AC_DEFUN(AM_PROG_NM, [indir([AC_PROG_NM])])dnl

dnl This is just to silence aclocal about the macro not being used
ifelse([AC_DISABLE_FAST_INSTALL])dnl
# serial 8

# From Paul Eggert.

# BeOS 5 has <wchar.h> but does not define mbstate_t,
# so you can't declare an object of that type.
# Check for this incompatibility with Standard C.

# Include stdlib.h first, because otherwise this test would fail on Linux
# (at least glibc-2.1.3) because the "_XOPEN_SOURCE 500" definition elicits
# a syntax error in wchar.h due to the use of undefined __int32_t.

AC_DEFUN(AC_MBSTATE_T,
  [
   AC_CHECK_HEADERS(stdlib.h)

   AC_CACHE_CHECK([for mbstate_t], ac_cv_type_mbstate_t,
    [AC_TRY_COMPILE([
#if HAVE_STDLIB_H
# include <stdlib.h>
#endif
#include <wchar.h>],
      [mbstate_t x; return sizeof x;],
      ac_cv_type_mbstate_t=yes,
      ac_cv_type_mbstate_t=no)])
   if test $ac_cv_type_mbstate_t = no; then
     AC_DEFINE(mbstate_t, int,
	       [Define to a type if <wchar.h> does not define.])
   fi])

/*
 * Copyright (C) 1999-2003, 2008, 2022 Free Software Foundation, Inc.
 * This file is part of the cppp-reiconv library.
 *
 * The cppp-reiconv library is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * The cppp-reiconv library is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with the cppp-reiconv library; see the file COPYING.
 * If not, see <https://www.gnu.org/licenses/>.
 */

#ifdef USE_AIX
# if defined _AIX
#  include "aliases_aix_sysaix.h"
# else
#  include "aliases_aix.h"
# endif
#endif
#ifdef USE_OSF1
# if defined __osf__
#  include "aliases_osf1_sysosf1.h"
# else
#  include "aliases_osf1.h"
# endif
#endif
#ifdef USE_DOS
# include "aliases_dos.h"
#endif
#ifdef USE_ZOS
# include "aliases_zos.h"
#endif
#ifdef USE_EXTRA
# include "aliases_extra.h"
#endif

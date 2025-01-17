/**
 * @file locale_table.h
 * @brief A mapping from locale name to canonical encoding name.
 * @copyright Copyright (C) 2024 The C++ Plus Project.
 */
/*
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
 * License along with the cppp-reiconv library; see the file LICENSE.
 * If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef _LOCALE_TABLE_H_
#define _LOCALE_TABLE_H_

#include "lc_types.h"

#include <cppp/cppp-platform.h>

#define locale_table_defined 1

// Table of platform-dependent mappings, sorted in ascending order.
static const struct locale_table_entry locale_table[] = {
#if __has_freebsd__
    {"cs_CZ.ISO_8859-2", "ISO-8859-2"},
    {"da_DK.DIS_8859-15", "ISO-8859-15"},
    {"da_DK.ISO_8859-1", "ISO-8859-1"},
    {"de_AT.DIS_8859-15", "ISO-8859-15"},
    {"de_AT.ISO_8859-1", "ISO-8859-1"},
    {"de_CH.DIS_8859-15", "ISO-8859-15"},
    {"de_CH.ISO_8859-1", "ISO-8859-1"},
    {"de_DE.DIS_8859-15", "ISO-8859-15"},
    {"de_DE.ISO_8859-1", "ISO-8859-1"},
    {"en_AU.DIS_8859-15", "ISO-8859-15"},
    {"en_AU.ISO_8859-1", "ISO-8859-1"},
    {"en_CA.DIS_8859-15", "ISO-8859-15"},
    {"en_CA.ISO_8859-1", "ISO-8859-1"},
    {"en_GB.DIS_8859-15", "ISO-8859-15"},
    {"en_GB.ISO_8859-1", "ISO-8859-1"},
    {"en_US.DIS_8859-15", "ISO-8859-15"},
    {"en_US.ISO_8859-1", "ISO-8859-1"},
    {"es_ES.DIS_8859-15", "ISO-8859-15"},
    {"es_ES.ISO_8859-1", "ISO-8859-1"},
    {"fi_FI.DIS_8859-15", "ISO-8859-15"},
    {"fi_FI.ISO_8859-1", "ISO-8859-1"},
    {"fr_BE.DIS_8859-15", "ISO-8859-15"},
    {"fr_BE.ISO_8859-1", "ISO-8859-1"},
    {"fr_CA.DIS_8859-15", "ISO-8859-15"},
    {"fr_CA.ISO_8859-1", "ISO-8859-1"},
    {"fr_CH.DIS_8859-15", "ISO-8859-15"},
    {"fr_CH.ISO_8859-1", "ISO-8859-1"},
    {"fr_FR.DIS_8859-15", "ISO-8859-15"},
    {"fr_FR.ISO_8859-1", "ISO-8859-1"},
    {"hr_HR.ISO_8859-2", "ISO-8859-2"},
    {"hu_HU.ISO_8859-2", "ISO-8859-2"},
    {"is_IS.DIS_8859-15", "ISO-8859-15"},
    {"is_IS.ISO_8859-1", "ISO-8859-1"},
    {"it_CH.DIS_8859-15", "ISO-8859-15"},
    {"it_CH.ISO_8859-1", "ISO-8859-1"},
    {"it_IT.DIS_8859-15", "ISO-8859-15"},
    {"it_IT.ISO_8859-1", "ISO-8859-1"},
    {"ja_JP.EUC", "EUC-JP"},
    {"ja_JP.SJIS", "SHIFT_JIS"},
    {"ja_JP.Shift_JIS", "SHIFT_JIS"},
    {"ko_KR.EUC", "EUC-KR"},
    {"la_LN.ASCII", "ASCII"},
    {"la_LN.DIS_8859-15", "ISO-8859-15"},
    {"la_LN.ISO_8859-1", "ISO-8859-1"},
    {"la_LN.ISO_8859-2", "ISO-8859-2"},
    {"la_LN.ISO_8859-4", "ISO-8859-4"},
    {"lt_LN.ASCII", "ASCII"},
    {"lt_LN.DIS_8859-15", "ISO-8859-15"},
    {"lt_LN.ISO_8859-1", "ISO-8859-1"},
    {"lt_LN.ISO_8859-2", "ISO-8859-2"},
    {"lt_LT.ISO_8859-4", "ISO-8859-4"},
    {"nl_BE.DIS_8859-15", "ISO-8859-15"},
    {"nl_BE.ISO_8859-1", "ISO-8859-1"},
    {"nl_NL.DIS_8859-15", "ISO-8859-15"},
    {"nl_NL.ISO_8859-1", "ISO-8859-1"},
    {"no_NO.DIS_8859-15", "ISO-8859-15"},
    {"no_NO.ISO_8859-1", "ISO-8859-1"},
    {"pl_PL.ISO_8859-2", "ISO-8859-2"},
    {"pt_PT.DIS_8859-15", "ISO-8859-15"},
    {"pt_PT.ISO_8859-1", "ISO-8859-1"},
    {"ru_RU.CP866", "CP866"},
    {"ru_RU.ISO_8859-5", "ISO-8859-5"},
    {"ru_RU.KOI8-R", "KOI8-R"},
    {"ru_SU.CP866", "CP866"},
    {"ru_SU.ISO_8859-5", "ISO-8859-5"},
    {"ru_SU.KOI8-R", "KOI8-R"},
    {"sl_SI.ISO_8859-2", "ISO-8859-2"},
    {"sv_SE.DIS_8859-15", "ISO-8859-15"},
    {"sv_SE.ISO_8859-1", "ISO-8859-1"},
    {"uk_UA.KOI8-U", "KOI8-U"},
    {"zh_CN.EUC", "GB2312"},
    {"zh_TW.BIG5", "BIG5"},
    {"zh_TW.Big5", "BIG5"}
#else
#undef locale_table_defined
#define locale_table_defined 0
    {"", ""}
#endif // __has_freebsd__
};

#define LOCALE_TABLE_SIZE (sizeof(locale_table) / sizeof(struct locale_table_entry))

#endif // _LOCALE_TABLE_H_

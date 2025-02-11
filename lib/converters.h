/**
 * @file converters.h
 * @brief Include all the converters.
 * @copyright Copyright (C) 1999-2002, 2004-2011, 2016, 2022-2023 Free Software Foundation, Inc.
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

#ifndef _CONVERTERS_H_
#define _CONVERTERS_H_

#include "reiconv_defines.h" // IWYU pragma: keep

#pragma region ASCII
#include "converters/ascii.h" // IWYU pragma: keep
#pragma endregion

#pragma region General multi-byte encodings
#include "converters/c99.h" // IWYU pragma: keep
#include "converters/java.h" // IWYU pragma: keep
#include "converters/ucs2.h" // IWYU pragma: keep
#include "converters/ucs2be.h" // IWYU pragma: keep
#include "converters/ucs2internal.h" // IWYU pragma: keep
#include "converters/ucs2le.h" // IWYU pragma: keep
#include "converters/ucs2swapped.h" // IWYU pragma: keep
#include "converters/ucs4.h" // IWYU pragma: keep
#include "converters/ucs4be.h" // IWYU pragma: keep
#include "converters/ucs4internal.h" // IWYU pragma: keep
#include "converters/ucs4le.h" // IWYU pragma: keep
#include "converters/ucs4swapped.h" // IWYU pragma: keep
#include "converters/utf16.h" // IWYU pragma: keep
#include "converters/utf16be.h" // IWYU pragma: keep
#include "converters/utf16le.h" // IWYU pragma: keep
#include "converters/utf32.h" // IWYU pragma: keep
#include "converters/utf32be.h" // IWYU pragma: keep
#include "converters/utf32le.h" // IWYU pragma: keep
#include "converters/utf7.h" // IWYU pragma: keep
#include "converters/utf8.h" // IWYU pragma: keep
#pragma endregion

#pragma region 8-bit encodings
#include "converters/armscii_8.h" // IWYU pragma: keep
#include "converters/cp1131.h" // IWYU pragma: keep
#include "converters/cp1133.h" // IWYU pragma: keep
#include "converters/cp1250.h" // IWYU pragma: keep
#include "converters/cp1251.h" // IWYU pragma: keep
#include "converters/cp1252.h" // IWYU pragma: keep
#include "converters/cp1253.h" // IWYU pragma: keep
#include "converters/cp1254.h" // IWYU pragma: keep
#include "converters/cp1255.h" // IWYU pragma: keep
#include "converters/cp1256.h" // IWYU pragma: keep
#include "converters/cp1257.h" // IWYU pragma: keep
#include "converters/cp1258.h" // IWYU pragma: keep
#include "converters/cp850.h" // IWYU pragma: keep
#include "converters/cp862.h" // IWYU pragma: keep
#include "converters/cp866.h" // IWYU pragma: keep
#include "converters/cp874.h" // IWYU pragma: keep
#include "converters/georgian_academy.h" // IWYU pragma: keep
#include "converters/georgian_ps.h" // IWYU pragma: keep
#include "converters/hp_roman8.h" // IWYU pragma: keep
#include "converters/iso8859_1.h" // IWYU pragma: keep
#include "converters/iso8859_10.h" // IWYU pragma: keep
#include "converters/iso8859_11.h" // IWYU pragma: keep
#include "converters/iso8859_13.h" // IWYU pragma: keep
#include "converters/iso8859_14.h" // IWYU pragma: keep
#include "converters/iso8859_15.h" // IWYU pragma: keep
#include "converters/iso8859_16.h" // IWYU pragma: keep
#include "converters/iso8859_2.h" // IWYU pragma: keep
#include "converters/iso8859_3.h" // IWYU pragma: keep
#include "converters/iso8859_4.h" // IWYU pragma: keep
#include "converters/iso8859_5.h" // IWYU pragma: keep
#include "converters/iso8859_6.h" // IWYU pragma: keep
#include "converters/iso8859_7.h" // IWYU pragma: keep
#include "converters/iso8859_8.h" // IWYU pragma: keep
#include "converters/iso8859_9.h" // IWYU pragma: keep
#include "converters/koi8_r.h" // IWYU pragma: keep
#include "converters/koi8_ru.h" // IWYU pragma: keep
#include "converters/koi8_t.h" // IWYU pragma: keep
#include "converters/koi8_u.h" // IWYU pragma: keep
#include "converters/mac_arabic.h" // IWYU pragma: keep
#include "converters/mac_centraleurope.h" // IWYU pragma: keep
#include "converters/mac_croatian.h" // IWYU pragma: keep
#include "converters/mac_cyrillic.h" // IWYU pragma: keep
#include "converters/mac_greek.h" // IWYU pragma: keep
#include "converters/mac_hebrew.h" // IWYU pragma: keep
#include "converters/mac_iceland.h" // IWYU pragma: keep
#include "converters/mac_roman.h" // IWYU pragma: keep
#include "converters/mac_romania.h" // IWYU pragma: keep
#include "converters/mac_thai.h" // IWYU pragma: keep
#include "converters/mac_turkish.h" // IWYU pragma: keep
#include "converters/mac_ukraine.h" // IWYU pragma: keep
#include "converters/mulelao.h" // IWYU pragma: keep
#include "converters/nextstep.h" // IWYU pragma: keep
#include "converters/pt154.h" // IWYU pragma: keep
#include "converters/rk1048.h" // IWYU pragma: keep
#include "converters/tcvn.h" // IWYU pragma: keep
#include "converters/tis620.h" // IWYU pragma: keep
#include "converters/viscii.h" // IWYU pragma: keep
#pragma endregion

#pragma region CJK character sets
#include "converters/iso646_jp.h" // IWYU pragma: keep
#include "converters/jisx0201.h" // IWYU pragma: keep
#include "converters/jisx0208.h" // IWYU pragma: keep
#include "converters/jisx0212.h" // IWYU pragma: keep

#include "converters/gb2312.h" // IWYU pragma: keep
#include "converters/iso646_cn.h" // IWYU pragma: keep
#include "converters/isoir165.h" // IWYU pragma: keep
/* #include "converters/gb12345.h" // IWYU pragma: keep */
#include "converters/big5.h" // IWYU pragma: keep
#include "converters/cns11643.h" // IWYU pragma: keep
#include "converters/gbk.h" // IWYU pragma: keep

#include "converters/johab_hangul.h" // IWYU pragma: keep
#include "converters/ksc5601.h" // IWYU pragma: keep
#pragma endregion

/* [CES = character encoding scheme] [CJKV.INF chapter 4] */
#pragma region CJK encodings
#include "converters/cp932.h" // IWYU pragma: keep
#include "converters/euc_jp.h" // IWYU pragma: keep
#include "converters/iso2022_jp.h" // IWYU pragma: keep
#include "converters/iso2022_jp1.h" // IWYU pragma: keep
#include "converters/iso2022_jp2.h" // IWYU pragma: keep
#include "converters/iso2022_jpms.h" // IWYU pragma: keep
#include "converters/sjis.h" // IWYU pragma: keep

#include "converters/big5hkscs1999.h" // IWYU pragma: keep
#include "converters/big5hkscs2001.h" // IWYU pragma: keep
#include "converters/big5hkscs2004.h" // IWYU pragma: keep
#include "converters/big5hkscs2008.h" // IWYU pragma: keep
#include "converters/ces_big5.h" // IWYU pragma: keep
#include "converters/ces_gbk.h" // IWYU pragma: keep
#include "converters/cp936.h" // IWYU pragma: keep
#include "converters/cp950.h" // IWYU pragma: keep
#include "converters/euc_cn.h" // IWYU pragma: keep
#include "converters/euc_tw.h" // IWYU pragma: keep
#include "converters/gb18030_2005.h" // IWYU pragma: keep
#include "converters/gb18030_2022.h" // IWYU pragma: keep
#include "converters/hz.h" // IWYU pragma: keep
#include "converters/iso2022_cn.h" // IWYU pragma: keep
#include "converters/iso2022_cnext.h" // IWYU pragma: keep

#include "converters/cp949.h" // IWYU pragma: keep
#include "converters/euc_kr.h" // IWYU pragma: keep
#include "converters/iso2022_kr.h" // IWYU pragma: keep
#include "converters/johab.h" // IWYU pragma: keep

#include "converters/dec_hanyu.h" // IWYU pragma: keep
#include "converters/dec_kanji.h" // IWYU pragma: keep
#pragma endregion

#pragma region Encodings used by system dependent locales
#include "converters/cp1046.h" // IWYU pragma: keep
#include "converters/cp1124.h" // IWYU pragma: keep
#include "converters/cp1129.h" // IWYU pragma: keep
#include "converters/cp1161.h" // IWYU pragma: keep
#include "converters/cp1162.h" // IWYU pragma: keep
#include "converters/cp1163.h" // IWYU pragma: keep
#include "converters/cp856.h" // IWYU pragma: keep
#include "converters/cp922.h" // IWYU pragma: keep
#include "converters/cp943.h" // IWYU pragma: keep

#include "converters/cp1125.h" // IWYU pragma: keep
#include "converters/cp437.h" // IWYU pragma: keep
#include "converters/cp737.h" // IWYU pragma: keep
#include "converters/cp775.h" // IWYU pragma: keep
#include "converters/cp852.h" // IWYU pragma: keep
#include "converters/cp853.h" // IWYU pragma: keep
#include "converters/cp855.h" // IWYU pragma: keep
#include "converters/cp857.h" // IWYU pragma: keep
#include "converters/cp858.h" // IWYU pragma: keep
#include "converters/cp860.h" // IWYU pragma: keep
#include "converters/cp861.h" // IWYU pragma: keep
#include "converters/cp863.h" // IWYU pragma: keep
#include "converters/cp864.h" // IWYU pragma: keep
#include "converters/cp865.h" // IWYU pragma: keep
#include "converters/cp869.h" // IWYU pragma: keep
#pragma endregion

#define DEDUPLICATE_TABLES 1

#pragma region AIX locales
#include "converters/ebcdic037.h" // IWYU pragma: keep
#include "converters/ebcdic273.h" // IWYU pragma: keep
#include "converters/ebcdic277.h" // IWYU pragma: keep
#include "converters/ebcdic278.h" // IWYU pragma: keep
#include "converters/ebcdic280.h" // IWYU pragma: keep
#include "converters/ebcdic282.h" // IWYU pragma: keep
#include "converters/ebcdic284.h" // IWYU pragma: keep
#include "converters/ebcdic285.h" // IWYU pragma: keep
#include "converters/ebcdic297.h" // IWYU pragma: keep
#include "converters/ebcdic423.h" // IWYU pragma: keep
#include "converters/ebcdic424.h" // IWYU pragma: keep
#include "converters/ebcdic425.h" // IWYU pragma: keep
#include "converters/ebcdic500.h" // IWYU pragma: keep
#include "converters/ebcdic838.h" // IWYU pragma: keep
#include "converters/ebcdic870.h" // IWYU pragma: keep
#include "converters/ebcdic871.h" // IWYU pragma: keep
#include "converters/ebcdic875.h" // IWYU pragma: keep
#include "converters/ebcdic880.h" // IWYU pragma: keep
#include "converters/ebcdic905.h" // IWYU pragma: keep
#include "converters/ebcdic924.h" // IWYU pragma: keep
#include "converters/ebcdic1025.h" // IWYU pragma: keep
#include "converters/ebcdic1026.h" // IWYU pragma: keep
#include "converters/ebcdic1047.h" // IWYU pragma: keep
#include "converters/ebcdic1097.h" // IWYU pragma: keep
#include "converters/ebcdic1112.h" // IWYU pragma: keep
#include "converters/ebcdic1122.h" // IWYU pragma: keep
#include "converters/ebcdic1123.h" // IWYU pragma: keep
#include "converters/ebcdic1130.h" // IWYU pragma: keep
#include "converters/ebcdic1132.h" // IWYU pragma: keep
#include "converters/ebcdic1137.h" // IWYU pragma: keep
#include "converters/ebcdic1140.h" // IWYU pragma: keep
#include "converters/ebcdic1141.h" // IWYU pragma: keep
#include "converters/ebcdic1142.h" // IWYU pragma: keep
#include "converters/ebcdic1143.h" // IWYU pragma: keep
#include "converters/ebcdic1144.h" // IWYU pragma: keep
#include "converters/ebcdic1145.h" // IWYU pragma: keep
#include "converters/ebcdic1146.h" // IWYU pragma: keep
#include "converters/ebcdic1147.h" // IWYU pragma: keep
#include "converters/ebcdic1148.h" // IWYU pragma: keep
#include "converters/ebcdic1149.h" // IWYU pragma: keep
#include "converters/ebcdic1153.h" // IWYU pragma: keep
#include "converters/ebcdic1154.h" // IWYU pragma: keep
#include "converters/ebcdic1155.h" // IWYU pragma: keep
#include "converters/ebcdic1156.h" // IWYU pragma: keep
#include "converters/ebcdic1157.h" // IWYU pragma: keep
#include "converters/ebcdic1158.h" // IWYU pragma: keep
#include "converters/ebcdic1160.h" // IWYU pragma: keep
#include "converters/ebcdic1164.h" // IWYU pragma: keep
#include "converters/ebcdic1165.h" // IWYU pragma: keep
#include "converters/ebcdic1166.h" // IWYU pragma: keep
#include "converters/ebcdic4971.h" // IWYU pragma: keep
#include "converters/ebcdic12712.h" // IWYU pragma: keep
#include "converters/ebcdic16804.h" // IWYU pragma: keep
#pragma endregion

#pragma region Extra encodings
#include "converters/atarist.h" // IWYU pragma: keep
#include "converters/big5_2003.h" // IWYU pragma: keep
#include "converters/euc_jisx0213.h" // IWYU pragma: keep
#include "converters/iso2022_jp3.h" // IWYU pragma: keep
#include "converters/riscos1.h" // IWYU pragma: keep
#include "converters/shift_jisx0213.h" // IWYU pragma: keep
#include "converters/tds565.h" // IWYU pragma: keep
#pragma endregion

#endif /* _CONVERTERS_H_ */

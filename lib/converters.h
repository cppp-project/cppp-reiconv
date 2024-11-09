/*
 * Copyright (C) 1999-2002, 2004-2011, 2016, 2022-2023 Free Software Foundation, Inc.
 * Copyright (C) 2024 The C++ Project.
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

#include "reiconv_defines.h"

// Include all the converters.

#pragma region ASCII
#include "converters/ascii.h"
#pragma endregion

#pragma region General multi-byte encodings
#include "converters/c99.h"
#include "converters/java.h"
#include "converters/ucs2.h"
#include "converters/ucs2be.h"
#include "converters/ucs2internal.h"
#include "converters/ucs2le.h"
#include "converters/ucs2swapped.h"
#include "converters/ucs4.h"
#include "converters/ucs4be.h"
#include "converters/ucs4internal.h"
#include "converters/ucs4le.h"
#include "converters/ucs4swapped.h"
#include "converters/utf16.h"
#include "converters/utf16be.h"
#include "converters/utf16le.h"
#include "converters/utf32.h"
#include "converters/utf32be.h"
#include "converters/utf32le.h"
#include "converters/utf7.h"
#include "converters/utf8.h"
#pragma endregion

#pragma region 8-bit encodings
#include "converters/armscii_8.h"
#include "converters/cp1131.h"
#include "converters/cp1133.h"
#include "converters/cp1250.h"
#include "converters/cp1251.h"
#include "converters/cp1252.h"
#include "converters/cp1253.h"
#include "converters/cp1254.h"
#include "converters/cp1255.h"
#include "converters/cp1256.h"
#include "converters/cp1257.h"
#include "converters/cp1258.h"
#include "converters/cp850.h"
#include "converters/cp862.h"
#include "converters/cp866.h"
#include "converters/cp874.h"
#include "converters/georgian_academy.h"
#include "converters/georgian_ps.h"
#include "converters/hp_roman8.h"
#include "converters/iso8859_1.h"
#include "converters/iso8859_10.h"
#include "converters/iso8859_11.h"
#include "converters/iso8859_13.h"
#include "converters/iso8859_14.h"
#include "converters/iso8859_15.h"
#include "converters/iso8859_16.h"
#include "converters/iso8859_2.h"
#include "converters/iso8859_3.h"
#include "converters/iso8859_4.h"
#include "converters/iso8859_5.h"
#include "converters/iso8859_6.h"
#include "converters/iso8859_7.h"
#include "converters/iso8859_8.h"
#include "converters/iso8859_9.h"
#include "converters/koi8_r.h"
#include "converters/koi8_ru.h"
#include "converters/koi8_t.h"
#include "converters/koi8_u.h"
#include "converters/mac_arabic.h"
#include "converters/mac_centraleurope.h"
#include "converters/mac_croatian.h"
#include "converters/mac_cyrillic.h"
#include "converters/mac_greek.h"
#include "converters/mac_hebrew.h"
#include "converters/mac_iceland.h"
#include "converters/mac_roman.h"
#include "converters/mac_romania.h"
#include "converters/mac_thai.h"
#include "converters/mac_turkish.h"
#include "converters/mac_ukraine.h"
#include "converters/mulelao.h"
#include "converters/nextstep.h"
#include "converters/pt154.h"
#include "converters/rk1048.h"
#include "converters/tcvn.h"
#include "converters/tis620.h"
#include "converters/viscii.h"
#pragma endregion

#pragma region CJK character sets
#include "converters/iso646_jp.h"
#include "converters/jisx0201.h"
#include "converters/jisx0208.h"
#include "converters/jisx0212.h"

#include "converters/gb2312.h"
#include "converters/iso646_cn.h"
#include "converters/isoir165.h"
/* #include "converters/gb12345.h" */
#include "converters/big5.h"
#include "converters/cns11643.h"
#include "converters/gbk.h"

#include "converters/johab_hangul.h"
#include "converters/ksc5601.h"
#pragma endregion

/* [CES = character encoding scheme] [CJKV.INF chapter 4] */
#pragma region CJK encodings
#include "converters/cp932.h"
#include "converters/euc_jp.h"
#include "converters/iso2022_jp.h"
#include "converters/iso2022_jp1.h"
#include "converters/iso2022_jp2.h"
#include "converters/iso2022_jpms.h"
#include "converters/sjis.h"

#include "converters/big5hkscs1999.h"
#include "converters/big5hkscs2001.h"
#include "converters/big5hkscs2004.h"
#include "converters/big5hkscs2008.h"
#include "converters/ces_big5.h"
#include "converters/ces_gbk.h"
#include "converters/cp936.h"
#include "converters/cp950.h"
#include "converters/euc_cn.h"
#include "converters/euc_tw.h"
#include "converters/gb18030_2005.h"
#include "converters/gb18030_2022.h"
#include "converters/hz.h"
#include "converters/iso2022_cn.h"
#include "converters/iso2022_cnext.h"

#include "converters/cp949.h"
#include "converters/euc_kr.h"
#include "converters/iso2022_kr.h"
#include "converters/johab.h"

#include "converters/dec_hanyu.h"
#include "converters/dec_kanji.h"
#pragma endregion

#pragma region Encodings used by system dependent locales
#include "converters/cp1046.h"
#include "converters/cp1124.h"
#include "converters/cp1129.h"
#include "converters/cp1161.h"
#include "converters/cp1162.h"
#include "converters/cp1163.h"
#include "converters/cp856.h"
#include "converters/cp922.h"
#include "converters/cp943.h"

#include "converters/cp1125.h"
#include "converters/cp437.h"
#include "converters/cp737.h"
#include "converters/cp775.h"
#include "converters/cp852.h"
#include "converters/cp853.h"
#include "converters/cp855.h"
#include "converters/cp857.h"
#include "converters/cp858.h"
#include "converters/cp860.h"
#include "converters/cp861.h"
#include "converters/cp863.h"
#include "converters/cp864.h"
#include "converters/cp865.h"
#include "converters/cp869.h"
#pragma endregion

#define DEDUPLICATE_TABLES 1

#pragma region AIX locales
#include "converters/ebcdic037.h"
#include "converters/ebcdic273.h"
#include "converters/ebcdic277.h"
#include "converters/ebcdic278.h"
#include "converters/ebcdic280.h"
#include "converters/ebcdic282.h"
#include "converters/ebcdic284.h"
#include "converters/ebcdic285.h"
#include "converters/ebcdic297.h"
#include "converters/ebcdic423.h"
#include "converters/ebcdic424.h"
#include "converters/ebcdic425.h"
#include "converters/ebcdic500.h"
#include "converters/ebcdic838.h"
#include "converters/ebcdic870.h"
#include "converters/ebcdic871.h"
#include "converters/ebcdic875.h"
#include "converters/ebcdic880.h"
#include "converters/ebcdic905.h"
#include "converters/ebcdic924.h"
#include "converters/ebcdic1025.h"
#include "converters/ebcdic1026.h"
#include "converters/ebcdic1047.h"
#include "converters/ebcdic1097.h"
#include "converters/ebcdic1112.h"
#include "converters/ebcdic1122.h"
#include "converters/ebcdic1123.h"
#include "converters/ebcdic1130.h"
#include "converters/ebcdic1132.h"
#include "converters/ebcdic1137.h"
#include "converters/ebcdic1140.h"
#include "converters/ebcdic1141.h"
#include "converters/ebcdic1142.h"
#include "converters/ebcdic1143.h"
#include "converters/ebcdic1144.h"
#include "converters/ebcdic1145.h"
#include "converters/ebcdic1146.h"
#include "converters/ebcdic1147.h"
#include "converters/ebcdic1148.h"
#include "converters/ebcdic1149.h"
#include "converters/ebcdic1153.h"
#include "converters/ebcdic1154.h"
#include "converters/ebcdic1155.h"
#include "converters/ebcdic1156.h"
#include "converters/ebcdic1157.h"
#include "converters/ebcdic1158.h"
#include "converters/ebcdic1160.h"
#include "converters/ebcdic1164.h"
#include "converters/ebcdic1165.h"
#include "converters/ebcdic1166.h"
#include "converters/ebcdic4971.h"
#include "converters/ebcdic12712.h"
#include "converters/ebcdic16804.h"
#pragma endregion

#pragma region Extra encodings
#include "converters/atarist.h"
#include "converters/big5_2003.h"
#include "converters/euc_jisx0213.h"
#include "converters/iso2022_jp3.h"
#include "converters/riscos1.h"
#include "converters/shift_jisx0213.h"
#include "converters/tds565.h"
#pragma endregion

#endif /* _CONVERTERS_H_ */

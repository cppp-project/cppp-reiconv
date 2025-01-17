/**
 * @file windows_getcp.h
 * @brief Get the current code page for Windows.
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

#ifndef _WINDOWS_GETCP_H_
#define _WINDOWS_GETCP_H_

#include <cppp/cppp-platform.h>

#if !__has_windows__
#error This file is only for Windows.
#endif

#include <Windows.h>

static const char *windows_getcp(char *resultbuf)
{
#ifdef _CONSOLE
    UINT cp = GetConsoleOutputCP();
#else
    UINT cp = GetACP();
#endif
    switch (cp)
    {
    // Unicode
    case 65001:
        return "UTF-8";
    case 1200:
        return "UCS2-LE";
    case 1201:
        // On .NET, it's unicodeFFFE. But IANA says it's UNICODE11.
        return "UNICODE11";
    case 12000:
        return "UCS4-LE";
    case 12001:
        return "UCS4-BE";
    case 65000:
        return "UTF-7";

    // CJK
    case 936:
        // cppp-reiconv's GB2312, GBK, CP936 is different.
        return "CP936";
    case 950:
        return "BIG5";
    case 10002: // We don't support it yet.
        return "X-MAC-CHINESETRAD";
    case 10008: // We don't support it yet.
        return "X-MAC-CHINESESIMP";
    case 20000: // We don't support it yet.
        return "X-CHINESE_CNS";
    case 20002: // We don't support it yet.
        return "X_CHINESE-ETEN";
    case 20936: // We don't support it yet.
        return "X-CP20936";
    case 50227:
        return "ISO-2022-CN";
    // case 50229: abort();
    // case 50935: abort();
    // case 50936: abort();
    // case 50937: abort();
    case 51936:
        return "EUC-CN";
    // case 51950: abort();
    case 52936:
        return "HZ-GB-2312";
    case 54936:
        return "GB18030";
    case 932:
        return "SHIFT_JIS";
    case 10001: // We don't support it yet.
        return "X-MAC-JAPANESE";
    case 20290: // We don't support it yet.
        return "IBM290";
    case 20932:
        // .NET says it's EUC-JP. But EUC-JP is CP51932.
        return "EUC-JP";
    case 50220:
        return "ISO-2022-JP";
    case 50221:
        return "ISO-2022-JP-MS";
    case 50222:
        return "ISO-2022-JP";
    // case 50930: abort();
    // case 50931: abort();
    // case 50939: abort();
    case 51932:
        return "EUC-JP";
    case 949:
        return "KS_C_5601-1987";
    case 1361:
        return "JOHAB";
    case 10003: // We don't support it yet.
        return "X-MAC-KOREAN";
    case 20833: // We don't support it yet.
        return "X-EBCDIC-KOREANEXTENDED";
    case 20949:
        return "X-CP20949";
    case 50225:
        return "ISO-2022-KR";
    // case 50933: abort();
    case 51949:
        return "EUC-KR";

    // Others
    case 37:
        return "IBM037";
    case 437:
        return "IBM437";
    case 500:
        return "IBM500";
    case 708:
        // ASMO-708 alias to CP28596, but .NET uses it for CP708.
        return "ASMO-708";
    // case 709: abort();
    // case 710: abort();
    case 720: // We don't support it yet.
        return "DOS-720";
    case 737:
        return "IBM737";
    case 775:
        return "IBM775";
    case 850:
        return "IBM850";
    case 852:
        return "IBM852";
    case 855:
        return "IBM855";
    case 857:
        return "IBM857";
    case 858:
        return "IBM00858";
    case 860:
        return "IBM860";
    case 861:
        return "IBM861";
    case 862:
        return "DOS-862";
    case 863:
        return "IBM863";
    case 864:
        return "IBM864";
    case 865:
        return "IBM865";
    case 866:
        return "CP866";
    case 869:
        return "IBM869";
    case 870:
        return "IBM870";
    case 874:
        return "WINDOWS-874";
    case 875:
        return "CP875";
    case 1026:
        return "IBM1026";
    case 1140:
        return "IBM1140";
    case 1141:
        return "IBM01141";
    case 1142:
        return "IBM01142";
    case 1143:
        return "IBM01143";
    case 1144:
        return "IBM01144";
    case 1145:
        return "IBM01145";
    case 1146:
        return "IBM01146";
    case 1147:
        return "IBM01147";
    case 1148:
        return "IBM01148";
    case 1149:
        return "IBM01149";
    case 1250:
        return "WINDOWS-1250";
    case 1251:
        return "WINDOWS-1251";
    case 1252:
        return "WINDOWS-1252";
    case 1253:
        return "WINDOWS-1253";
    case 1254:
        return "WINDOWS-1254";
    case 1255:
        return "WINDOWS-1255";
    case 1256:
        return "WINDOWS-1256";
    case 1257:
        return "WINDOWS-1257";
    case 1258:
        return "VISCII";
    case 10000:
        return "MACINTOSH";
    case 10004:
        return "X-MAC-ARABIC";
    case 10005:
        return "X-MAC-HEBREW";
    case 10006:
        return "X-MAC-GREEK";
    case 10007:
        return "X-MAC-CYRILLIC";
    case 10010:
        return "X-MAC-ROMANIAN";
    case 10017:
        return "X-MAC-UKRAINIAN";
    case 10021:
        return "X-MAC-THAI";
    case 10029:
        return "X-MAC-CE";
    case 10079:
        return "X-MAC-ICELANDIC";
    case 10081:
        return "X-MAC-TURKISH";
    case 10082:
        return "X-MAC-CROATIAN";
    case 20001: // We don't support it yet.
        return "X-CP20001";
    case 20003: // We don't support it yet.
        return "X-CP20003";
    case 20004: // We don't support it yet.
        return "X-CP20004";
    case 20005: // We don't support it yet.
        return "X-CP20005";
    case 20105: // We don't support it yet.
        return "X-IA5";
    case 20106: // We don't support it yet.
        return "X-IA5-GERMAN";
    case 20107: // We don't support it yet.
        return "X-IA5-SWEDISH";
    case 20108: // We don't support it yet.
        return "X-IA5-NORWEGIAN";
    case 20127: // We don't support it yet.
        // .NET says it's US-ASCII. But US-ASCII is CP367 in IANA.
        return "CP20127";
    case 20261: // We don't support it yet.
        return "X-CP20261";
    case 20269: // We don't support it yet.
        return "X-CP20269";
    case 20273:
        return "IBM273";
    case 20277:
        return "IBM277";
    case 20278:
        return "IBM278";
    case 20280:
        return "IBM280";
    case 20284:
        return "IBM284";
    case 20285:
        return "IBM285";
    case 20297:
        return "IBM297";
    case 20420: // We don't support it yet.
        return "IBM420";
    case 20423:
        return "IBM423";
    case 20424:
        return "IBM424";
    case 20866:
        return "KOI8-R";
    case 20871:
        return "IBM871";
    case 20880:
        return "IBM880";
    case 20905:
        return "IBM905";
    case 20924:
        return "IBM00924";
    case 21025:
        return "CP1025";
    // case 21027: abort(); // CP21027 is deprecated.
    case 21866:
        return "KOI8-RU";
    case 28591:
        return "ISO-8859-1";
    case 28592:
        return "ISO-8859-2";
    case 28593:
        return "ISO-8859-3";
    case 28594:
        return "ISO-8859-4";
    case 28595:
        return "ISO-8859-5";
    case 28596:
        return "ISO-8859-6";
    case 28597:
        return "ISO-8859-7";
    case 28598:
        return "ISO-8859-8";
    case 28599:
        return "ISO-8859-9";
    case 28603:
        return "ISO-8859-13";
    case 28605:
        return "ISO-8859-15";
    case 29001: // We don't support it yet.
        return "X-EUROPA";
    case 38598:
        return "ISO-8859-8-I";
    case 57002: // We don't support it yet.
        return "X-ISCII-DE";
    case 57003: // We don't support it yet.
        return "X-ISCII-BE";
    case 57004: // We don't support it yet.
        return "X-ISCII-TA";
    case 57005: // We don't support it yet.
        return "X-ISCII-TE";
    case 57006: // We don't support it yet.
        return "X-ISCII-AS";
    case 57007: // We don't support it yet.
        return "X-ISCII-OR";
    case 57008: // We don't support it yet.
        return "X-ISCII-KA";
    case 57009: // We don't support it yet.
        return "X-ISCII-MA";
    case 57010: // We don't support it yet.
        return "X-ISCII-GU";
    case 57011: // We don't support it yet.
        return "X-ISCII-PA";
    default:
        return "ASCII";
    }
}

#endif // _WINDOWS_GETCP_H_

/* ANSI-C code produced by gperf version 3.0.1 */
/* Command-line: gperf -m 10 lib/aliases.gperf  */
/* Computed positions: -k'1,3-11,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "lib/aliases.gperf"
struct alias { int name; unsigned int encoding_index; };

#define TOTAL_KEYWORDS 333
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 45
#define MIN_HASH_VALUE 7
#define MAX_HASH_VALUE 948
/* maximum key range = 942, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
aliases_hash (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      949, 949, 949, 949, 949, 949, 949, 949, 949, 949,
      949, 949, 949, 949, 949, 949, 949, 949, 949, 949,
      949, 949, 949, 949, 949, 949, 949, 949, 949, 949,
      949, 949, 949, 949, 949, 949, 949, 949, 949, 949,
      949, 949, 949, 949, 949,  14,  32, 949,  40,   0,
        4,  20,  49,   2,   1,  67,   7,   3, 307, 949,
      949, 949, 949, 949, 949,  23, 197,   1,  27,  84,
       10,  54,   5,   0, 249, 111, 115, 188,  20,   0,
       14, 949,  61,  62,  32, 137, 271, 114, 198,   1,
        0, 949, 949, 949, 949,  29, 949, 949, 949, 949,
      949, 949, 949, 949, 949, 949, 949, 949, 949, 949,
      949, 949, 949, 949, 949, 949, 949, 949, 949, 949,
      949, 949, 949, 949, 949, 949, 949, 949
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[10]];
      /*FALLTHROUGH*/
      case 10:
        hval += asso_values[(unsigned char)str[9]];
      /*FALLTHROUGH*/
      case 9:
        hval += asso_values[(unsigned char)str[8]];
      /*FALLTHROUGH*/
      case 8:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
        hval += asso_values[(unsigned char)str[6]];
      /*FALLTHROUGH*/
      case 6:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

struct stringpool_t
  {
    char stringpool_str7[sizeof("HZ")];
    char stringpool_str10[sizeof("C99")];
    char stringpool_str12[sizeof("866")];
    char stringpool_str13[sizeof("CP1251")];
    char stringpool_str15[sizeof("CP1256")];
    char stringpool_str16[sizeof("CP866")];
    char stringpool_str17[sizeof("CP1255")];
    char stringpool_str18[sizeof("862")];
    char stringpool_str19[sizeof("CP819")];
    char stringpool_str21[sizeof("CP1252")];
    char stringpool_str22[sizeof("CP862")];
    char stringpool_str23[sizeof("CN")];
    char stringpool_str27[sizeof("CP1258")];
    char stringpool_str28[sizeof("CP1361")];
    char stringpool_str29[sizeof("ASCII")];
    char stringpool_str31[sizeof("CP936")];
    char stringpool_str37[sizeof("CP932")];
    char stringpool_str42[sizeof("ISO8859-1")];
    char stringpool_str43[sizeof("ISO8859-11")];
    char stringpool_str44[sizeof("ISO8859-6")];
    char stringpool_str45[sizeof("ISO8859-16")];
    char stringpool_str46[sizeof("ISO8859-5")];
    char stringpool_str47[sizeof("ISO8859-15")];
    char stringpool_str48[sizeof("ISO8859-9")];
    char stringpool_str50[sizeof("ISO8859-2")];
    char stringpool_str53[sizeof("CP1253")];
    char stringpool_str56[sizeof("ISO8859-8")];
    char stringpool_str57[sizeof("ISO-8859-1")];
    char stringpool_str58[sizeof("ISO-8859-11")];
    char stringpool_str59[sizeof("ISO-8859-6")];
    char stringpool_str60[sizeof("ISO-8859-16")];
    char stringpool_str61[sizeof("ISO-8859-5")];
    char stringpool_str62[sizeof("ISO-8859-15")];
    char stringpool_str63[sizeof("ISO-8859-9")];
    char stringpool_str64[sizeof("CP949")];
    char stringpool_str65[sizeof("ISO-8859-2")];
    char stringpool_str67[sizeof("CP1133")];
    char stringpool_str70[sizeof("R8")];
    char stringpool_str71[sizeof("ISO-8859-8")];
    char stringpool_str72[sizeof("ISO_8859-1")];
    char stringpool_str73[sizeof("ISO_8859-11")];
    char stringpool_str74[sizeof("ISO_8859-6")];
    char stringpool_str75[sizeof("ISO_8859-16")];
    char stringpool_str76[sizeof("ISO_8859-5")];
    char stringpool_str77[sizeof("ISO_8859-15")];
    char stringpool_str78[sizeof("ISO_8859-9")];
    char stringpool_str79[sizeof("ISO_8859-16:2001")];
    char stringpool_str80[sizeof("ISO_8859-2")];
    char stringpool_str82[sizeof("ISO8859-3")];
    char stringpool_str83[sizeof("ISO8859-13")];
    char stringpool_str86[sizeof("ISO_8859-8")];
    char stringpool_str87[sizeof("ISO_8859-15:1998")];
    char stringpool_str90[sizeof("850")];
    char stringpool_str91[sizeof("CP950")];
    char stringpool_str92[sizeof("GB2312")];
    char stringpool_str93[sizeof("CP1250")];
    char stringpool_str94[sizeof("CSASCII")];
    char stringpool_str95[sizeof("CP850")];
    char stringpool_str97[sizeof("ISO-8859-3")];
    char stringpool_str98[sizeof("ISO-8859-13")];
    char stringpool_str99[sizeof("ISO-IR-6")];
    char stringpool_str102[sizeof("ISO-IR-166")];
    char stringpool_str104[sizeof("ISO-IR-165")];
    char stringpool_str105[sizeof("ISO-IR-126")];
    char stringpool_str107[sizeof("ISO-IR-159")];
    char stringpool_str108[sizeof("ISO-IR-199")];
    char stringpool_str109[sizeof("ISO-IR-226")];
    char stringpool_str111[sizeof("CP1254")];
    char stringpool_str112[sizeof("ISO_8859-3")];
    char stringpool_str113[sizeof("ISO_8859-13")];
    char stringpool_str114[sizeof("ISO-IR-58")];
    char stringpool_str115[sizeof("ISO646-CN")];
    char stringpool_str117[sizeof("L1")];
    char stringpool_str118[sizeof("L6")];
    char stringpool_str119[sizeof("L5")];
    char stringpool_str121[sizeof("L2")];
    char stringpool_str122[sizeof("ISO_8859-10:1992")];
    char stringpool_str123[sizeof("ISO8859-10")];
    char stringpool_str124[sizeof("L8")];
    char stringpool_str131[sizeof("EUCCN")];
    char stringpool_str132[sizeof("ISO-2022-CN")];
    char stringpool_str133[sizeof("ISO-IR-138")];
    char stringpool_str134[sizeof("ISO_8859-14:1998")];
    char stringpool_str137[sizeof("L3")];
    char stringpool_str138[sizeof("ISO-8859-10")];
    char stringpool_str139[sizeof("ISO-IR-101")];
    char stringpool_str140[sizeof("ISO8859-4")];
    char stringpool_str141[sizeof("ISO8859-14")];
    char stringpool_str142[sizeof("UHC")];
    char stringpool_str145[sizeof("ISO-IR-109")];
    char stringpool_str146[sizeof("EUC-CN")];
    char stringpool_str147[sizeof("CP1257")];
    char stringpool_str148[sizeof("ISO-2022-CN-EXT")];
    char stringpool_str150[sizeof("CHAR")];
    char stringpool_str153[sizeof("ISO_8859-10")];
    char stringpool_str154[sizeof("ISO-IR-149")];
    char stringpool_str155[sizeof("ISO-8859-4")];
    char stringpool_str156[sizeof("ISO-8859-14")];
    char stringpool_str161[sizeof("CP367")];
    char stringpool_str162[sizeof("ISO-IR-148")];
    char stringpool_str166[sizeof("L4")];
    char stringpool_str167[sizeof("CSISO2022CN")];
    char stringpool_str169[sizeof("UTF-16")];
    char stringpool_str170[sizeof("ISO_8859-4")];
    char stringpool_str171[sizeof("ISO_8859-14")];
    char stringpool_str172[sizeof("ISO-IR-179")];
    char stringpool_str173[sizeof("LATIN1")];
    char stringpool_str174[sizeof("ELOT_928")];
    char stringpool_str175[sizeof("LATIN6")];
    char stringpool_str176[sizeof("ISO8859-7")];
    char stringpool_str177[sizeof("LATIN5")];
    char stringpool_str178[sizeof("CP874")];
    char stringpool_str179[sizeof("ISO-IR-110")];
    char stringpool_str180[sizeof("UTF-8")];
    char stringpool_str181[sizeof("LATIN2")];
    char stringpool_str183[sizeof("ISO-IR-203")];
    char stringpool_str184[sizeof("L7")];
    char stringpool_str185[sizeof("TIS620")];
    char stringpool_str187[sizeof("LATIN8")];
    char stringpool_str190[sizeof("SJIS")];
    char stringpool_str191[sizeof("ISO-8859-7")];
    char stringpool_str192[sizeof("KSC_5601")];
    char stringpool_str193[sizeof("MAC")];
    char stringpool_str194[sizeof("LATIN-9")];
    char stringpool_str195[sizeof("UTF-32")];
    char stringpool_str196[sizeof("ISO-IR-14")];
    char stringpool_str197[sizeof("TIS620.2529-1")];
    char stringpool_str198[sizeof("L10")];
    char stringpool_str200[sizeof("TIS-620")];
    char stringpool_str201[sizeof("US")];
    char stringpool_str202[sizeof("KOI8-T")];
    char stringpool_str204[sizeof("IBM866")];
    char stringpool_str206[sizeof("ISO_8859-7")];
    char stringpool_str207[sizeof("IBM819")];
    char stringpool_str208[sizeof("GB18030")];
    char stringpool_str210[sizeof("IBM862")];
    char stringpool_str211[sizeof("GB_1988-80")];
    char stringpool_str213[sizeof("LATIN3")];
    char stringpool_str215[sizeof("X0212")];
    char stringpool_str218[sizeof("MS936")];
    char stringpool_str219[sizeof("ISO-IR-100")];
    char stringpool_str222[sizeof("GB_2312-80")];
    char stringpool_str226[sizeof("UCS-2")];
    char stringpool_str230[sizeof("TIS620.2533-1")];
    char stringpool_str234[sizeof("ISO-IR-57")];
    char stringpool_str235[sizeof("ISO-IR-157")];
    char stringpool_str237[sizeof("ISO-IR-127")];
    char stringpool_str239[sizeof("ISO-IR-87")];
    char stringpool_str241[sizeof("TIS620-0")];
    char stringpool_str244[sizeof("KS_C_5601-1989")];
    char stringpool_str245[sizeof("US-ASCII")];
    char stringpool_str246[sizeof("ISO-IR-144")];
    char stringpool_str247[sizeof("X0201")];
    char stringpool_str248[sizeof("CSKOI8R")];
    char stringpool_str251[sizeof("ARABIC")];
    char stringpool_str254[sizeof("LATIN10")];
    char stringpool_str256[sizeof("MACTHAI")];
    char stringpool_str258[sizeof("ISO-CELTIC")];
    char stringpool_str259[sizeof("BIG5")];
    char stringpool_str260[sizeof("KOI8-R")];
    char stringpool_str261[sizeof("X0208")];
    char stringpool_str262[sizeof("CSBIG5")];
    char stringpool_str264[sizeof("CSISOLATIN1")];
    char stringpool_str265[sizeof("JP")];
    char stringpool_str266[sizeof("CSISOLATIN6")];
    char stringpool_str267[sizeof("GEORGIAN-ACADEMY")];
    char stringpool_str268[sizeof("CSISOLATIN5")];
    char stringpool_str270[sizeof("TIS620.2533-0")];
    char stringpool_str271[sizeof("LATIN4")];
    char stringpool_str272[sizeof("CSISOLATIN2")];
    char stringpool_str273[sizeof("CSISOLATINCYRILLIC")];
    char stringpool_str274[sizeof("BIG-5")];
    char stringpool_str275[sizeof("ISO-10646-UCS-2")];
    char stringpool_str277[sizeof("CN-BIG5")];
    char stringpool_str279[sizeof("GBK")];
    char stringpool_str281[sizeof("CSUNICODE11")];
    char stringpool_str283[sizeof("IBM850")];
    char stringpool_str287[sizeof("IBM-CP1133")];
    char stringpool_str288[sizeof("UNICODE-1-1")];
    char stringpool_str292[sizeof("CSGB2312")];
    char stringpool_str293[sizeof("CSISOLATINARABIC")];
    char stringpool_str300[sizeof("UTF-7")];
    char stringpool_str301[sizeof("CSKSC56011987")];
    char stringpool_str302[sizeof("CYRILLIC")];
    char stringpool_str303[sizeof("WCHAR_T")];
    char stringpool_str304[sizeof("CSISOLATIN3")];
    char stringpool_str305[sizeof("CSUCS4")];
    char stringpool_str307[sizeof("LATIN7")];
    char stringpool_str308[sizeof("KS_C_5601-1987")];
    char stringpool_str311[sizeof("ARMSCII-8")];
    char stringpool_str312[sizeof("ROMAN8")];
    char stringpool_str314[sizeof("MS-ANSI")];
    char stringpool_str316[sizeof("UCS-4")];
    char stringpool_str320[sizeof("ISO-10646-UCS-4")];
    char stringpool_str322[sizeof("MACINTOSH")];
    char stringpool_str323[sizeof("EUCKR")];
    char stringpool_str324[sizeof("ISO-2022-KR")];
    char stringpool_str325[sizeof("KOREAN")];
    char stringpool_str326[sizeof("HZ-GB-2312")];
    char stringpool_str330[sizeof("CSPC862LATINHEBREW")];
    char stringpool_str331[sizeof("ECMA-118")];
    char stringpool_str334[sizeof("HP-ROMAN8")];
    char stringpool_str335[sizeof("ISO646-US")];
    char stringpool_str336[sizeof("CSHPROMAN8")];
    char stringpool_str338[sizeof("EUC-KR")];
    char stringpool_str340[sizeof("VISCII")];
    char stringpool_str342[sizeof("CHINESE")];
    char stringpool_str343[sizeof("CSVISCII")];
    char stringpool_str347[sizeof("TCVN")];
    char stringpool_str348[sizeof("CSMACINTOSH")];
    char stringpool_str349[sizeof("IBM367")];
    char stringpool_str350[sizeof("EUCTW")];
    char stringpool_str351[sizeof("ISO646-JP")];
    char stringpool_str352[sizeof("CSUNICODE11UTF7")];
    char stringpool_str353[sizeof("GREEK8")];
    char stringpool_str354[sizeof("ASMO-708")];
    char stringpool_str356[sizeof("ISO-2022-JP-1")];
    char stringpool_str359[sizeof("CSISO2022KR")];
    char stringpool_str360[sizeof("ISO-2022-JP-2")];
    char stringpool_str361[sizeof("UNICODE-1-1-UTF-7")];
    char stringpool_str362[sizeof("CSISOLATIN4")];
    char stringpool_str363[sizeof("CSUNICODE")];
    char stringpool_str365[sizeof("EUC-TW")];
    char stringpool_str367[sizeof("EUCJP")];
    char stringpool_str368[sizeof("ISO-2022-JP")];
    char stringpool_str369[sizeof("WINDOWS-1251")];
    char stringpool_str370[sizeof("WINDOWS-1256")];
    char stringpool_str371[sizeof("WINDOWS-1255")];
    char stringpool_str373[sizeof("WINDOWS-1252")];
    char stringpool_str374[sizeof("CSHALFWIDTHKATAKANA")];
    char stringpool_str375[sizeof("GEORGIAN-PS")];
    char stringpool_str376[sizeof("WINDOWS-1258")];
    char stringpool_str380[sizeof("MACCROATIAN")];
    char stringpool_str382[sizeof("EUC-JP")];
    char stringpool_str387[sizeof("WINDOWS-936")];
    char stringpool_str388[sizeof("CSISOLATINHEBREW")];
    char stringpool_str389[sizeof("WINDOWS-1253")];
    char stringpool_str390[sizeof("ISO_8859-9:1989")];
    char stringpool_str391[sizeof("VISCII1.1-1")];
    char stringpool_str393[sizeof("ISO_8859-5:1988")];
    char stringpool_str394[sizeof("CSISO2022JP2")];
    char stringpool_str398[sizeof("ISO_8859-8:1988")];
    char stringpool_str399[sizeof("JIS_C6226-1983")];
    char stringpool_str402[sizeof("CSISO58GB231280")];
    char stringpool_str403[sizeof("CSISO2022JP")];
    char stringpool_str404[sizeof("CSIBM866")];
    char stringpool_str406[sizeof("CSISO57GB1988")];
    char stringpool_str409[sizeof("WINDOWS-1250")];
    char stringpool_str411[sizeof("ISO_8859-3:1988")];
    char stringpool_str412[sizeof("KOI8-U")];
    char stringpool_str415[sizeof("ECMA-114")];
    char stringpool_str416[sizeof("JIS0208")];
    char stringpool_str418[sizeof("WINDOWS-1254")];
    char stringpool_str419[sizeof("CN-GB-ISOIR165")];
    char stringpool_str420[sizeof("TCVN5712-1")];
    char stringpool_str421[sizeof("JIS_C6220-1969-RO")];
    char stringpool_str423[sizeof("TCVN-5712")];
    char stringpool_str433[sizeof("CSISOLATINGREEK")];
    char stringpool_str436[sizeof("WINDOWS-1257")];
    char stringpool_str439[sizeof("CSISO159JISX02121990")];
    char stringpool_str440[sizeof("ISO_8859-4:1988")];
    char stringpool_str441[sizeof("CSISO14JISC6220RO")];
    char stringpool_str442[sizeof("ANSI_X3.4-1986")];
    char stringpool_str448[sizeof("ANSI_X3.4-1968")];
    char stringpool_str449[sizeof("GREEK")];
    char stringpool_str451[sizeof("ISO_8859-1:1987")];
    char stringpool_str452[sizeof("ISO_8859-6:1987")];
    char stringpool_str453[sizeof("UTF-16LE")];
    char stringpool_str455[sizeof("ISO_8859-2:1987")];
    char stringpool_str459[sizeof("MS-EE")];
    char stringpool_str460[sizeof("ISO_646.IRV:1991")];
    char stringpool_str463[sizeof("CSEUCKR")];
    char stringpool_str464[sizeof("NEXTSTEP")];
    char stringpool_str468[sizeof("CN-GB")];
    char stringpool_str471[sizeof("ISO_8859-7:2003")];
    char stringpool_str474[sizeof("KOI8-RU")];
    char stringpool_str476[sizeof("UTF-32LE")];
    char stringpool_str490[sizeof("CSEUCTW")];
    char stringpool_str493[sizeof("CSSHIFTJIS")];
    char stringpool_str495[sizeof("MACCYRILLIC")];
    char stringpool_str496[sizeof("MACICELAND")];
    char stringpool_str498[sizeof("UCS-2-SWAPPED")];
    char stringpool_str500[sizeof("SHIFT-JIS")];
    char stringpool_str502[sizeof("MS-CYRL")];
    char stringpool_str504[sizeof("MACARABIC")];
    char stringpool_str507[sizeof("UCS-2LE")];
    char stringpool_str509[sizeof("MACROMAN")];
    char stringpool_str515[sizeof("SHIFT_JIS")];
    char stringpool_str518[sizeof("ISO_8859-7:1987")];
    char stringpool_str525[sizeof("UNICODELITTLE")];
    char stringpool_str534[sizeof("WINDOWS-874")];
    char stringpool_str535[sizeof("UTF-16BE")];
    char stringpool_str537[sizeof("MACROMANIA")];
    char stringpool_str543[sizeof("UCS-4-SWAPPED")];
    char stringpool_str548[sizeof("MULELAO-1")];
    char stringpool_str552[sizeof("UCS-4LE")];
    char stringpool_str557[sizeof("UCS-2-INTERNAL")];
    char stringpool_str558[sizeof("UTF-32BE")];
    char stringpool_str564[sizeof("UNICODEBIG")];
    char stringpool_str565[sizeof("BIG5HKSCS")];
    char stringpool_str570[sizeof("JAVA")];
    char stringpool_str580[sizeof("BIG5-HKSCS")];
    char stringpool_str581[sizeof("HEBREW")];
    char stringpool_str589[sizeof("UCS-2BE")];
    char stringpool_str599[sizeof("JIS_X0212")];
    char stringpool_str602[sizeof("UCS-4-INTERNAL")];
    char stringpool_str612[sizeof("MACTURKISH")];
    char stringpool_str617[sizeof("MS-HEBR")];
    char stringpool_str624[sizeof("JISX0201-1976")];
    char stringpool_str628[sizeof("MS_KANJI")];
    char stringpool_str631[sizeof("JIS_X0201")];
    char stringpool_str634[sizeof("UCS-4BE")];
    char stringpool_str645[sizeof("JIS_X0208")];
    char stringpool_str654[sizeof("JIS_X0212-1990")];
    char stringpool_str661[sizeof("MS-TURK")];
    char stringpool_str668[sizeof("CSISO87JISX0208")];
    char stringpool_str671[sizeof("CSPC850MULTILINGUAL")];
    char stringpool_str673[sizeof("EXTENDED_UNIX_CODE_PACKED_FORMAT_FOR_JAPANESE")];
    char stringpool_str674[sizeof("JIS_X0212.1990-0")];
    char stringpool_str676[sizeof("JOHAB")];
    char stringpool_str677[sizeof("JIS_X0208-1983")];
    char stringpool_str697[sizeof("JIS_X0208-1990")];
    char stringpool_str702[sizeof("MACGREEK")];
    char stringpool_str707[sizeof("BIGFIVE")];
    char stringpool_str708[sizeof("CSEUCPKDFMTJAPANESE")];
    char stringpool_str709[sizeof("MACCENTRALEUROPE")];
    char stringpool_str710[sizeof("MS-ARAB")];
    char stringpool_str715[sizeof("MS-GREEK")];
    char stringpool_str719[sizeof("MACUKRAINE")];
    char stringpool_str722[sizeof("BIG-FIVE")];
    char stringpool_str752[sizeof("TCVN5712-1:1993")];
    char stringpool_str857[sizeof("MACHEBREW")];
    char stringpool_str948[sizeof("WINBALTRIM")];
  };
static const struct stringpool_t stringpool_contents =
  {
    "HZ",
    "C99",
    "866",
    "CP1251",
    "CP1256",
    "CP866",
    "CP1255",
    "862",
    "CP819",
    "CP1252",
    "CP862",
    "CN",
    "CP1258",
    "CP1361",
    "ASCII",
    "CP936",
    "CP932",
    "ISO8859-1",
    "ISO8859-11",
    "ISO8859-6",
    "ISO8859-16",
    "ISO8859-5",
    "ISO8859-15",
    "ISO8859-9",
    "ISO8859-2",
    "CP1253",
    "ISO8859-8",
    "ISO-8859-1",
    "ISO-8859-11",
    "ISO-8859-6",
    "ISO-8859-16",
    "ISO-8859-5",
    "ISO-8859-15",
    "ISO-8859-9",
    "CP949",
    "ISO-8859-2",
    "CP1133",
    "R8",
    "ISO-8859-8",
    "ISO_8859-1",
    "ISO_8859-11",
    "ISO_8859-6",
    "ISO_8859-16",
    "ISO_8859-5",
    "ISO_8859-15",
    "ISO_8859-9",
    "ISO_8859-16:2001",
    "ISO_8859-2",
    "ISO8859-3",
    "ISO8859-13",
    "ISO_8859-8",
    "ISO_8859-15:1998",
    "850",
    "CP950",
    "GB2312",
    "CP1250",
    "CSASCII",
    "CP850",
    "ISO-8859-3",
    "ISO-8859-13",
    "ISO-IR-6",
    "ISO-IR-166",
    "ISO-IR-165",
    "ISO-IR-126",
    "ISO-IR-159",
    "ISO-IR-199",
    "ISO-IR-226",
    "CP1254",
    "ISO_8859-3",
    "ISO_8859-13",
    "ISO-IR-58",
    "ISO646-CN",
    "L1",
    "L6",
    "L5",
    "L2",
    "ISO_8859-10:1992",
    "ISO8859-10",
    "L8",
    "EUCCN",
    "ISO-2022-CN",
    "ISO-IR-138",
    "ISO_8859-14:1998",
    "L3",
    "ISO-8859-10",
    "ISO-IR-101",
    "ISO8859-4",
    "ISO8859-14",
    "UHC",
    "ISO-IR-109",
    "EUC-CN",
    "CP1257",
    "ISO-2022-CN-EXT",
    "CHAR",
    "ISO_8859-10",
    "ISO-IR-149",
    "ISO-8859-4",
    "ISO-8859-14",
    "CP367",
    "ISO-IR-148",
    "L4",
    "CSISO2022CN",
    "UTF-16",
    "ISO_8859-4",
    "ISO_8859-14",
    "ISO-IR-179",
    "LATIN1",
    "ELOT_928",
    "LATIN6",
    "ISO8859-7",
    "LATIN5",
    "CP874",
    "ISO-IR-110",
    "UTF-8",
    "LATIN2",
    "ISO-IR-203",
    "L7",
    "TIS620",
    "LATIN8",
    "SJIS",
    "ISO-8859-7",
    "KSC_5601",
    "MAC",
    "LATIN-9",
    "UTF-32",
    "ISO-IR-14",
    "TIS620.2529-1",
    "L10",
    "TIS-620",
    "US",
    "KOI8-T",
    "IBM866",
    "ISO_8859-7",
    "IBM819",
    "GB18030",
    "IBM862",
    "GB_1988-80",
    "LATIN3",
    "X0212",
    "MS936",
    "ISO-IR-100",
    "GB_2312-80",
    "UCS-2",
    "TIS620.2533-1",
    "ISO-IR-57",
    "ISO-IR-157",
    "ISO-IR-127",
    "ISO-IR-87",
    "TIS620-0",
    "KS_C_5601-1989",
    "US-ASCII",
    "ISO-IR-144",
    "X0201",
    "CSKOI8R",
    "ARABIC",
    "LATIN10",
    "MACTHAI",
    "ISO-CELTIC",
    "BIG5",
    "KOI8-R",
    "X0208",
    "CSBIG5",
    "CSISOLATIN1",
    "JP",
    "CSISOLATIN6",
    "GEORGIAN-ACADEMY",
    "CSISOLATIN5",
    "TIS620.2533-0",
    "LATIN4",
    "CSISOLATIN2",
    "CSISOLATINCYRILLIC",
    "BIG-5",
    "ISO-10646-UCS-2",
    "CN-BIG5",
    "GBK",
    "CSUNICODE11",
    "IBM850",
    "IBM-CP1133",
    "UNICODE-1-1",
    "CSGB2312",
    "CSISOLATINARABIC",
    "UTF-7",
    "CSKSC56011987",
    "CYRILLIC",
    "WCHAR_T",
    "CSISOLATIN3",
    "CSUCS4",
    "LATIN7",
    "KS_C_5601-1987",
    "ARMSCII-8",
    "ROMAN8",
    "MS-ANSI",
    "UCS-4",
    "ISO-10646-UCS-4",
    "MACINTOSH",
    "EUCKR",
    "ISO-2022-KR",
    "KOREAN",
    "HZ-GB-2312",
    "CSPC862LATINHEBREW",
    "ECMA-118",
    "HP-ROMAN8",
    "ISO646-US",
    "CSHPROMAN8",
    "EUC-KR",
    "VISCII",
    "CHINESE",
    "CSVISCII",
    "TCVN",
    "CSMACINTOSH",
    "IBM367",
    "EUCTW",
    "ISO646-JP",
    "CSUNICODE11UTF7",
    "GREEK8",
    "ASMO-708",
    "ISO-2022-JP-1",
    "CSISO2022KR",
    "ISO-2022-JP-2",
    "UNICODE-1-1-UTF-7",
    "CSISOLATIN4",
    "CSUNICODE",
    "EUC-TW",
    "EUCJP",
    "ISO-2022-JP",
    "WINDOWS-1251",
    "WINDOWS-1256",
    "WINDOWS-1255",
    "WINDOWS-1252",
    "CSHALFWIDTHKATAKANA",
    "GEORGIAN-PS",
    "WINDOWS-1258",
    "MACCROATIAN",
    "EUC-JP",
    "WINDOWS-936",
    "CSISOLATINHEBREW",
    "WINDOWS-1253",
    "ISO_8859-9:1989",
    "VISCII1.1-1",
    "ISO_8859-5:1988",
    "CSISO2022JP2",
    "ISO_8859-8:1988",
    "JIS_C6226-1983",
    "CSISO58GB231280",
    "CSISO2022JP",
    "CSIBM866",
    "CSISO57GB1988",
    "WINDOWS-1250",
    "ISO_8859-3:1988",
    "KOI8-U",
    "ECMA-114",
    "JIS0208",
    "WINDOWS-1254",
    "CN-GB-ISOIR165",
    "TCVN5712-1",
    "JIS_C6220-1969-RO",
    "TCVN-5712",
    "CSISOLATINGREEK",
    "WINDOWS-1257",
    "CSISO159JISX02121990",
    "ISO_8859-4:1988",
    "CSISO14JISC6220RO",
    "ANSI_X3.4-1986",
    "ANSI_X3.4-1968",
    "GREEK",
    "ISO_8859-1:1987",
    "ISO_8859-6:1987",
    "UTF-16LE",
    "ISO_8859-2:1987",
    "MS-EE",
    "ISO_646.IRV:1991",
    "CSEUCKR",
    "NEXTSTEP",
    "CN-GB",
    "ISO_8859-7:2003",
    "KOI8-RU",
    "UTF-32LE",
    "CSEUCTW",
    "CSSHIFTJIS",
    "MACCYRILLIC",
    "MACICELAND",
    "UCS-2-SWAPPED",
    "SHIFT-JIS",
    "MS-CYRL",
    "MACARABIC",
    "UCS-2LE",
    "MACROMAN",
    "SHIFT_JIS",
    "ISO_8859-7:1987",
    "UNICODELITTLE",
    "WINDOWS-874",
    "UTF-16BE",
    "MACROMANIA",
    "UCS-4-SWAPPED",
    "MULELAO-1",
    "UCS-4LE",
    "UCS-2-INTERNAL",
    "UTF-32BE",
    "UNICODEBIG",
    "BIG5HKSCS",
    "JAVA",
    "BIG5-HKSCS",
    "HEBREW",
    "UCS-2BE",
    "JIS_X0212",
    "UCS-4-INTERNAL",
    "MACTURKISH",
    "MS-HEBR",
    "JISX0201-1976",
    "MS_KANJI",
    "JIS_X0201",
    "UCS-4BE",
    "JIS_X0208",
    "JIS_X0212-1990",
    "MS-TURK",
    "CSISO87JISX0208",
    "CSPC850MULTILINGUAL",
    "EXTENDED_UNIX_CODE_PACKED_FORMAT_FOR_JAPANESE",
    "JIS_X0212.1990-0",
    "JOHAB",
    "JIS_X0208-1983",
    "JIS_X0208-1990",
    "MACGREEK",
    "BIGFIVE",
    "CSEUCPKDFMTJAPANESE",
    "MACCENTRALEUROPE",
    "MS-ARAB",
    "MS-GREEK",
    "MACUKRAINE",
    "BIG-FIVE",
    "TCVN5712-1:1993",
    "MACHEBREW",
    "WINBALTRIM"
  };
#define stringpool ((const char *) &stringpool_contents)

static const struct alias aliases[] =
  {
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 320 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str7, ei_hz},
    {-1}, {-1},
#line 51 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str10, ei_c99},
    {-1},
#line 207 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str12, ei_cp866},
#line 174 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str13, ei_cp1251},
    {-1},
#line 189 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str15, ei_cp1256},
#line 205 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str16, ei_cp866},
#line 186 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str17, ei_cp1255},
#line 203 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str18, ei_cp862},
#line 57 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str19, ei_iso8859_1},
    {-1},
#line 177 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str21, ei_cp1252},
#line 201 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str22, ei_cp862},
#line 278 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str23, ei_iso646_cn},
    {-1}, {-1}, {-1},
#line 195 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str27, ei_cp1258},
#line 340 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str28, ei_johab},
#line 13 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str29, ei_ascii},
    {-1},
#line 313 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str31, ei_ces_gbk},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 301 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str37, ei_cp932},
    {-1}, {-1}, {-1}, {-1},
#line 62 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str42, ei_iso8859_1},
#line 139 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str43, ei_iso8859_11},
#line 102 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str44, ei_iso8859_6},
#line 166 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str45, ei_iso8859_16},
#line 93 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str46, ei_iso8859_5},
#line 159 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str47, ei_iso8859_15},
#line 128 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str48, ei_iso8859_9},
    {-1},
#line 70 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str50, ei_iso8859_2},
    {-1}, {-1},
#line 180 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str53, ei_cp1253},
    {-1}, {-1},
#line 120 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str56, ei_iso8859_8},
#line 53 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str57, ei_iso8859_1},
#line 137 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str58, ei_iso8859_11},
#line 94 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str59, ei_iso8859_6},
#line 160 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str60, ei_iso8859_16},
#line 87 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str61, ei_iso8859_5},
#line 154 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str62, ei_iso8859_15},
#line 121 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str63, ei_iso8859_9},
#line 337 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str64, ei_cp949},
#line 63 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str65, ei_iso8859_2},
    {-1},
#line 234 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str67, ei_cp1133},
    {-1}, {-1},
#line 226 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str70, ei_hp_roman8},
#line 114 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str71, ei_iso8859_8},
#line 54 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str72, ei_iso8859_1},
#line 138 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str73, ei_iso8859_11},
#line 95 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str74, ei_iso8859_6},
#line 161 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str75, ei_iso8859_16},
#line 88 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str76, ei_iso8859_5},
#line 155 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str77, ei_iso8859_15},
#line 122 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str78, ei_iso8859_9},
#line 162 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str79, ei_iso8859_16},
#line 64 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str80, ei_iso8859_2},
    {-1},
#line 78 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str82, ei_iso8859_3},
#line 145 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str83, ei_iso8859_13},
    {-1}, {-1},
#line 115 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str86, ei_iso8859_8},
#line 156 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str87, ei_iso8859_15},
    {-1}, {-1},
#line 199 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str90, ei_cp850},
#line 331 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str91, ei_cp950},
#line 309 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str92, ei_euc_cn},
#line 171 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str93, ei_cp1250},
#line 22 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str94, ei_ascii},
#line 197 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str95, ei_cp850},
    {-1},
#line 71 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str97, ei_iso8859_3},
#line 140 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str98, ei_iso8859_13},
#line 16 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str99, ei_ascii},
    {-1}, {-1},
#line 242 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str102, ei_tis620},
    {-1},
#line 284 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str104, ei_isoir165},
#line 107 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str105, ei_iso8859_7},
    {-1},
#line 273 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str107, ei_jisx0212},
#line 149 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str108, ei_iso8859_14},
#line 163 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str109, ei_iso8859_16},
    {-1},
#line 183 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str111, ei_cp1254},
#line 72 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str112, ei_iso8859_3},
#line 141 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str113, ei_iso8859_13},
#line 281 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str114, ei_gb2312},
#line 276 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str115, ei_iso646_cn},
    {-1},
#line 60 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str117, ei_iso8859_1},
#line 134 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str118, ei_iso8859_10},
#line 126 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str119, ei_iso8859_9},
    {-1},
#line 68 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str121, ei_iso8859_2},
#line 131 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str122, ei_iso8859_10},
#line 136 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str123, ei_iso8859_10},
#line 151 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str124, ei_iso8859_14},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 308 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str131, ei_euc_cn},
#line 317 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str132, ei_iso2022_cn},
#line 117 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str133, ei_iso8859_8},
#line 148 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str134, ei_iso8859_14},
    {-1}, {-1},
#line 76 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str137, ei_iso8859_3},
#line 129 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str138, ei_iso8859_10},
#line 66 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str139, ei_iso8859_2},
#line 86 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str140, ei_iso8859_4},
#line 153 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str141, ei_iso8859_14},
#line 338 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str142, ei_cp949},
    {-1}, {-1},
#line 74 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str145, ei_iso8859_3},
#line 307 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str146, ei_euc_cn},
#line 192 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str147, ei_cp1257},
#line 319 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str148, ei_iso2022_cn_ext},
    {-1},
#line 343 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str150, ei_local_char},
    {-1}, {-1},
#line 130 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str153, ei_iso8859_10},
#line 289 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str154, ei_ksc5601},
#line 79 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str155, ei_iso8859_4},
#line 146 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str156, ei_iso8859_14},
    {-1}, {-1}, {-1}, {-1},
#line 19 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str161, ei_ascii},
#line 124 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str162, ei_iso8859_9},
    {-1}, {-1}, {-1},
#line 84 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str166, ei_iso8859_4},
#line 318 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str167, ei_iso2022_cn},
    {-1},
#line 38 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str169, ei_utf16},
#line 80 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str170, ei_iso8859_4},
#line 147 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str171, ei_iso8859_14},
#line 142 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str172, ei_iso8859_13},
#line 59 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str173, ei_iso8859_1},
#line 109 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str174, ei_iso8859_7},
#line 133 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str175, ei_iso8859_10},
#line 113 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str176, ei_iso8859_7},
#line 125 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str177, ei_iso8859_9},
#line 243 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str178, ei_cp874},
#line 82 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str179, ei_iso8859_4},
#line 23 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str180, ei_utf8},
#line 67 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str181, ei_iso8859_2},
    {-1},
#line 157 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str183, ei_iso8859_15},
#line 144 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str184, ei_iso8859_13},
#line 237 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str185, ei_tis620},
    {-1},
#line 150 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str187, ei_iso8859_14},
    {-1}, {-1},
#line 298 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str190, ei_sjis},
#line 103 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str191, ei_iso8859_7},
#line 286 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str192, ei_ksc5601},
#line 211 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str193, ei_mac_roman},
#line 158 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str194, ei_iso8859_15},
#line 41 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str195, ei_utf32},
#line 254 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str196, ei_iso646_jp},
#line 239 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str197, ei_tis620},
#line 165 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str198, ei_iso8859_16},
    {-1},
#line 236 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str200, ei_tis620},
#line 21 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str201, ei_ascii},
#line 232 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str202, ei_koi8_t},
    {-1},
#line 206 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str204, ei_cp866},
    {-1},
#line 104 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str206, ei_iso8859_7},
#line 58 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str207, ei_iso8859_1},
#line 316 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str208, ei_gb18030},
    {-1},
#line 202 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str210, ei_cp862},
#line 275 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str211, ei_iso646_cn},
    {-1},
#line 75 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str213, ei_iso8859_3},
    {-1},
#line 272 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str215, ei_jisx0212},
    {-1}, {-1},
#line 314 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str218, ei_ces_gbk},
#line 56 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str219, ei_iso8859_1},
    {-1}, {-1},
#line 280 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str222, ei_gb2312},
    {-1}, {-1}, {-1},
#line 24 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str226, ei_ucs2},
    {-1}, {-1}, {-1},
#line 241 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str230, ei_tis620},
    {-1}, {-1}, {-1},
#line 277 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str234, ei_iso646_cn},
#line 132 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str235, ei_iso8859_10},
    {-1},
#line 97 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str237, ei_iso8859_6},
    {-1},
#line 266 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str239, ei_jisx0208},
    {-1},
#line 238 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str241, ei_tis620},
    {-1}, {-1},
#line 288 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str244, ei_ksc5601},
#line 12 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str245, ei_ascii},
#line 90 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str246, ei_iso8859_5},
#line 259 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str247, ei_jisx0201},
#line 168 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str248, ei_koi8_r},
    {-1}, {-1},
#line 100 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str251, ei_iso8859_6},
    {-1}, {-1},
#line 164 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str254, ei_iso8859_16},
    {-1},
#line 223 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str256, ei_mac_thai},
    {-1},
#line 152 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str258, ei_iso8859_14},
#line 325 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str259, ei_ces_big5},
#line 167 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str260, ei_koi8_r},
#line 265 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str261, ei_jisx0208},
#line 330 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str262, ei_ces_big5},
    {-1},
#line 61 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str264, ei_iso8859_1},
#line 255 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str265, ei_iso646_jp},
#line 135 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str266, ei_iso8859_10},
#line 230 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str267, ei_georgian_academy},
#line 127 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str268, ei_iso8859_9},
    {-1},
#line 240 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str270, ei_tis620},
#line 83 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str271, ei_iso8859_4},
#line 69 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str272, ei_iso8859_2},
#line 92 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str273, ei_iso8859_5},
#line 326 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str274, ei_ces_big5},
#line 25 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str275, ei_ucs2},
    {-1},
#line 329 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str277, ei_ces_big5},
    {-1},
#line 312 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str279, ei_ces_gbk},
    {-1},
#line 30 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str281, ei_ucs2be},
    {-1},
#line 198 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str283, ei_cp850},
    {-1}, {-1}, {-1},
#line 235 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str287, ei_cp1133},
#line 29 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str288, ei_ucs2be},
    {-1}, {-1}, {-1},
#line 311 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str292, ei_euc_cn},
#line 101 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str293, ei_iso8859_6},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 44 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str300, ei_utf7},
#line 290 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str301, ei_ksc5601},
#line 91 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str302, ei_iso8859_5},
#line 344 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str303, ei_local_wchar_t},
#line 77 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str304, ei_iso8859_3},
#line 35 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str305, ei_ucs4},
    {-1},
#line 143 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str307, ei_iso8859_13},
#line 287 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str308, ei_ksc5601},
    {-1}, {-1},
#line 229 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str311, ei_armscii_8},
#line 225 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str312, ei_hp_roman8},
    {-1},
#line 179 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str314, ei_cp1252},
    {-1},
#line 33 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str316, ei_ucs4},
    {-1}, {-1}, {-1},
#line 34 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str320, ei_ucs4},
    {-1},
#line 210 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str322, ei_mac_roman},
#line 335 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str323, ei_euc_kr},
#line 341 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str324, ei_iso2022_kr},
#line 291 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str325, ei_ksc5601},
#line 321 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str326, ei_hz},
    {-1}, {-1}, {-1},
#line 204 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str330, ei_cp862},
#line 108 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str331, ei_iso8859_7},
    {-1}, {-1},
#line 224 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str334, ei_hp_roman8},
#line 14 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str335, ei_ascii},
#line 227 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str336, ei_hp_roman8},
    {-1},
#line 334 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str338, ei_euc_kr},
    {-1},
#line 245 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str340, ei_viscii},
    {-1},
#line 283 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str342, ei_gb2312},
#line 247 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str343, ei_viscii},
    {-1}, {-1}, {-1},
#line 248 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str347, ei_tcvn},
#line 212 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str348, ei_mac_roman},
#line 20 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str349, ei_ascii},
#line 323 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str350, ei_euc_tw},
#line 253 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str351, ei_iso646_jp},
#line 46 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str352, ei_utf7},
#line 110 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str353, ei_iso8859_7},
#line 99 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str354, ei_iso8859_6},
    {-1},
#line 304 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str356, ei_iso2022_jp1},
    {-1}, {-1},
#line 342 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str359, ei_iso2022_kr},
#line 305 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str360, ei_iso2022_jp2},
#line 45 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str361, ei_utf7},
#line 85 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str362, ei_iso8859_4},
#line 26 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str363, ei_ucs2},
    {-1},
#line 322 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str365, ei_euc_tw},
    {-1},
#line 293 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str367, ei_euc_jp},
#line 302 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str368, ei_iso2022_jp},
#line 175 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str369, ei_cp1251},
#line 190 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str370, ei_cp1256},
#line 187 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str371, ei_cp1255},
    {-1},
#line 178 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str373, ei_cp1252},
#line 260 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str374, ei_jisx0201},
#line 231 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str375, ei_georgian_ps},
#line 196 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str376, ei_cp1258},
    {-1}, {-1}, {-1},
#line 215 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str380, ei_mac_croatian},
    {-1},
#line 292 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str382, ei_euc_jp},
    {-1}, {-1}, {-1}, {-1},
#line 315 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str387, ei_ces_gbk},
#line 119 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str388, ei_iso8859_8},
#line 181 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str389, ei_cp1253},
#line 123 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str390, ei_iso8859_9},
#line 246 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str391, ei_viscii},
    {-1},
#line 89 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str393, ei_iso8859_5},
#line 306 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str394, ei_iso2022_jp2},
    {-1}, {-1}, {-1},
#line 116 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str398, ei_iso8859_8},
#line 267 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str399, ei_jisx0208},
    {-1}, {-1},
#line 282 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str402, ei_gb2312},
#line 303 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str403, ei_iso2022_jp},
#line 208 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str404, ei_cp866},
    {-1},
#line 279 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str406, ei_iso646_cn},
    {-1}, {-1},
#line 172 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str409, ei_cp1250},
    {-1},
#line 73 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str411, ei_iso8859_3},
#line 169 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str412, ei_koi8_u},
    {-1}, {-1},
#line 98 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str415, ei_iso8859_6},
#line 264 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str416, ei_jisx0208},
    {-1},
#line 184 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str418, ei_cp1254},
#line 285 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str419, ei_isoir165},
#line 250 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str420, ei_tcvn},
#line 252 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str421, ei_iso646_jp},
    {-1},
#line 249 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str423, ei_tcvn},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 112 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str433, ei_iso8859_7},
    {-1}, {-1},
#line 193 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str436, ei_cp1257},
    {-1}, {-1},
#line 274 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str439, ei_jisx0212},
#line 81 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str440, ei_iso8859_4},
#line 256 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str441, ei_iso646_jp},
#line 18 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str442, ei_ascii},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 17 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str448, ei_ascii},
#line 111 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str449, ei_iso8859_7},
    {-1},
#line 55 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str451, ei_iso8859_1},
#line 96 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str452, ei_iso8859_6},
#line 40 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str453, ei_utf16le},
    {-1},
#line 65 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str455, ei_iso8859_2},
    {-1}, {-1}, {-1},
#line 173 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str459, ei_cp1250},
#line 15 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str460, ei_ascii},
    {-1}, {-1},
#line 336 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str463, ei_euc_kr},
#line 228 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str464, ei_nextstep},
    {-1}, {-1}, {-1},
#line 310 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str468, ei_euc_cn},
    {-1}, {-1},
#line 106 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str471, ei_iso8859_7},
    {-1}, {-1},
#line 170 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str474, ei_koi8_ru},
    {-1},
#line 43 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str476, ei_utf32le},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 324 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str490, ei_euc_tw},
    {-1}, {-1},
#line 300 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str493, ei_sjis},
    {-1},
#line 217 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str495, ei_mac_cyrillic},
#line 214 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str496, ei_mac_iceland},
    {-1},
#line 48 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str498, ei_ucs2swapped},
    {-1},
#line 297 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str500, ei_sjis},
    {-1},
#line 176 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str502, ei_cp1251},
    {-1},
#line 222 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str504, ei_mac_arabic},
    {-1}, {-1},
#line 31 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str507, ei_ucs2le},
    {-1},
#line 209 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str509, ei_mac_roman},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 296 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str515, ei_sjis},
    {-1}, {-1},
#line 105 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str518, ei_iso8859_7},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 32 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str525, ei_ucs2le},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 244 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str534, ei_cp874},
#line 39 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str535, ei_utf16be},
    {-1},
#line 216 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str537, ei_mac_romania},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 50 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str543, ei_ucs4swapped},
    {-1}, {-1}, {-1}, {-1},
#line 233 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str548, ei_mulelao},
    {-1}, {-1}, {-1},
#line 37 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str552, ei_ucs4le},
    {-1}, {-1}, {-1}, {-1},
#line 47 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str557, ei_ucs2internal},
#line 42 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str558, ei_utf32be},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 28 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str564, ei_ucs2be},
#line 333 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str565, ei_big5hkscs},
    {-1}, {-1}, {-1}, {-1},
#line 52 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str570, ei_java},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 332 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str580, ei_big5hkscs},
#line 118 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str581, ei_iso8859_8},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 27 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str589, ei_ucs2be},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 269 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str599, ei_jisx0212},
    {-1}, {-1},
#line 49 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str602, ei_ucs4internal},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 220 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str612, ei_mac_turkish},
    {-1}, {-1}, {-1}, {-1},
#line 188 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str617, ei_cp1255},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 258 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str624, ei_jisx0201},
    {-1}, {-1}, {-1},
#line 299 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str628, ei_sjis},
    {-1}, {-1},
#line 257 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str631, ei_jisx0201},
    {-1}, {-1},
#line 36 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str634, ei_ucs4be},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 261 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str645, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 271 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str654, ei_jisx0212},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 185 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str661, ei_cp1254},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 268 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str668, ei_jisx0208},
    {-1}, {-1},
#line 200 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str671, ei_cp850},
    {-1},
#line 294 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str673, ei_euc_jp},
#line 270 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str674, ei_jisx0212},
    {-1},
#line 339 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str676, ei_johab},
#line 262 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str677, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 263 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str697, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1},
#line 219 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str702, ei_mac_greek},
    {-1}, {-1}, {-1}, {-1},
#line 328 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str707, ei_ces_big5},
#line 295 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str708, ei_euc_jp},
#line 213 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str709, ei_mac_centraleurope},
#line 191 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str710, ei_cp1256},
    {-1}, {-1}, {-1}, {-1},
#line 182 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str715, ei_cp1253},
    {-1}, {-1}, {-1},
#line 218 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str719, ei_mac_ukraine},
    {-1}, {-1},
#line 327 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str722, ei_ces_big5},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 251 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str752, ei_tcvn},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 221 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str857, ei_mac_hebrew},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 194 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str948, ei_cp1257}
  };

#ifdef __GNUC__
__inline
#endif
const struct alias *
aliases_lookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = aliases_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int o = aliases[key].name;
          if (o >= 0)
            {
              register const char *s = o + stringpool;

              if (*str == *s && !strcmp (str + 1, s + 1))
                return &aliases[key];
            }
        }
    }
  return 0;
}

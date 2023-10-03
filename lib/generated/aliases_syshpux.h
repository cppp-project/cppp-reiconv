/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf -L C++ -Z HashPool -m 10 lib/generated/aliases_syshpux.gperf  */
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
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 1 "lib/generated/aliases_syshpux.gperf"
struct alias { int name; unsigned int encoding_index; };

#define TOTAL_KEYWORDS 359
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 45
#define MIN_HASH_VALUE 23
#define MAX_HASH_VALUE 1164
/* maximum key range = 1142, duplicates = 0 */

class HashPool
{
private:
  static inline unsigned int aliases_hash (const char *str, size_t len);
public:
  static const struct alias *aliases_lookup (const char *str, size_t len);
};

inline unsigned int
HashPool::aliases_hash (const char *str, size_t len)
{
  static const unsigned short asso_values[] =
    {
      1165, 1165, 1165, 1165, 1165, 1165, 1165, 1165, 1165, 1165,
      1165, 1165, 1165, 1165, 1165, 1165, 1165, 1165, 1165, 1165,
      1165, 1165, 1165, 1165, 1165, 1165, 1165, 1165, 1165, 1165,
      1165, 1165, 1165, 1165, 1165, 1165, 1165, 1165, 1165, 1165,
      1165, 1165, 1165, 1165, 1165,    5,  126, 1165,   39,    7,
        37,  146,   20,   18,    5,   90,   29,   33,  300, 1165,
      1165, 1165, 1165, 1165, 1165,   11,  217,   14,   10,  121,
       118,   18,  108,    5,  191,  161,  208,  218,    7,    5,
       153, 1165,    5,   50,   14,  201,  236,  149,  148,    8,
         9, 1165, 1165, 1165, 1165,    6, 1165, 1165, 1165, 1165,
      1165, 1165, 1165, 1165, 1165, 1165, 1165, 1165, 1165, 1165,
      1165, 1165, 1165, 1165, 1165, 1165, 1165, 1165, 1165, 1165,
      1165, 1165, 1165, 1165, 1165, 1165, 1165, 1165
    };
  unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[static_cast<unsigned char>(str[10])];
      /*FALLTHROUGH*/
      case 10:
        hval += asso_values[static_cast<unsigned char>(str[9])];
      /*FALLTHROUGH*/
      case 9:
        hval += asso_values[static_cast<unsigned char>(str[8])];
      /*FALLTHROUGH*/
      case 8:
        hval += asso_values[static_cast<unsigned char>(str[7])];
      /*FALLTHROUGH*/
      case 7:
        hval += asso_values[static_cast<unsigned char>(str[6])];
      /*FALLTHROUGH*/
      case 6:
        hval += asso_values[static_cast<unsigned char>(str[5])];
      /*FALLTHROUGH*/
      case 5:
        hval += asso_values[static_cast<unsigned char>(str[4])];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[static_cast<unsigned char>(str[3])];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[static_cast<unsigned char>(str[2])];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[static_cast<unsigned char>(str[0])];
        break;
    }
  return hval + asso_values[static_cast<unsigned char>(str[len - 1])];
}

struct stringpool_t
  {
    char stringpool_str23[sizeof("CN")];
    char stringpool_str36[sizeof("R8")];
    char stringpool_str42[sizeof("866")];
    char stringpool_str45[sizeof("ASCII")];
    char stringpool_str48[sizeof("ISO-IR-6")];
    char stringpool_str62[sizeof("ISO-IR-166")];
    char stringpool_str63[sizeof("CP866")];
    char stringpool_str82[sizeof("ISO646-CN")];
    char stringpool_str83[sizeof("C99")];
    char stringpool_str84[sizeof("CP154")];
    char stringpool_str86[sizeof("ISO-IR-14")];
    char stringpool_str88[sizeof("ISO-IR-165")];
    char stringpool_str92[sizeof("CP1256")];
    char stringpool_str94[sizeof("ISO-IR-126")];
    char stringpool_str96[sizeof("CP1251")];
    char stringpool_str100[sizeof("ISO-IR-101")];
    char stringpool_str106[sizeof("862")];
    char stringpool_str107[sizeof("ISO-IR-144")];
    char stringpool_str110[sizeof("850")];
    char stringpool_str111[sizeof("CSASCII")];
    char stringpool_str115[sizeof("ISO-IR-58")];
    char stringpool_str118[sizeof("CP1255")];
    char stringpool_str119[sizeof("HZ")];
    char stringpool_str121[sizeof("CP819")];
    char stringpool_str122[sizeof("CP1254")];
    char stringpool_str123[sizeof("GEORGIAN-ACADEMY")];
    char stringpool_str124[sizeof("ISO-IR-226")];
    char stringpool_str125[sizeof("ISO-IR-148")];
    char stringpool_str127[sizeof("CP862")];
    char stringpool_str131[sizeof("ISO-IR-159")];
    char stringpool_str132[sizeof("ISO-IR-110")];
    char stringpool_str133[sizeof("ISO-IR-149")];
    char stringpool_str135[sizeof("RK1048")];
    char stringpool_str137[sizeof("ISO88596")];
    char stringpool_str138[sizeof("CP949")];
    char stringpool_str140[sizeof("CP1258")];
    char stringpool_str141[sizeof("ISO88591")];
    char stringpool_str143[sizeof("ISO8859-6")];
    char stringpool_str144[sizeof("CP850")];
    char stringpool_str146[sizeof("ISO-IR-199")];
    char stringpool_str147[sizeof("ISO8859-1")];
    char stringpool_str148[sizeof("CP950")];
    char stringpool_str149[sizeof("ISO-8859-6")];
    char stringpool_str150[sizeof("ISO_8859-6")];
    char stringpool_str151[sizeof("ISO8859-16")];
    char stringpool_str152[sizeof("ISO-IR-109")];
    char stringpool_str153[sizeof("ISO-8859-1")];
    char stringpool_str154[sizeof("ISO_8859-1")];
    char stringpool_str155[sizeof("ISO8859-11")];
    char stringpool_str156[sizeof("CP1252")];
    char stringpool_str157[sizeof("ISO-8859-16")];
    char stringpool_str158[sizeof("ISO_8859-16")];
    char stringpool_str159[sizeof("SJIS")];
    char stringpool_str160[sizeof("CP1250")];
    char stringpool_str161[sizeof("ISO-8859-11")];
    char stringpool_str162[sizeof("ISO_8859-11")];
    char stringpool_str163[sizeof("ISO88595")];
    char stringpool_str164[sizeof("ISO-IR-100")];
    char stringpool_str165[sizeof("ISO_8859-16:2001")];
    char stringpool_str166[sizeof("CP50221")];
    char stringpool_str167[sizeof("HP15CN")];
    char stringpool_str168[sizeof("EUCCN")];
    char stringpool_str169[sizeof("ISO8859-5")];
    char stringpool_str171[sizeof("ISO885915")];
    char stringpool_str173[sizeof("ISO8859-4")];
    char stringpool_str174[sizeof("EUC-CN")];
    char stringpool_str175[sizeof("ISO-8859-5")];
    char stringpool_str176[sizeof("ISO_8859-5")];
    char stringpool_str177[sizeof("ISO8859-15")];
    char stringpool_str178[sizeof("CP874")];
    char stringpool_str179[sizeof("ISO-8859-4")];
    char stringpool_str180[sizeof("ISO_8859-4")];
    char stringpool_str181[sizeof("ISO8859-14")];
    char stringpool_str183[sizeof("ISO-8859-15")];
    char stringpool_str184[sizeof("ISO_8859-15")];
    char stringpool_str185[sizeof("ISO88598")];
    char stringpool_str187[sizeof("ISO-8859-14")];
    char stringpool_str188[sizeof("ISO_8859-14")];
    char stringpool_str190[sizeof("TIS620")];
    char stringpool_str191[sizeof("ISO8859-8")];
    char stringpool_str192[sizeof("CP1361")];
    char stringpool_str193[sizeof("ISO88599")];
    char stringpool_str194[sizeof("CP1131")];
    char stringpool_str196[sizeof("TIS-620")];
    char stringpool_str197[sizeof("ISO-8859-8")];
    char stringpool_str198[sizeof("ISO_8859-8")];
    char stringpool_str199[sizeof("ISO8859-9")];
    char stringpool_str200[sizeof("ISO_8859-15:1998")];
    char stringpool_str201[sizeof("ISO88592")];
    char stringpool_str202[sizeof("ISO_8859-14:1998")];
    char stringpool_str203[sizeof("ISO-IR-179")];
    char stringpool_str205[sizeof("ISO-8859-9")];
    char stringpool_str206[sizeof("ISO_8859-9")];
    char stringpool_str207[sizeof("ISO8859-2")];
    char stringpool_str208[sizeof("CP936")];
    char stringpool_str209[sizeof("ISO-2022-CN")];
    char stringpool_str213[sizeof("ISO-8859-2")];
    char stringpool_str214[sizeof("ISO_8859-2")];
    char stringpool_str215[sizeof("L6")];
    char stringpool_str216[sizeof("KOI8-R")];
    char stringpool_str217[sizeof("L1")];
    char stringpool_str219[sizeof("ISO8859-10")];
    char stringpool_str220[sizeof("ISO-2022-CN-EXT")];
    char stringpool_str223[sizeof("PT154")];
    char stringpool_str225[sizeof("ISO-8859-10")];
    char stringpool_str226[sizeof("ISO_8859-10")];
    char stringpool_str228[sizeof("L5")];
    char stringpool_str229[sizeof("ISO_8859-10:1992")];
    char stringpool_str230[sizeof("L4")];
    char stringpool_str231[sizeof("CSKOI8R")];
    char stringpool_str232[sizeof("UHC")];
    char stringpool_str234[sizeof("KOI8-T")];
    char stringpool_str236[sizeof("TIS620-0")];
    char stringpool_str237[sizeof("ISO-IR-57")];
    char stringpool_str239[sizeof("L8")];
    char stringpool_str243[sizeof("X0201")];
    char stringpool_str244[sizeof("GB_1988-80")];
    char stringpool_str245[sizeof("ISO-IR-157")];
    char stringpool_str247[sizeof("L2")];
    char stringpool_str248[sizeof("ISO-IR-87")];
    char stringpool_str249[sizeof("MAC")];
    char stringpool_str250[sizeof("LATIN6")];
    char stringpool_str251[sizeof("ISO-IR-138")];
    char stringpool_str253[sizeof("US")];
    char stringpool_str254[sizeof("LATIN1")];
    char stringpool_str262[sizeof("CP1257")];
    char stringpool_str263[sizeof("CSISO2022CN")];
    char stringpool_str264[sizeof("ISO-IR-127")];
    char stringpool_str265[sizeof("KSC_5601")];
    char stringpool_str268[sizeof("TCVN")];
    char stringpool_str271[sizeof("X0212")];
    char stringpool_str272[sizeof("CP932")];
    char stringpool_str273[sizeof("IBM866")];
    char stringpool_str275[sizeof("BIG5")];
    char stringpool_str276[sizeof("LATIN5")];
    char stringpool_str278[sizeof("ARABIC")];
    char stringpool_str280[sizeof("LATIN4")];
    char stringpool_str281[sizeof("BIG-5")];
    char stringpool_str282[sizeof("ELOT_928")];
    char stringpool_str287[sizeof("X0208")];
    char stringpool_str288[sizeof("GB2312")];
    char stringpool_str289[sizeof("L10")];
    char stringpool_str296[sizeof("CSBIG5")];
    char stringpool_str297[sizeof("KZ-1048")];
    char stringpool_str298[sizeof("LATIN8")];
    char stringpool_str300[sizeof("L7")];
    char stringpool_str301[sizeof("UCS-4")];
    char stringpool_str302[sizeof("CN-BIG5")];
    char stringpool_str304[sizeof("US-ASCII")];
    char stringpool_str305[sizeof("ROMAN8")];
    char stringpool_str307[sizeof("ISO88597")];
    char stringpool_str308[sizeof("MS-ANSI")];
    char stringpool_str311[sizeof("EUCKR")];
    char stringpool_str312[sizeof("LATIN-9")];
    char stringpool_str313[sizeof("ISO8859-7")];
    char stringpool_str314[sizeof("LATIN2")];
    char stringpool_str315[sizeof("KS_C_5601-1989")];
    char stringpool_str316[sizeof("CSKZ1048")];
    char stringpool_str317[sizeof("EUC-KR")];
    char stringpool_str318[sizeof("KOREAN")];
    char stringpool_str319[sizeof("ISO-8859-7")];
    char stringpool_str320[sizeof("ISO_8859-7")];
    char stringpool_str321[sizeof("VISCII")];
    char stringpool_str322[sizeof("MACCROATIAN")];
    char stringpool_str324[sizeof("GB18030")];
    char stringpool_str325[sizeof("CSUCS4")];
    char stringpool_str326[sizeof("LATIN10")];
    char stringpool_str331[sizeof("IBM819")];
    char stringpool_str332[sizeof("ISO-10646-UCS-4")];
    char stringpool_str335[sizeof("UCS-2")];
    char stringpool_str337[sizeof("IBM862")];
    char stringpool_str338[sizeof("GEORGIAN-PS")];
    char stringpool_str340[sizeof("CSISOLATIN6")];
    char stringpool_str342[sizeof("CSVISCII")];
    char stringpool_str343[sizeof("GBK")];
    char stringpool_str344[sizeof("CSISOLATIN1")];
    char stringpool_str346[sizeof("JP")];
    char stringpool_str347[sizeof("UTF-16")];
    char stringpool_str349[sizeof("ISO-10646-UCS-2")];
    char stringpool_str350[sizeof("CP367")];
    char stringpool_str352[sizeof("ISO-2022-KR")];
    char stringpool_str354[sizeof("IBM850")];
    char stringpool_str355[sizeof("ISO646-US")];
    char stringpool_str356[sizeof("L3")];
    char stringpool_str360[sizeof("CSISOLATINARABIC")];
    char stringpool_str361[sizeof("CN-GB-ISOIR165")];
    char stringpool_str365[sizeof("CSISOLATINCYRILLIC")];
    char stringpool_str366[sizeof("CSISOLATIN5")];
    char stringpool_str370[sizeof("CSISOLATIN4")];
    char stringpool_str372[sizeof("KS_C_5601-1987")];
    char stringpool_str373[sizeof("GB_2312-80")];
    char stringpool_str374[sizeof("CP1253")];
    char stringpool_str375[sizeof("ARMSCII-8")];
    char stringpool_str381[sizeof("UTF8")];
    char stringpool_str382[sizeof("MACTHAI")];
    char stringpool_str383[sizeof("CSISO14JISC6220RO")];
    char stringpool_str387[sizeof("UTF-8")];
    char stringpool_str392[sizeof("PTCP154")];
    char stringpool_str398[sizeof("UNICODE-1-1")];
    char stringpool_str404[sizeof("CSISOLATIN2")];
    char stringpool_str406[sizeof("CSISO2022KR")];
    char stringpool_str408[sizeof("ISO-IR-203")];
    char stringpool_str409[sizeof("CSUNICODE11")];
    char stringpool_str412[sizeof("MS936")];
    char stringpool_str413[sizeof("JIS_C6220-1969-RO")];
    char stringpool_str415[sizeof("ISO-CELTIC")];
    char stringpool_str416[sizeof("TIS620.2529-1")];
    char stringpool_str417[sizeof("ECMA-114")];
    char stringpool_str420[sizeof("LATIN7")];
    char stringpool_str421[sizeof("JIS0208")];
    char stringpool_str422[sizeof("CSPTCP154")];
    char stringpool_str425[sizeof("ISO8859-3")];
    char stringpool_str426[sizeof("HP-ROMAN8")];
    char stringpool_str431[sizeof("ISO-8859-3")];
    char stringpool_str432[sizeof("ISO_8859-3")];
    char stringpool_str433[sizeof("ISO8859-13")];
    char stringpool_str434[sizeof("ASMO-708")];
    char stringpool_str435[sizeof("ECMA-118")];
    char stringpool_str437[sizeof("CSISO159JISX02121990")];
    char stringpool_str438[sizeof("TCVN5712-1")];
    char stringpool_str439[sizeof("ISO-8859-13")];
    char stringpool_str440[sizeof("ISO_8859-13")];
    char stringpool_str441[sizeof("ISO_646.IRV:1991")];
    char stringpool_str442[sizeof("STRK1048-2002")];
    char stringpool_str446[sizeof("CHINESE")];
    char stringpool_str451[sizeof("CSKSC56011987")];
    char stringpool_str452[sizeof("EUCTW")];
    char stringpool_str453[sizeof("JAVA")];
    char stringpool_str454[sizeof("WINDOWS-1256")];
    char stringpool_str456[sizeof("WINDOWS-1251")];
    char stringpool_str458[sizeof("EUC-TW")];
    char stringpool_str460[sizeof("TCVN-5712")];
    char stringpool_str467[sizeof("WINDOWS-1255")];
    char stringpool_str469[sizeof("WINDOWS-1254")];
    char stringpool_str472[sizeof("CP1133")];
    char stringpool_str476[sizeof("CN-GB")];
    char stringpool_str478[sizeof("WINDOWS-1258")];
    char stringpool_str480[sizeof("VISCII1.1-1")];
    char stringpool_str481[sizeof("CYRILLIC")];
    char stringpool_str485[sizeof("GREEK8")];
    char stringpool_str486[sizeof("WINDOWS-1252")];
    char stringpool_str487[sizeof("UNICODE-1-1-UTF-7")];
    char stringpool_str488[sizeof("WINDOWS-1250")];
    char stringpool_str492[sizeof("ISO_8859-5:1988")];
    char stringpool_str493[sizeof("MACROMAN")];
    char stringpool_str494[sizeof("ISO_8859-4:1988")];
    char stringpool_str496[sizeof("CSUNICODE11UTF7")];
    char stringpool_str497[sizeof("SHIFT-JIS")];
    char stringpool_str498[sizeof("SHIFT_JIS")];
    char stringpool_str499[sizeof("CSISO57GB1988")];
    char stringpool_str503[sizeof("ISO_8859-8:1988")];
    char stringpool_str506[sizeof("CSIBM866")];
    char stringpool_str507[sizeof("CSUNICODE")];
    char stringpool_str509[sizeof("UTF-7")];
    char stringpool_str511[sizeof("ISO_8859-9:1989")];
    char stringpool_str513[sizeof("CSISOLATINGREEK")];
    char stringpool_str515[sizeof("MACROMANIA")];
    char stringpool_str517[sizeof("JIS_C6226-1983")];
    char stringpool_str518[sizeof("MACARABIC")];
    char stringpool_str521[sizeof("CSGB2312")];
    char stringpool_str528[sizeof("CSEUCKR")];
    char stringpool_str532[sizeof("LATIN3")];
    char stringpool_str533[sizeof("JIS_X0201")];
    char stringpool_str534[sizeof("ISO-2022-JP-1")];
    char stringpool_str538[sizeof("MACINTOSH")];
    char stringpool_str539[sizeof("WINDOWS-1257")];
    char stringpool_str540[sizeof("ISO_8859-6:1987")];
    char stringpool_str542[sizeof("ISO_8859-1:1987")];
    char stringpool_str543[sizeof("ANSI_X3.4-1986")];
    char stringpool_str545[sizeof("WINDOWS-874")];
    char stringpool_str546[sizeof("CYRILLIC-ASIAN")];
    char stringpool_str550[sizeof("UTF-32")];
    char stringpool_str551[sizeof("ISO646-JP")];
    char stringpool_str560[sizeof("IBM367")];
    char stringpool_str561[sizeof("JIS_X0212")];
    char stringpool_str564[sizeof("ISO-2022-JP-2")];
    char stringpool_str565[sizeof("CSMACINTOSH")];
    char stringpool_str567[sizeof("ANSI_X3.4-1968")];
    char stringpool_str572[sizeof("ISO_8859-2:1987")];
    char stringpool_str574[sizeof("JISX0201-1976")];
    char stringpool_str575[sizeof("WINDOWS-936")];
    char stringpool_str577[sizeof("JIS_X0208")];
    char stringpool_str578[sizeof("ISO-2022-JP-MS")];
    char stringpool_str580[sizeof("JIS_X0212-1990")];
    char stringpool_str587[sizeof("GREEK")];
    char stringpool_str589[sizeof("CSHPROMAN8")];
    char stringpool_str591[sizeof("MS-EE")];
    char stringpool_str592[sizeof("CSISOLATINHEBREW")];
    char stringpool_str593[sizeof("CSISO58GB231280")];
    char stringpool_str595[sizeof("WINDOWS-1253")];
    char stringpool_str604[sizeof("JIS_X0208-1990")];
    char stringpool_str608[sizeof("KOI8-U")];
    char stringpool_str612[sizeof("MS_KANJI")];
    char stringpool_str614[sizeof("KOI8-RU")];
    char stringpool_str615[sizeof("CSSHIFTJIS")];
    char stringpool_str617[sizeof("CSISO2022JP2")];
    char stringpool_str620[sizeof("ISO_8859-3:1988")];
    char stringpool_str622[sizeof("CSISOLATIN3")];
    char stringpool_str624[sizeof("UNICODEBIG")];
    char stringpool_str625[sizeof("ISO_8859-7:1987")];
    char stringpool_str627[sizeof("HZ-GB-2312")];
    char stringpool_str628[sizeof("MACICELAND")];
    char stringpool_str631[sizeof("CSISO87JISX0208")];
    char stringpool_str637[sizeof("EUCJP")];
    char stringpool_str638[sizeof("TIS620.2533-1")];
    char stringpool_str643[sizeof("EUC-JP")];
    char stringpool_str655[sizeof("UCS-4-INTERNAL")];
    char stringpool_str657[sizeof("CSPC862LATINHEBREW")];
    char stringpool_str668[sizeof("NEXTSTEP")];
    char stringpool_str669[sizeof("CSEUCTW")];
    char stringpool_str670[sizeof("TIS620.2533-0")];
    char stringpool_str672[sizeof("UCS-2-INTERNAL")];
    char stringpool_str673[sizeof("MS-CYRL")];
    char stringpool_str678[sizeof("ISO-2022-JP")];
    char stringpool_str681[sizeof("ISO_8859-7:2003")];
    char stringpool_str686[sizeof("MS-HEBR")];
    char stringpool_str691[sizeof("MS-ARAB")];
    char stringpool_str695[sizeof("BIG5HKSCS")];
    char stringpool_str701[sizeof("BIG5-HKSCS")];
    char stringpool_str703[sizeof("JIS_X0212.1990-0")];
    char stringpool_str711[sizeof("JIS_X0208-1983")];
    char stringpool_str723[sizeof("GB18030:2005")];
    char stringpool_str724[sizeof("MACCYRILLIC")];
    char stringpool_str731[sizeof("UNICODELITTLE")];
    char stringpool_str732[sizeof("CSISO2022JP")];
    char stringpool_str733[sizeof("UCS-4LE")];
    char stringpool_str740[sizeof("GB18030:2022")];
    char stringpool_str742[sizeof("UCS-4BE")];
    char stringpool_str749[sizeof("JOHAB")];
    char stringpool_str750[sizeof("UCS-2LE")];
    char stringpool_str755[sizeof("HEBREW")];
    char stringpool_str759[sizeof("UCS-2BE")];
    char stringpool_str772[sizeof("MS-TURK")];
    char stringpool_str775[sizeof("CSHALFWIDTHKATAKANA")];
    char stringpool_str784[sizeof("EXTENDED_UNIX_CODE_PACKED_FORMAT_FOR_JAPANESE")];
    char stringpool_str794[sizeof("UTF-16LE")];
    char stringpool_str799[sizeof("MULELAO-1")];
    char stringpool_str803[sizeof("UTF-16BE")];
    char stringpool_str818[sizeof("MS-GREEK")];
    char stringpool_str820[sizeof("UCS-4-SWAPPED")];
    char stringpool_str827[sizeof("MACGREEK")];
    char stringpool_str837[sizeof("UCS-2-SWAPPED")];
    char stringpool_str843[sizeof("BIGFIVE")];
    char stringpool_str849[sizeof("BIG-FIVE")];
    char stringpool_str857[sizeof("IBM-CP1133")];
    char stringpool_str870[sizeof("MACCENTRALEUROPE")];
    char stringpool_str874[sizeof("MACUKRAINE")];
    char stringpool_str882[sizeof("TCVN5712-1:1993")];
    char stringpool_str894[sizeof("MACTURKISH")];
    char stringpool_str963[sizeof("BIG5-HKSCS:2001")];
    char stringpool_str965[sizeof("UTF-32LE")];
    char stringpool_str974[sizeof("UTF-32BE")];
    char stringpool_str976[sizeof("BIG5-HKSCS:2004")];
    char stringpool_str985[sizeof("BIG5-HKSCS:2008")];
    char stringpool_str989[sizeof("BIG5-HKSCS:1999")];
    char stringpool_str1062[sizeof("WINBALTRIM")];
    char stringpool_str1111[sizeof("MACHEBREW")];
    char stringpool_str1135[sizeof("CSPC850MULTILINGUAL")];
    char stringpool_str1164[sizeof("CSEUCPKDFMTJAPANESE")];
  };
static const struct stringpool_t stringpool_contents =
  {
    "CN",
    "R8",
    "866",
    "ASCII",
    "ISO-IR-6",
    "ISO-IR-166",
    "CP866",
    "ISO646-CN",
    "C99",
    "CP154",
    "ISO-IR-14",
    "ISO-IR-165",
    "CP1256",
    "ISO-IR-126",
    "CP1251",
    "ISO-IR-101",
    "862",
    "ISO-IR-144",
    "850",
    "CSASCII",
    "ISO-IR-58",
    "CP1255",
    "HZ",
    "CP819",
    "CP1254",
    "GEORGIAN-ACADEMY",
    "ISO-IR-226",
    "ISO-IR-148",
    "CP862",
    "ISO-IR-159",
    "ISO-IR-110",
    "ISO-IR-149",
    "RK1048",
    "ISO88596",
    "CP949",
    "CP1258",
    "ISO88591",
    "ISO8859-6",
    "CP850",
    "ISO-IR-199",
    "ISO8859-1",
    "CP950",
    "ISO-8859-6",
    "ISO_8859-6",
    "ISO8859-16",
    "ISO-IR-109",
    "ISO-8859-1",
    "ISO_8859-1",
    "ISO8859-11",
    "CP1252",
    "ISO-8859-16",
    "ISO_8859-16",
    "SJIS",
    "CP1250",
    "ISO-8859-11",
    "ISO_8859-11",
    "ISO88595",
    "ISO-IR-100",
    "ISO_8859-16:2001",
    "CP50221",
    "HP15CN",
    "EUCCN",
    "ISO8859-5",
    "ISO885915",
    "ISO8859-4",
    "EUC-CN",
    "ISO-8859-5",
    "ISO_8859-5",
    "ISO8859-15",
    "CP874",
    "ISO-8859-4",
    "ISO_8859-4",
    "ISO8859-14",
    "ISO-8859-15",
    "ISO_8859-15",
    "ISO88598",
    "ISO-8859-14",
    "ISO_8859-14",
    "TIS620",
    "ISO8859-8",
    "CP1361",
    "ISO88599",
    "CP1131",
    "TIS-620",
    "ISO-8859-8",
    "ISO_8859-8",
    "ISO8859-9",
    "ISO_8859-15:1998",
    "ISO88592",
    "ISO_8859-14:1998",
    "ISO-IR-179",
    "ISO-8859-9",
    "ISO_8859-9",
    "ISO8859-2",
    "CP936",
    "ISO-2022-CN",
    "ISO-8859-2",
    "ISO_8859-2",
    "L6",
    "KOI8-R",
    "L1",
    "ISO8859-10",
    "ISO-2022-CN-EXT",
    "PT154",
    "ISO-8859-10",
    "ISO_8859-10",
    "L5",
    "ISO_8859-10:1992",
    "L4",
    "CSKOI8R",
    "UHC",
    "KOI8-T",
    "TIS620-0",
    "ISO-IR-57",
    "L8",
    "X0201",
    "GB_1988-80",
    "ISO-IR-157",
    "L2",
    "ISO-IR-87",
    "MAC",
    "LATIN6",
    "ISO-IR-138",
    "US",
    "LATIN1",
    "CP1257",
    "CSISO2022CN",
    "ISO-IR-127",
    "KSC_5601",
    "TCVN",
    "X0212",
    "CP932",
    "IBM866",
    "BIG5",
    "LATIN5",
    "ARABIC",
    "LATIN4",
    "BIG-5",
    "ELOT_928",
    "X0208",
    "GB2312",
    "L10",
    "CSBIG5",
    "KZ-1048",
    "LATIN8",
    "L7",
    "UCS-4",
    "CN-BIG5",
    "US-ASCII",
    "ROMAN8",
    "ISO88597",
    "MS-ANSI",
    "EUCKR",
    "LATIN-9",
    "ISO8859-7",
    "LATIN2",
    "KS_C_5601-1989",
    "CSKZ1048",
    "EUC-KR",
    "KOREAN",
    "ISO-8859-7",
    "ISO_8859-7",
    "VISCII",
    "MACCROATIAN",
    "GB18030",
    "CSUCS4",
    "LATIN10",
    "IBM819",
    "ISO-10646-UCS-4",
    "UCS-2",
    "IBM862",
    "GEORGIAN-PS",
    "CSISOLATIN6",
    "CSVISCII",
    "GBK",
    "CSISOLATIN1",
    "JP",
    "UTF-16",
    "ISO-10646-UCS-2",
    "CP367",
    "ISO-2022-KR",
    "IBM850",
    "ISO646-US",
    "L3",
    "CSISOLATINARABIC",
    "CN-GB-ISOIR165",
    "CSISOLATINCYRILLIC",
    "CSISOLATIN5",
    "CSISOLATIN4",
    "KS_C_5601-1987",
    "GB_2312-80",
    "CP1253",
    "ARMSCII-8",
    "UTF8",
    "MACTHAI",
    "CSISO14JISC6220RO",
    "UTF-8",
    "PTCP154",
    "UNICODE-1-1",
    "CSISOLATIN2",
    "CSISO2022KR",
    "ISO-IR-203",
    "CSUNICODE11",
    "MS936",
    "JIS_C6220-1969-RO",
    "ISO-CELTIC",
    "TIS620.2529-1",
    "ECMA-114",
    "LATIN7",
    "JIS0208",
    "CSPTCP154",
    "ISO8859-3",
    "HP-ROMAN8",
    "ISO-8859-3",
    "ISO_8859-3",
    "ISO8859-13",
    "ASMO-708",
    "ECMA-118",
    "CSISO159JISX02121990",
    "TCVN5712-1",
    "ISO-8859-13",
    "ISO_8859-13",
    "ISO_646.IRV:1991",
    "STRK1048-2002",
    "CHINESE",
    "CSKSC56011987",
    "EUCTW",
    "JAVA",
    "WINDOWS-1256",
    "WINDOWS-1251",
    "EUC-TW",
    "TCVN-5712",
    "WINDOWS-1255",
    "WINDOWS-1254",
    "CP1133",
    "CN-GB",
    "WINDOWS-1258",
    "VISCII1.1-1",
    "CYRILLIC",
    "GREEK8",
    "WINDOWS-1252",
    "UNICODE-1-1-UTF-7",
    "WINDOWS-1250",
    "ISO_8859-5:1988",
    "MACROMAN",
    "ISO_8859-4:1988",
    "CSUNICODE11UTF7",
    "SHIFT-JIS",
    "SHIFT_JIS",
    "CSISO57GB1988",
    "ISO_8859-8:1988",
    "CSIBM866",
    "CSUNICODE",
    "UTF-7",
    "ISO_8859-9:1989",
    "CSISOLATINGREEK",
    "MACROMANIA",
    "JIS_C6226-1983",
    "MACARABIC",
    "CSGB2312",
    "CSEUCKR",
    "LATIN3",
    "JIS_X0201",
    "ISO-2022-JP-1",
    "MACINTOSH",
    "WINDOWS-1257",
    "ISO_8859-6:1987",
    "ISO_8859-1:1987",
    "ANSI_X3.4-1986",
    "WINDOWS-874",
    "CYRILLIC-ASIAN",
    "UTF-32",
    "ISO646-JP",
    "IBM367",
    "JIS_X0212",
    "ISO-2022-JP-2",
    "CSMACINTOSH",
    "ANSI_X3.4-1968",
    "ISO_8859-2:1987",
    "JISX0201-1976",
    "WINDOWS-936",
    "JIS_X0208",
    "ISO-2022-JP-MS",
    "JIS_X0212-1990",
    "GREEK",
    "CSHPROMAN8",
    "MS-EE",
    "CSISOLATINHEBREW",
    "CSISO58GB231280",
    "WINDOWS-1253",
    "JIS_X0208-1990",
    "KOI8-U",
    "MS_KANJI",
    "KOI8-RU",
    "CSSHIFTJIS",
    "CSISO2022JP2",
    "ISO_8859-3:1988",
    "CSISOLATIN3",
    "UNICODEBIG",
    "ISO_8859-7:1987",
    "HZ-GB-2312",
    "MACICELAND",
    "CSISO87JISX0208",
    "EUCJP",
    "TIS620.2533-1",
    "EUC-JP",
    "UCS-4-INTERNAL",
    "CSPC862LATINHEBREW",
    "NEXTSTEP",
    "CSEUCTW",
    "TIS620.2533-0",
    "UCS-2-INTERNAL",
    "MS-CYRL",
    "ISO-2022-JP",
    "ISO_8859-7:2003",
    "MS-HEBR",
    "MS-ARAB",
    "BIG5HKSCS",
    "BIG5-HKSCS",
    "JIS_X0212.1990-0",
    "JIS_X0208-1983",
    "GB18030:2005",
    "MACCYRILLIC",
    "UNICODELITTLE",
    "CSISO2022JP",
    "UCS-4LE",
    "GB18030:2022",
    "UCS-4BE",
    "JOHAB",
    "UCS-2LE",
    "HEBREW",
    "UCS-2BE",
    "MS-TURK",
    "CSHALFWIDTHKATAKANA",
    "EXTENDED_UNIX_CODE_PACKED_FORMAT_FOR_JAPANESE",
    "UTF-16LE",
    "MULELAO-1",
    "UTF-16BE",
    "MS-GREEK",
    "UCS-4-SWAPPED",
    "MACGREEK",
    "UCS-2-SWAPPED",
    "BIGFIVE",
    "BIG-FIVE",
    "IBM-CP1133",
    "MACCENTRALEUROPE",
    "MACUKRAINE",
    "TCVN5712-1:1993",
    "MACTURKISH",
    "BIG5-HKSCS:2001",
    "UTF-32LE",
    "UTF-32BE",
    "BIG5-HKSCS:2004",
    "BIG5-HKSCS:2008",
    "BIG5-HKSCS:1999",
    "WINBALTRIM",
    "MACHEBREW",
    "CSPC850MULTILINGUAL",
    "CSEUCPKDFMTJAPANESE"
  };
#define stringpool ((const char *) &stringpool_contents)

static const struct alias aliases[] =
  {
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 297 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str23, ei_iso646_cn},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 236 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str36, ei_hp_roman8},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 216 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str42, ei_cp866},
    {-1}, {-1},
#line 13 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str45, ei_ascii},
    {-1}, {-1},
#line 16 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str48, ei_ascii},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 261 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str62, ei_tis620},
#line 214 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str63, ei_cp866},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 295 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str82, ei_iso646_cn},
#line 52 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str83, ei_c99},
#line 245 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str84, ei_pt154},
    {-1},
#line 273 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str86, ei_iso646_jp},
    {-1},
#line 302 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str88, ei_isoir165},
    {-1}, {-1}, {-1},
#line 198 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str92, ei_cp1256},
    {-1},
#line 112 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str94, ei_iso8859_7},
    {-1},
#line 183 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str96, ei_cp1251},
    {-1}, {-1}, {-1},
#line 68 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str100, ei_iso8859_2},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 212 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str106, ei_cp862},
#line 93 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str107, ei_iso8859_5},
    {-1}, {-1},
#line 208 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str110, ei_cp850},
#line 22 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str111, ei_ascii},
    {-1}, {-1}, {-1},
#line 300 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str115, ei_gb2312},
    {-1}, {-1},
#line 195 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str118, ei_cp1255},
#line 344 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str119, ei_hz},
    {-1},
#line 58 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str121, ei_iso8859_1},
#line 192 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str122, ei_cp1254},
#line 240 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str123, ei_georgian_academy},
#line 172 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str124, ei_iso8859_16},
#line 131 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str125, ei_iso8859_9},
    {-1},
#line 210 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str127, ei_cp862},
    {-1}, {-1}, {-1},
#line 292 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str131, ei_jisx0212},
#line 85 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str132, ei_iso8859_4},
#line 307 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str133, ei_ksc5601},
    {-1},
#line 248 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str135, ei_rk1048},
    {-1},
#line 107 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str137, ei_iso8859_6},
#line 365 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str138, ei_cp949},
    {-1},
#line 204 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str140, ei_cp1258},
#line 64 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str141, ei_iso8859_1},
    {-1},
#line 106 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str143, ei_iso8859_6},
#line 206 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str144, ei_cp850},
    {-1},
#line 157 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str146, ei_iso8859_14},
#line 63 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str147, ei_iso8859_1},
#line 355 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str148, ei_cp950},
#line 98 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str149, ei_iso8859_6},
#line 99 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str150, ei_iso8859_6},
#line 175 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str151, ei_iso8859_16},
#line 77 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str152, ei_iso8859_3},
#line 54 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str153, ei_iso8859_1},
#line 55 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str154, ei_iso8859_1},
#line 147 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str155, ei_iso8859_11},
#line 186 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str156, ei_cp1252},
#line 169 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str157, ei_iso8859_16},
#line 170 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str158, ei_iso8859_16},
#line 316 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str159, ei_sjis},
#line 180 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str160, ei_cp1250},
#line 145 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str161, ei_iso8859_11},
#line 146 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str162, ei_iso8859_11},
#line 97 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str163, ei_iso8859_5},
#line 57 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str164, ei_iso8859_1},
#line 171 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str165, ei_iso8859_16},
#line 326 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str166, ei_iso2022_jpms},
#line 333 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str167, ei_euc_cn},
#line 328 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str168, ei_euc_cn},
#line 96 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str169, ei_iso8859_5},
    {-1},
#line 168 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str171, ei_iso8859_15},
    {-1},
#line 89 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str173, ei_iso8859_4},
#line 327 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str174, ei_euc_cn},
#line 90 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str175, ei_iso8859_5},
#line 91 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str176, ei_iso8859_5},
#line 167 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str177, ei_iso8859_15},
#line 262 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str178, ei_cp874},
#line 82 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str179, ei_iso8859_4},
#line 83 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str180, ei_iso8859_4},
#line 161 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str181, ei_iso8859_14},
    {-1},
#line 162 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str183, ei_iso8859_15},
#line 163 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str184, ei_iso8859_15},
#line 127 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str185, ei_iso8859_8},
    {-1},
#line 154 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str187, ei_iso8859_14},
#line 155 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str188, ei_iso8859_14},
    {-1},
#line 256 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str190, ei_tis620},
#line 126 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str191, ei_iso8859_8},
#line 368 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str192, ei_johab},
#line 136 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str193, ei_iso8859_9},
#line 218 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str194, ei_cp1131},
    {-1},
#line 255 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str196, ei_tis620},
#line 120 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str197, ei_iso8859_8},
#line 121 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str198, ei_iso8859_8},
#line 135 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str199, ei_iso8859_9},
#line 164 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str200, ei_iso8859_15},
#line 73 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str201, ei_iso8859_2},
#line 156 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str202, ei_iso8859_14},
#line 150 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str203, ei_iso8859_13},
    {-1},
#line 128 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str205, ei_iso8859_9},
#line 129 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str206, ei_iso8859_9},
#line 72 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str207, ei_iso8859_2},
#line 335 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str208, ei_cp936},
#line 341 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str209, ei_iso2022_cn},
    {-1}, {-1}, {-1},
#line 65 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str213, ei_iso8859_2},
#line 66 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str214, ei_iso8859_2},
#line 142 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str215, ei_iso8859_10},
#line 176 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str216, ei_koi8_r},
#line 61 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str217, ei_iso8859_1},
    {-1},
#line 144 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str219, ei_iso8859_10},
#line 343 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str220, ei_iso2022_cn_ext},
    {-1}, {-1},
#line 243 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str223, ei_pt154},
    {-1},
#line 137 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str225, ei_iso8859_10},
#line 138 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str226, ei_iso8859_10},
    {-1},
#line 133 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str228, ei_iso8859_9},
#line 139 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str229, ei_iso8859_10},
#line 87 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str230, ei_iso8859_4},
#line 177 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str231, ei_koi8_r},
#line 366 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str232, ei_cp949},
    {-1},
#line 242 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str234, ei_koi8_t},
    {-1},
#line 257 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str236, ei_tis620},
#line 296 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str237, ei_iso646_cn},
    {-1},
#line 159 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str239, ei_iso8859_14},
    {-1}, {-1}, {-1},
#line 278 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str243, ei_jisx0201},
#line 294 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str244, ei_iso646_cn},
#line 140 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str245, ei_iso8859_10},
    {-1},
#line 70 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str247, ei_iso8859_2},
#line 285 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str248, ei_jisx0208},
#line 221 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str249, ei_mac_roman},
#line 141 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str250, ei_iso8859_10},
#line 123 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str251, ei_iso8859_8},
    {-1},
#line 21 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str253, ei_ascii},
#line 60 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str254, ei_iso8859_1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 201 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str262, ei_cp1257},
#line 342 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str263, ei_iso2022_cn},
#line 101 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str264, ei_iso8859_6},
#line 304 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str265, ei_ksc5601},
    {-1}, {-1},
#line 267 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str268, ei_tcvn},
    {-1}, {-1},
#line 291 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str271, ei_jisx0212},
#line 319 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str272, ei_cp932},
#line 215 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str273, ei_cp866},
    {-1},
#line 349 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str275, ei_ces_big5},
#line 132 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str276, ei_iso8859_9},
    {-1},
#line 104 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str278, ei_iso8859_6},
    {-1},
#line 86 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str280, ei_iso8859_4},
#line 350 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str281, ei_ces_big5},
#line 114 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str282, ei_iso8859_7},
    {-1}, {-1}, {-1}, {-1},
#line 284 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str287, ei_jisx0208},
#line 329 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str288, ei_euc_cn},
#line 174 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str289, ei_iso8859_16},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 354 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str296, ei_ces_big5},
#line 250 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str297, ei_rk1048},
#line 158 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str298, ei_iso8859_14},
    {-1},
#line 152 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str300, ei_iso8859_13},
#line 34 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str301, ei_ucs4},
#line 353 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str302, ei_ces_big5},
    {-1},
#line 12 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str304, ei_ascii},
#line 235 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str305, ei_hp_roman8},
    {-1},
#line 119 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str307, ei_iso8859_7},
#line 188 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str308, ei_cp1252},
    {-1}, {-1},
#line 363 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str311, ei_euc_kr},
#line 166 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str312, ei_iso8859_15},
#line 118 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str313, ei_iso8859_7},
#line 69 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str314, ei_iso8859_2},
#line 306 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str315, ei_ksc5601},
#line 251 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str316, ei_rk1048},
#line 362 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str317, ei_euc_kr},
#line 309 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str318, ei_ksc5601},
#line 108 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str319, ei_iso8859_7},
#line 109 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str320, ei_iso8859_7},
#line 264 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str321, ei_viscii},
#line 225 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str322, ei_mac_croatian},
    {-1},
#line 338 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str324, ei_gb18030_2005},
#line 36 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str325, ei_ucs4},
#line 173 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str326, ei_iso8859_16},
    {-1}, {-1}, {-1}, {-1},
#line 59 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str331, ei_iso8859_1},
#line 35 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str332, ei_ucs4},
    {-1}, {-1},
#line 25 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str335, ei_ucs2},
    {-1},
#line 211 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str337, ei_cp862},
#line 241 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str338, ei_georgian_ps},
    {-1},
#line 143 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str340, ei_iso8859_10},
    {-1},
#line 266 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str342, ei_viscii},
#line 334 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str343, ei_ces_gbk},
#line 62 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str344, ei_iso8859_1},
    {-1},
#line 274 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str346, ei_iso646_jp},
#line 39 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str347, ei_utf16},
    {-1},
#line 26 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str349, ei_ucs2},
#line 19 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str350, ei_ascii},
    {-1},
#line 369 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str352, ei_iso2022_kr},
    {-1},
#line 207 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str354, ei_cp850},
#line 14 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str355, ei_ascii},
#line 79 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str356, ei_iso8859_3},
    {-1}, {-1}, {-1},
#line 105 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str360, ei_iso8859_6},
#line 303 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str361, ei_isoir165},
    {-1}, {-1}, {-1},
#line 95 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str365, ei_iso8859_5},
#line 134 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str366, ei_iso8859_9},
    {-1}, {-1}, {-1},
#line 88 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str370, ei_iso8859_4},
    {-1},
#line 305 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str372, ei_ksc5601},
#line 299 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str373, ei_gb2312},
#line 189 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str374, ei_cp1253},
#line 239 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str375, ei_armscii_8},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 24 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str381, ei_utf8},
#line 233 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str382, ei_mac_thai},
#line 275 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str383, ei_iso646_jp},
    {-1}, {-1}, {-1},
#line 23 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str387, ei_utf8},
    {-1}, {-1}, {-1}, {-1},
#line 244 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str392, ei_pt154},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 30 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str398, ei_ucs2be},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 71 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str404, ei_iso8859_2},
    {-1},
#line 370 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str406, ei_iso2022_kr},
    {-1},
#line 165 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str408, ei_iso8859_15},
#line 31 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str409, ei_ucs2be},
    {-1}, {-1},
#line 336 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str412, ei_cp936},
#line 271 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str413, ei_iso646_jp},
    {-1},
#line 160 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str415, ei_iso8859_14},
#line 258 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str416, ei_tis620},
#line 102 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str417, ei_iso8859_6},
    {-1}, {-1},
#line 151 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str420, ei_iso8859_13},
#line 283 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str421, ei_jisx0208},
#line 247 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str422, ei_pt154},
    {-1}, {-1},
#line 81 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str425, ei_iso8859_3},
#line 234 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str426, ei_hp_roman8},
    {-1}, {-1}, {-1}, {-1},
#line 74 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str431, ei_iso8859_3},
#line 75 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str432, ei_iso8859_3},
#line 153 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str433, ei_iso8859_13},
#line 103 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str434, ei_iso8859_6},
#line 113 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str435, ei_iso8859_7},
    {-1},
#line 293 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str437, ei_jisx0212},
#line 269 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str438, ei_tcvn},
#line 148 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str439, ei_iso8859_13},
#line 149 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str440, ei_iso8859_13},
#line 15 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str441, ei_ascii},
#line 249 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str442, ei_rk1048},
    {-1}, {-1}, {-1},
#line 332 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str446, ei_euc_cn},
    {-1}, {-1}, {-1}, {-1},
#line 308 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str451, ei_ksc5601},
#line 347 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str452, ei_euc_tw},
#line 53 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str453, ei_java},
#line 199 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str454, ei_cp1256},
    {-1},
#line 184 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str456, ei_cp1251},
    {-1},
#line 346 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str458, ei_euc_tw},
    {-1},
#line 268 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str460, ei_tcvn},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 196 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str467, ei_cp1255},
    {-1},
#line 193 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str469, ei_cp1254},
    {-1}, {-1},
#line 253 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str472, ei_cp1133},
    {-1}, {-1}, {-1},
#line 330 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str476, ei_euc_cn},
    {-1},
#line 205 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str478, ei_cp1258},
    {-1},
#line 265 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str480, ei_viscii},
#line 94 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str481, ei_iso8859_5},
    {-1}, {-1}, {-1},
#line 115 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str485, ei_iso8859_7},
#line 187 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str486, ei_cp1252},
#line 46 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str487, ei_utf7},
#line 181 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str488, ei_cp1250},
    {-1}, {-1}, {-1},
#line 92 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str492, ei_iso8859_5},
#line 219 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str493, ei_mac_roman},
#line 84 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str494, ei_iso8859_4},
    {-1},
#line 47 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str496, ei_utf7},
#line 315 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str497, ei_sjis},
#line 314 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str498, ei_sjis},
#line 298 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str499, ei_iso646_cn},
    {-1}, {-1}, {-1},
#line 122 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str503, ei_iso8859_8},
    {-1}, {-1},
#line 217 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str506, ei_cp866},
#line 27 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str507, ei_ucs2},
    {-1},
#line 45 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str509, ei_utf7},
    {-1},
#line 130 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str511, ei_iso8859_9},
    {-1},
#line 117 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str513, ei_iso8859_7},
    {-1},
#line 226 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str515, ei_mac_romania},
    {-1},
#line 286 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str517, ei_jisx0208},
#line 232 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str518, ei_mac_arabic},
    {-1}, {-1},
#line 331 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str521, ei_euc_cn},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 364 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str528, ei_euc_kr},
    {-1}, {-1}, {-1},
#line 78 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str532, ei_iso8859_3},
#line 276 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str533, ei_jisx0201},
#line 322 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str534, ei_iso2022_jp1},
    {-1}, {-1}, {-1},
#line 220 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str538, ei_mac_roman},
#line 202 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str539, ei_cp1257},
#line 100 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str540, ei_iso8859_6},
    {-1},
#line 56 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str542, ei_iso8859_1},
#line 18 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str543, ei_ascii},
    {-1},
#line 263 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str545, ei_cp874},
#line 246 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str546, ei_pt154},
    {-1}, {-1}, {-1},
#line 42 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str550, ei_utf32},
#line 272 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str551, ei_iso646_jp},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 20 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str560, ei_ascii},
#line 288 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str561, ei_jisx0212},
    {-1}, {-1},
#line 323 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str564, ei_iso2022_jp2},
#line 222 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str565, ei_mac_roman},
    {-1},
#line 17 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str567, ei_ascii},
    {-1}, {-1}, {-1}, {-1},
#line 67 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str572, ei_iso8859_2},
    {-1},
#line 277 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str574, ei_jisx0201},
#line 337 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str575, ei_cp936},
    {-1},
#line 280 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str577, ei_jisx0208},
#line 325 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str578, ei_iso2022_jpms},
    {-1},
#line 290 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str580, ei_jisx0212},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 116 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str587, ei_iso8859_7},
    {-1},
#line 237 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str589, ei_hp_roman8},
    {-1},
#line 182 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str591, ei_cp1250},
#line 125 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str592, ei_iso8859_8},
#line 301 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str593, ei_gb2312},
    {-1},
#line 190 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str595, ei_cp1253},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 282 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str604, ei_jisx0208},
    {-1}, {-1}, {-1},
#line 178 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str608, ei_koi8_u},
    {-1}, {-1}, {-1},
#line 317 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str612, ei_sjis},
    {-1},
#line 179 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str614, ei_koi8_ru},
#line 318 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str615, ei_sjis},
    {-1},
#line 324 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str617, ei_iso2022_jp2},
    {-1}, {-1},
#line 76 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str620, ei_iso8859_3},
    {-1},
#line 80 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str622, ei_iso8859_3},
    {-1},
#line 29 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str624, ei_ucs2be},
#line 110 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str625, ei_iso8859_7},
    {-1},
#line 345 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str627, ei_hz},
#line 224 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str628, ei_mac_iceland},
    {-1}, {-1},
#line 287 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str631, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 311 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str637, ei_euc_jp},
#line 260 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str638, ei_tis620},
    {-1}, {-1}, {-1}, {-1},
#line 310 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str643, ei_euc_jp},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 50 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str655, ei_ucs4internal},
    {-1},
#line 213 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str657, ei_cp862},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 238 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str668, ei_nextstep},
#line 348 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str669, ei_euc_tw},
#line 259 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str670, ei_tis620},
    {-1},
#line 48 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str672, ei_ucs2internal},
#line 185 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str673, ei_cp1251},
    {-1}, {-1}, {-1}, {-1},
#line 320 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str678, ei_iso2022_jp},
    {-1}, {-1},
#line 111 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str681, ei_iso8859_7},
    {-1}, {-1}, {-1}, {-1},
#line 197 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str686, ei_cp1255},
    {-1}, {-1}, {-1}, {-1},
#line 200 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str691, ei_cp1256},
    {-1}, {-1}, {-1},
#line 360 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str695, ei_big5hkscs2008},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 359 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str701, ei_big5hkscs2008},
    {-1},
#line 289 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str703, ei_jisx0212},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 281 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str711, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 339 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str723, ei_gb18030_2005},
#line 227 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str724, ei_mac_cyrillic},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 33 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str731, ei_ucs2le},
#line 321 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str732, ei_iso2022_jp},
#line 38 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str733, ei_ucs4le},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 340 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str740, ei_gb18030_2022},
    {-1},
#line 37 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str742, ei_ucs4be},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 367 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str749, ei_johab},
#line 32 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str750, ei_ucs2le},
    {-1}, {-1}, {-1}, {-1},
#line 124 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str755, ei_iso8859_8},
    {-1}, {-1}, {-1},
#line 28 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str759, ei_ucs2be},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 194 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str772, ei_cp1254},
    {-1}, {-1},
#line 279 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str775, ei_jisx0201},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 312 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str784, ei_euc_jp},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 41 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str794, ei_utf16le},
    {-1}, {-1}, {-1}, {-1},
#line 252 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str799, ei_mulelao},
    {-1}, {-1}, {-1},
#line 40 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str803, ei_utf16be},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 191 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str818, ei_cp1253},
    {-1},
#line 51 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str820, ei_ucs4swapped},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 229 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str827, ei_mac_greek},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 49 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str837, ei_ucs2swapped},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 352 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str843, ei_ces_big5},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 351 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str849, ei_ces_big5},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 254 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str857, ei_cp1133},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 223 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str870, ei_mac_centraleurope},
    {-1}, {-1}, {-1},
#line 228 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str874, ei_mac_ukraine},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 270 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str882, ei_tcvn},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 230 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str894, ei_mac_turkish},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 357 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str963, ei_big5hkscs2001},
    {-1},
#line 44 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str965, ei_utf32le},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 43 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str974, ei_utf32be},
    {-1},
#line 358 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str976, ei_big5hkscs2004},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 361 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str985, ei_big5hkscs2008},
    {-1}, {-1}, {-1},
#line 356 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str989, ei_big5hkscs1999},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 203 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1062, ei_cp1257},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 231 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1111, ei_mac_hebrew},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 209 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1135, ei_cp850},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 313 "lib/generated/aliases_syshpux.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1164, ei_euc_jp}
  };

const struct alias *
HashPool::aliases_lookup (const char *str, size_t len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = aliases_hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          int o = aliases[key].name;
          if (o >= 0)
            {
              const char *s = o + stringpool;

              if (*str == *s && !strcmp (str + 1, s + 1))
                return &aliases[key];
            }
        }
    }
  return 0;
}

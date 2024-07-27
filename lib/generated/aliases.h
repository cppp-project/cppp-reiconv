/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf -L C++ -Z HashPool -m 10 lib/generated/aliases.gperf  */
/* Computed positions: -k'1-11,$' */

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

#line 1 "lib/generated/aliases.gperf"
struct alias { int name; unsigned int encoding_index; };

#define TOTAL_KEYWORDS 673
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 45
#define MIN_HASH_VALUE 22
#define MAX_HASH_VALUE 2582
/* maximum key range = 2561, duplicates = 0 */

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
      2583, 2583, 2583, 2583, 2583, 2583, 2583, 2583, 2583, 2583,
      2583, 2583, 2583, 2583, 2583, 2583, 2583, 2583, 2583, 2583,
      2583, 2583, 2583, 2583, 2583, 2583, 2583, 2583, 2583, 2583,
      2583, 2583, 2583, 2583, 2583, 2583, 2583, 2583, 2583, 2583,
      2583, 2583, 2583, 2583, 2583,  251,   26,  403,   66,    9,
         4,  120,   39,    2,    1,  192,   36,  404,  279,    3,
         9, 2583, 2583, 2583, 2583,   11,    1,   26,   76,  220,
       442,  247,   91,    1,   87,  293,   18,  195,   47,    4,
         1,  206,    6,  368,    8,  165,  497,  327,  115,   23,
        24,    2, 2583, 2583, 2583,  220, 2583, 2583, 2583, 2583,
      2583, 2583, 2583, 2583, 2583, 2583, 2583, 2583, 2583, 2583,
      2583, 2583, 2583, 2583, 2583, 2583, 2583, 2583, 2583, 2583,
      2583, 2583, 2583, 2583, 2583, 2583, 2583, 2583, 2583, 2583
    };
  unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[static_cast<unsigned char>(str[10]+1)];
      /*FALLTHROUGH*/
      case 10:
        hval += asso_values[static_cast<unsigned char>(str[9])];
      /*FALLTHROUGH*/
      case 9:
        hval += asso_values[static_cast<unsigned char>(str[8])];
      /*FALLTHROUGH*/
      case 8:
        hval += asso_values[static_cast<unsigned char>(str[7]+2)];
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
        hval += asso_values[static_cast<unsigned char>(str[1])];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[static_cast<unsigned char>(str[0])];
        break;
    }
  return hval + asso_values[static_cast<unsigned char>(str[len - 1])];
}

struct stringpool_t
  {
    char stringpool_str22[sizeof("L6")];
    char stringpool_str24[sizeof("L5")];
    char stringpool_str28[sizeof("L2")];
    char stringpool_str38[sizeof("L1")];
    char stringpool_str42[sizeof("866")];
    char stringpool_str43[sizeof("ATARI")];
    char stringpool_str44[sizeof("865")];
    char stringpool_str45[sizeof("855")];
    char stringpool_str48[sizeof("862")];
    char stringpool_str49[sizeof("852")];
    char stringpool_str50[sizeof("CP1256")];
    char stringpool_str52[sizeof("CP1255")];
    char stringpool_str54[sizeof("CP1166")];
    char stringpool_str55[sizeof("CP1156")];
    char stringpool_str56[sizeof("CP1252")];
    char stringpool_str57[sizeof("CP1155")];
    char stringpool_str58[sizeof("861")];
    char stringpool_str59[sizeof("CP1125")];
    char stringpool_str60[sizeof("CP1162")];
    char stringpool_str63[sizeof("CP1122")];
    char stringpool_str66[sizeof("CP1251")];
    char stringpool_str68[sizeof("CP1112")];
    char stringpool_str70[sizeof("CP1161")];
    char stringpool_str71[sizeof("CP866")];
    char stringpool_str72[sizeof("CP856")];
    char stringpool_str73[sizeof("CP865")];
    char stringpool_str74[sizeof("CP855")];
    char stringpool_str76[sizeof("CP285")];
    char stringpool_str77[sizeof("CP862")];
    char stringpool_str78[sizeof("CP852")];
    char stringpool_str80[sizeof("R8")];
    char stringpool_str87[sizeof("CP861")];
    char stringpool_str88[sizeof("ARABIC")];
    char stringpool_str91[sizeof("JP")];
    char stringpool_str92[sizeof("L8")];
    char stringpool_str93[sizeof("LATIN6")];
    char stringpool_str95[sizeof("LATIN5")];
    char stringpool_str98[sizeof("L4")];
    char stringpool_str99[sizeof("LATIN2")];
    char stringpool_str103[sizeof("PT154")];
    char stringpool_str109[sizeof("LATIN1")];
    char stringpool_str114[sizeof("CP1026")];
    char stringpool_str116[sizeof("CP1025")];
    char stringpool_str120[sizeof("CP1258")];
    char stringpool_str121[sizeof("CP154")];
    char stringpool_str122[sizeof("CN")];
    char stringpool_str125[sizeof("CP1158")];
    char stringpool_str126[sizeof("CP1254")];
    char stringpool_str128[sizeof("CP50221")];
    char stringpool_str130[sizeof("CP1164")];
    char stringpool_str131[sizeof("CP1154")];
    char stringpool_str132[sizeof("PTCP154")];
    char stringpool_str133[sizeof("CP1124")];
    char stringpool_str141[sizeof("HZ")];
    char stringpool_str142[sizeof("CP858")];
    char stringpool_str147[sizeof("CP864")];
    char stringpool_str149[sizeof("CP1046")];
    char stringpool_str150[sizeof("CP284")];
    char stringpool_str153[sizeof("CP424")];
    char stringpool_str159[sizeof("CP01146")];
    char stringpool_str161[sizeof("CP01145")];
    char stringpool_str162[sizeof("L10")];
    char stringpool_str163[sizeof("LATIN8")];
    char stringpool_str165[sizeof("CP01142")];
    char stringpool_str169[sizeof("LATIN4")];
    char stringpool_str172[sizeof("860")];
    char stringpool_str173[sizeof("850")];
    char stringpool_str175[sizeof("CP01141")];
    char stringpool_str179[sizeof("CP1132")];
    char stringpool_str180[sizeof("CP1250")];
    char stringpool_str181[sizeof("CP1361")];
    char stringpool_str184[sizeof("CP1160")];
    char stringpool_str189[sizeof("CP1131")];
    char stringpool_str200[sizeof("JOHAB")];
    char stringpool_str201[sizeof("CP860")];
    char stringpool_str202[sizeof("CP850")];
    char stringpool_str204[sizeof("CP280")];
    char stringpool_str207[sizeof("X0212")];
    char stringpool_str224[sizeof("CP16804")];
    char stringpool_str225[sizeof("IBM1166")];
    char stringpool_str226[sizeof("IBM1156")];
    char stringpool_str227[sizeof("IBM1165")];
    char stringpool_str228[sizeof("IBM1155")];
    char stringpool_str229[sizeof("CP01148")];
    char stringpool_str231[sizeof("IBM1162")];
    char stringpool_str232[sizeof("CP500")];
    char stringpool_str233[sizeof("LATIN10")];
    char stringpool_str234[sizeof("IBM1122")];
    char stringpool_str235[sizeof("CP01144")];
    char stringpool_str236[sizeof("CP880")];
    char stringpool_str239[sizeof("IBM1112")];
    char stringpool_str241[sizeof("IBM1161")];
    char stringpool_str242[sizeof("IBM866")];
    char stringpool_str244[sizeof("IBM865")];
    char stringpool_str245[sizeof("IBM855")];
    char stringpool_str247[sizeof("IBM285")];
    char stringpool_str248[sizeof("IBM862")];
    char stringpool_str249[sizeof("IBM852")];
    char stringpool_str250[sizeof("IBM425")];
    char stringpool_str251[sizeof("IBM282")];
    char stringpool_str256[sizeof("CP12712")];
    char stringpool_str257[sizeof("BIG5")];
    char stringpool_str258[sizeof("IBM861")];
    char stringpool_str260[sizeof("L3")];
    char stringpool_str261[sizeof("MAC")];
    char stringpool_str263[sizeof("IBM1146")];
    char stringpool_str264[sizeof("CP875")];
    char stringpool_str265[sizeof("IBM1145")];
    char stringpool_str269[sizeof("IBM1142")];
    char stringpool_str274[sizeof("X0201")];
    char stringpool_str278[sizeof("CP871")];
    char stringpool_str279[sizeof("IBM1141")];
    char stringpool_str280[sizeof("863")];
    char stringpool_str285[sizeof("IBM1026")];
    char stringpool_str287[sizeof("IBM1025")];
    char stringpool_str288[sizeof("CP1253")];
    char stringpool_str289[sizeof("CP01140")];
    char stringpool_str292[sizeof("CP1163")];
    char stringpool_str293[sizeof("CP1153")];
    char stringpool_str295[sizeof("CP1123")];
    char stringpool_str296[sizeof("IBM1158")];
    char stringpool_str300[sizeof("CP278")];
    char stringpool_str301[sizeof("IBM1164")];
    char stringpool_str302[sizeof("IBM1154")];
    char stringpool_str303[sizeof("CP1130")];
    char stringpool_str309[sizeof("CP863")];
    char stringpool_str310[sizeof("CP853")];
    char stringpool_str311[sizeof("UHC")];
    char stringpool_str315[sizeof("CP423")];
    char stringpool_str318[sizeof("IBM864")];
    char stringpool_str321[sizeof("IBM284")];
    char stringpool_str324[sizeof("IBM424")];
    char stringpool_str328[sizeof("X0208")];
    char stringpool_str331[sizeof("LATIN3")];
    char stringpool_str333[sizeof("IBM1148")];
    char stringpool_str338[sizeof("CP874")];
    char stringpool_str339[sizeof("IBM1144")];
    char stringpool_str341[sizeof("ROMAN8")];
    char stringpool_str347[sizeof("CYRILLIC")];
    char stringpool_str350[sizeof("IBM1132")];
    char stringpool_str351[sizeof("MACTHAI")];
    char stringpool_str355[sizeof("IBM1160")];
    char stringpool_str357[sizeof("IBM16804")];
    char stringpool_str365[sizeof("IBM01146")];
    char stringpool_str368[sizeof("IBM01144")];
    char stringpool_str371[sizeof("IBM01142")];
    char stringpool_str372[sizeof("IBM860")];
    char stringpool_str373[sizeof("IBM850")];
    char stringpool_str375[sizeof("IBM280")];
    char stringpool_str392[sizeof("CP870")];
    char stringpool_str393[sizeof("IBM1140")];
    char stringpool_str395[sizeof("GB2312")];
    char stringpool_str397[sizeof("CP01143")];
    char stringpool_str398[sizeof("IBM01140")];
    char stringpool_str403[sizeof("IBM500")];
    char stringpool_str404[sizeof("L7")];
    char stringpool_str407[sizeof("IBM880")];
    char stringpool_str411[sizeof("CP1133")];
    char stringpool_str413[sizeof("ASCII")];
    char stringpool_str420[sizeof("CP775")];
    char stringpool_str425[sizeof("857")];
    char stringpool_str428[sizeof("ATARIST")];
    char stringpool_str431[sizeof("IBM838")];
    char stringpool_str432[sizeof("CP1257")];
    char stringpool_str435[sizeof("IBM875")];
    char stringpool_str437[sizeof("CP1157")];
    char stringpool_str448[sizeof("CP922")];
    char stringpool_str449[sizeof("IBM871")];
    char stringpool_str450[sizeof("IBM01143")];
    char stringpool_str454[sizeof("CP857")];
    char stringpool_str457[sizeof("IBM01141")];
    char stringpool_str462[sizeof("IBM12712")];
    char stringpool_str463[sizeof("IBM1163")];
    char stringpool_str464[sizeof("IBM1153")];
    char stringpool_str465[sizeof("TDS565")];
    char stringpool_str466[sizeof("IBM1123")];
    char stringpool_str467[sizeof("MACCYRILLIC")];
    char stringpool_str468[sizeof("CP273")];
    char stringpool_str471[sizeof("IBM278")];
    char stringpool_str474[sizeof("IBM1130")];
    char stringpool_str475[sizeof("LATIN7")];
    char stringpool_str480[sizeof("IBM863")];
    char stringpool_str482[sizeof("MACROMANIA")];
    char stringpool_str486[sizeof("IBM423")];
    char stringpool_str491[sizeof("RK1048")];
    char stringpool_str499[sizeof("IBM-285")];
    char stringpool_str501[sizeof("IBM1143")];
    char stringpool_str502[sizeof("IBM-425")];
    char stringpool_str503[sizeof("IBM-282")];
    char stringpool_str504[sizeof("MACROMAN")];
    char stringpool_str505[sizeof("EUCJP")];
    char stringpool_str506[sizeof("CP905")];
    char stringpool_str509[sizeof("BIG-5")];
    char stringpool_str511[sizeof("CSPCP852")];
    char stringpool_str512[sizeof("IBM-1166")];
    char stringpool_str513[sizeof("IBM-1156")];
    char stringpool_str515[sizeof("IBM-1164")];
    char stringpool_str516[sizeof("IBM-1154")];
    char stringpool_str518[sizeof("IBM-1162")];
    char stringpool_str520[sizeof("TIS620")];
    char stringpool_str521[sizeof("IBM-1122")];
    char stringpool_str522[sizeof("IBM01145")];
    char stringpool_str526[sizeof("IBM-1112")];
    char stringpool_str531[sizeof("CP1047")];
    char stringpool_str536[sizeof("EUCCN")];
    char stringpool_str537[sizeof("CP367")];
    char stringpool_str541[sizeof("CP01147")];
    char stringpool_str542[sizeof("CP-GR")];
    char stringpool_str545[sizeof("IBM-1160")];
    char stringpool_str546[sizeof("437")];
    char stringpool_str550[sizeof("IBM-1146")];
    char stringpool_str553[sizeof("IBM-1144")];
    char stringpool_str555[sizeof("CP1137")];
    char stringpool_str556[sizeof("IBM-1142")];
    char stringpool_str558[sizeof("CP936")];
    char stringpool_str563[sizeof("IBM870")];
    char stringpool_str564[sizeof("CP932")];
    char stringpool_str570[sizeof("CP950")];
    char stringpool_str572[sizeof("IBM-1026")];
    char stringpool_str573[sizeof("IBM-284")];
    char stringpool_str575[sizeof("CP437")];
    char stringpool_str576[sizeof("IBM-424")];
    char stringpool_str578[sizeof("CN-GB")];
    char stringpool_str583[sizeof("IBM-1140")];
    char stringpool_str584[sizeof("CN-BIG5")];
    char stringpool_str585[sizeof("IBM-16804")];
    char stringpool_str591[sizeof("IBM775")];
    char stringpool_str597[sizeof("IBM-1163")];
    char stringpool_str598[sizeof("IBM-1153")];
    char stringpool_str600[sizeof("IBM-1123")];
    char stringpool_str602[sizeof("CP037")];
    char stringpool_str603[sizeof("KOI8-R")];
    char stringpool_str604[sizeof("IBM-1161")];
    char stringpool_str607[sizeof("KOI8-T")];
    char stringpool_str608[sizeof("IBM1157")];
    char stringpool_str615[sizeof("MACARABIC")];
    char stringpool_str618[sizeof("GB18030")];
    char stringpool_str621[sizeof("JAVA")];
    char stringpool_str625[sizeof("IBM857")];
    char stringpool_str627[sizeof("IBM-280")];
    char stringpool_str629[sizeof("TCVN")];
    char stringpool_str634[sizeof("KOREAN")];
    char stringpool_str635[sizeof("IBM-1143")];
    char stringpool_str637[sizeof("IBM-1132")];
    char stringpool_str639[sizeof("IBM273")];
    char stringpool_str641[sizeof("HP-ROMAN8")];
    char stringpool_str642[sizeof("IBM-1141")];
    char stringpool_str643[sizeof("IBM01148")];
    char stringpool_str644[sizeof("CYRILLIC-ASIAN")];
    char stringpool_str645[sizeof("IBM1147")];
    char stringpool_str647[sizeof("GB18030:2005")];
    char stringpool_str648[sizeof("MACINTOSH")];
    char stringpool_str652[sizeof("CP00924")];
    char stringpool_str653[sizeof("CSBIG5")];
    char stringpool_str655[sizeof("IBM-500")];
    char stringpool_str659[sizeof("IBM-880")];
    char stringpool_str662[sizeof("CSIBM1162")];
    char stringpool_str664[sizeof("IBM-1130")];
    char stringpool_str669[sizeof("IBM-1165")];
    char stringpool_str670[sizeof("IBM-1155")];
    char stringpool_str671[sizeof("JIS0208")];
    char stringpool_str672[sizeof("CSIBM1161")];
    char stringpool_str673[sizeof("CSIBM866")];
    char stringpool_str676[sizeof("CSIBM864")];
    char stringpool_str677[sizeof("IBM905")];
    char stringpool_str679[sizeof("CSIBM284")];
    char stringpool_str682[sizeof("CSIBM424")];
    char stringpool_str683[sizeof("IBM-838")];
    char stringpool_str686[sizeof("CP4971")];
    char stringpool_str687[sizeof("IBM-875")];
    char stringpool_str689[sizeof("IBM924")];
    char stringpool_str694[sizeof("ISO646-JP")];
    char stringpool_str696[sizeof("TIS620.2533-1")];
    char stringpool_str701[sizeof("IBM-871")];
    char stringpool_str702[sizeof("IBM1047")];
    char stringpool_str706[sizeof("CSIBM860")];
    char stringpool_str707[sizeof("IBM-1145")];
    char stringpool_str708[sizeof("IBM367")];
    char stringpool_str709[sizeof("CSIBM280")];
    char stringpool_str715[sizeof("CP943")];
    char stringpool_str716[sizeof("CSIBM1026")];
    char stringpool_str718[sizeof("CSPTCP154")];
    char stringpool_str721[sizeof("EUCKR")];
    char stringpool_str723[sizeof("IBM-278")];
    char stringpool_str724[sizeof("CCSID00924")];
    char stringpool_str726[sizeof("IBM1137")];
    char stringpool_str727[sizeof("CSIBMTHAI")];
    char stringpool_str728[sizeof("CP737")];
    char stringpool_str729[sizeof("IBM-1025")];
    char stringpool_str732[sizeof("MACICELAND")];
    char stringpool_str735[sizeof("IBM01149")];
    char stringpool_str737[sizeof("CSIBM500")];
    char stringpool_str738[sizeof("IBM-423")];
    char stringpool_str741[sizeof("CSIBM880")];
    char stringpool_str743[sizeof("CCSID01146")];
    char stringpool_str745[sizeof("CCSID01145")];
    char stringpool_str746[sizeof("IBM437")];
    char stringpool_str747[sizeof("CSKOI8R")];
    char stringpool_str749[sizeof("CCSID01142")];
    char stringpool_str753[sizeof("TIS620.2533-0")];
    char stringpool_str757[sizeof("EUC-JP")];
    char stringpool_str758[sizeof("CSIBM863")];
    char stringpool_str759[sizeof("CCSID01141")];
    char stringpool_str760[sizeof("GB18030:2022")];
    char stringpool_str761[sizeof("KZ-1048")];
    char stringpool_str764[sizeof("CSIBM423")];
    char stringpool_str765[sizeof("CSIBM861")];
    char stringpool_str769[sizeof("ECMA-114")];
    char stringpool_str772[sizeof("TIS-620")];
    char stringpool_str773[sizeof("IBM037")];
    char stringpool_str776[sizeof("EBCDIC-LATIN9-EURO")];
    char stringpool_str777[sizeof("TIS620-0")];
    char stringpool_str783[sizeof("IBM277")];
    char stringpool_str785[sizeof("IBM00924")];
    char stringpool_str788[sizeof("EUC-CN")];
    char stringpool_str790[sizeof("IBM-12712")];
    char stringpool_str791[sizeof("IBM-1158")];
    char stringpool_str809[sizeof("CSASCII")];
    char stringpool_str813[sizeof("CCSID01148")];
    char stringpool_str815[sizeof("IBM-870")];
    char stringpool_str818[sizeof("CSIBM00924")];
    char stringpool_str819[sizeof("CCSID01144")];
    char stringpool_str820[sizeof("TIS620.2529-1")];
    char stringpool_str822[sizeof("WINBALTRIM")];
    char stringpool_str823[sizeof("UCS-2")];
    char stringpool_str824[sizeof("CP297")];
    char stringpool_str825[sizeof("BIG5-2003")];
    char stringpool_str826[sizeof("CSGB2312")];
    char stringpool_str828[sizeof("IBM-1148")];
    char stringpool_str830[sizeof("CSIBM865")];
    char stringpool_str831[sizeof("CSIBM855")];
    char stringpool_str833[sizeof("CSIBM285")];
    char stringpool_str837[sizeof("GBK")];
    char stringpool_str839[sizeof("CSIBM01145")];
    char stringpool_str843[sizeof("CSIBM01142")];
    char stringpool_str846[sizeof("CSHPROMAN8")];
    char stringpool_str848[sizeof("869")];
    char stringpool_str850[sizeof("MACCROATIAN")];
    char stringpool_str851[sizeof("MS-ARAB")];
    char stringpool_str853[sizeof("CSIBM01141")];
    char stringpool_str857[sizeof("IBM4971")];
    char stringpool_str860[sizeof("IBM-THAI")];
    char stringpool_str863[sizeof("CP1129")];
    char stringpool_str873[sizeof("CCSID01140")];
    char stringpool_str877[sizeof("CP869")];
    char stringpool_str883[sizeof("UTF-16")];
    char stringpool_str885[sizeof("CP819")];
    char stringpool_str891[sizeof("IBM-273")];
    char stringpool_str892[sizeof("JIS_X0201")];
    char stringpool_str893[sizeof("UCS-4")];
    char stringpool_str894[sizeof("CSIBM1163")];
    char stringpool_str896[sizeof("CP1097")];
    char stringpool_str897[sizeof("CSIBM870")];
    char stringpool_str898[sizeof("HZ-GB-2312")];
    char stringpool_str899[sizeof("IBM737")];
    char stringpool_str901[sizeof("VISCII")];
    char stringpool_str903[sizeof("US")];
    char stringpool_str907[sizeof("CSIBM01148")];
    char stringpool_str912[sizeof("MS-CYRL")];
    char stringpool_str914[sizeof("CSPC850MULTILINGUAL")];
    char stringpool_str917[sizeof("CSIBM273")];
    char stringpool_str920[sizeof("IBM-1149")];
    char stringpool_str921[sizeof("KOI8-U")];
    char stringpool_str924[sizeof("IBM01147")];
    char stringpool_str927[sizeof("ISO-IR-6")];
    char stringpool_str928[sizeof("KOI8-RU")];
    char stringpool_str929[sizeof("IBM-905")];
    char stringpool_str931[sizeof("CSISO58GB231280")];
    char stringpool_str933[sizeof("ISO_8859-6")];
    char stringpool_str935[sizeof("ISO_8859-5")];
    char stringpool_str937[sizeof("ISO-IR-226")];
    char stringpool_str939[sizeof("ISO_8859-2")];
    char stringpool_str941[sizeof("IBM-924")];
    char stringpool_str943[sizeof("UTF-8")];
    char stringpool_str944[sizeof("ISO_8859-15")];
    char stringpool_str946[sizeof("JIS_X0208")];
    char stringpool_str949[sizeof("ISO_8859-1")];
    char stringpool_str953[sizeof("DEC-KANJI")];
    char stringpool_str954[sizeof("ISO_8859-11")];
    char stringpool_str956[sizeof("CSIBM871")];
    char stringpool_str959[sizeof("ISO_8859-10:1992")];
    char stringpool_str960[sizeof("CSPC862LATINHEBREW")];
    char stringpool_str963[sizeof("CSISO159JISX02121990")];
    char stringpool_str964[sizeof("ISO-8859-6")];
    char stringpool_str965[sizeof("CP01149")];
    char stringpool_str966[sizeof("ISO-8859-5")];
    char stringpool_str967[sizeof("CSIBM01140")];
    char stringpool_str968[sizeof("CSISO2022CN")];
    char stringpool_str970[sizeof("ISO-8859-2")];
    char stringpool_str973[sizeof("EUC-KR")];
    char stringpool_str974[sizeof("IBM-CP1133")];
    char stringpool_str975[sizeof("ISO-8859-15")];
    char stringpool_str977[sizeof("ISO_8859-5:1988")];
    char stringpool_str978[sizeof("EBCDIC-CYRILLIC")];
    char stringpool_str980[sizeof("ISO-8859-1")];
    char stringpool_str981[sizeof("CCSID01143")];
    char stringpool_str982[sizeof("ISO_8859-14")];
    char stringpool_str983[sizeof("ISO_8859-15:1998")];
    char stringpool_str984[sizeof("ISO_8859-14:1998")];
    char stringpool_str985[sizeof("ISO-8859-11")];
    char stringpool_str988[sizeof("ISO646-CN")];
    char stringpool_str993[sizeof("UNICODELITTLE")];
    char stringpool_str994[sizeof("DECHANYU")];
    char stringpool_str995[sizeof("IBM297")];
    char stringpool_str996[sizeof("EBCDIC-GB-285+EURO")];
    char stringpool_str998[sizeof("JIS_X0212")];
    char stringpool_str999[sizeof("EBCDIC-NO-277+EURO")];
    char stringpool_str1000[sizeof("UTF-32")];
    char stringpool_str1001[sizeof("NEXTSTEP")];
    char stringpool_str1003[sizeof("ISO_8859-8")];
    char stringpool_str1009[sizeof("ISO_8859-4")];
    char stringpool_str1011[sizeof("ISO_8859-8:1988")];
    char stringpool_str1013[sizeof("ISO-8859-14")];
    char stringpool_str1014[sizeof("ISO_8859-4:1988")];
    char stringpool_str1015[sizeof("ISO-IR-166")];
    char stringpool_str1016[sizeof("ISO_8859-10")];
    char stringpool_str1017[sizeof("ISO-IR-165")];
    char stringpool_str1018[sizeof("ISO-IR-126")];
    char stringpool_str1020[sizeof("CP-IS")];
    char stringpool_str1025[sizeof("IBM-037")];
    char stringpool_str1034[sizeof("ISO-8859-8")];
    char stringpool_str1035[sizeof("IBM-277")];
    char stringpool_str1037[sizeof("CSUCS4")];
    char stringpool_str1040[sizeof("ISO-8859-4")];
    char stringpool_str1041[sizeof("ISO-2022-CN-EXT")];
    char stringpool_str1043[sizeof("CSIBM869")];
    char stringpool_str1044[sizeof("ECMA-118")];
    char stringpool_str1047[sizeof("ISO-8859-10")];
    char stringpool_str1048[sizeof("IBM869")];
    char stringpool_str1056[sizeof("IBM819")];
    char stringpool_str1059[sizeof("ISO_646.IRV:1991")];
    char stringpool_str1060[sizeof("CSIBM1047")];
    char stringpool_str1061[sizeof("MULELAO-1")];
    char stringpool_str1062[sizeof("DECKANJI")];
    char stringpool_str1063[sizeof("DEC-HANYU")];
    char stringpool_str1064[sizeof("GREEK8")];
    char stringpool_str1067[sizeof("IBM1097")];
    char stringpool_str1069[sizeof("IBM1149")];
    char stringpool_str1072[sizeof("IBM-1157")];
    char stringpool_str1075[sizeof("CSIBM01143")];
    char stringpool_str1076[sizeof("ISO-2022-CN")];
    char stringpool_str1078[sizeof("EUCTW")];
    char stringpool_str1086[sizeof("EBCDIC-FI-278+EURO")];
    char stringpool_str1088[sizeof("JIS_C6220-1969-RO")];
    char stringpool_str1089[sizeof("ISO-IR-14")];
    char stringpool_str1091[sizeof("EBCDIC-FR-297+EURO")];
    char stringpool_str1092[sizeof("ARMSCII-8")];
    char stringpool_str1093[sizeof("EBCDIC-CP-NO")];
    char stringpool_str1094[sizeof("MS936")];
    char stringpool_str1095[sizeof("ISO_8859-3:1988")];
    char stringpool_str1096[sizeof("ISO-IR-101")];
    char stringpool_str1097[sizeof("JIS_X0212.1990-0")];
    char stringpool_str1099[sizeof("TCVN5712-1")];
    char stringpool_str1100[sizeof("ISO_8859-13")];
    char stringpool_str1107[sizeof("EBCDIC-CP-NL")];
    char stringpool_str1109[sizeof("IBM-1147")];
    char stringpool_str1110[sizeof("CSIBM278")];
    char stringpool_str1113[sizeof("KSC_5601")];
    char stringpool_str1114[sizeof("GEORGIAN-ACADEMY")];
    char stringpool_str1116[sizeof("CSPC775BALTIC")];
    char stringpool_str1117[sizeof("CSEUCKR")];
    char stringpool_str1120[sizeof("UNICODEBIG")];
    char stringpool_str1123[sizeof("ISO-IR-148")];
    char stringpool_str1125[sizeof("CCSID01147")];
    char stringpool_str1129[sizeof("ISO-IR-144")];
    char stringpool_str1131[sizeof("ISO-8859-13")];
    char stringpool_str1132[sizeof("ISO_8859-6:1987")];
    char stringpool_str1134[sizeof("ISO_8859-16")];
    char stringpool_str1135[sizeof("ISO_8859-2:1987")];
    char stringpool_str1136[sizeof("JIS_C6226-1983")];
    char stringpool_str1140[sizeof("ISO_8859-1:1987")];
    char stringpool_str1145[sizeof("MS-HEBR")];
    char stringpool_str1147[sizeof("ISO_8859-16:2001")];
    char stringpool_str1148[sizeof("CSKZ1048")];
    char stringpool_str1151[sizeof("LATIN-9")];
    char stringpool_str1153[sizeof("ISO-IR-110")];
    char stringpool_str1155[sizeof("ISO-IR-58")];
    char stringpool_str1160[sizeof("TCVN-5712")];
    char stringpool_str1165[sizeof("ISO-8859-16")];
    char stringpool_str1166[sizeof("IBM-1047")];
    char stringpool_str1169[sizeof("CSPC8CODEPAGE1146")];
    char stringpool_str1171[sizeof("ISO_8859-3")];
    char stringpool_str1172[sizeof("EBCDIC-CP-CA")];
    char stringpool_str1177[sizeof("EBCDIC-CP-GB")];
    char stringpool_str1180[sizeof("EBCDIC-CP-IT")];
    char stringpool_str1182[sizeof("EBCDIC-CP-GR")];
    char stringpool_str1183[sizeof("ISO-IR-230")];
    char stringpool_str1185[sizeof("CSISO2022JP")];
    char stringpool_str1186[sizeof("GB_2312-80")];
    char stringpool_str1189[sizeof("CSISO2022JP2")];
    char stringpool_str1190[sizeof("IBM-1137")];
    char stringpool_str1196[sizeof("SJIS")];
    char stringpool_str1198[sizeof("HEBREW")];
    char stringpool_str1199[sizeof("RISCOS-LATIN1")];
    char stringpool_str1200[sizeof("CHINESE")];
    char stringpool_str1201[sizeof("ELOT_928")];
    char stringpool_str1202[sizeof("ISO-8859-3")];
    char stringpool_str1204[sizeof("ISO-IR-138")];
    char stringpool_str1207[sizeof("CSPC8CODEPAGE1144")];
    char stringpool_str1208[sizeof("EBCDIC-CP-WT")];
    char stringpool_str1210[sizeof("ISO-IR-100")];
    char stringpool_str1218[sizeof("TCVN5712-1:1993")];
    char stringpool_str1219[sizeof("CSIBM01147")];
    char stringpool_str1220[sizeof("IBM-4971")];
    char stringpool_str1226[sizeof("UNICODE-1-1")];
    char stringpool_str1233[sizeof("CSIBM857")];
    char stringpool_str1236[sizeof("JIS_X0208-1990")];
    char stringpool_str1237[sizeof("ISO-IR-203")];
    char stringpool_str1241[sizeof("C99")];
    char stringpool_str1247[sizeof("IBM-297")];
    char stringpool_str1248[sizeof("MACCENTRALEUROPE")];
    char stringpool_str1249[sizeof("MS-ANSI")];
    char stringpool_str1251[sizeof("ISO_8859-7:2003")];
    char stringpool_str1252[sizeof("EBCDIC-CP-CH")];
    char stringpool_str1253[sizeof("VISCII1.1-1")];
    char stringpool_str1255[sizeof("UTF-7")];
    char stringpool_str1256[sizeof("EBCDIC-CP-TR")];
    char stringpool_str1257[sizeof("ANSI_X3.4-1986")];
    char stringpool_str1262[sizeof("UCS-2BE")];
    char stringpool_str1263[sizeof("CSIBM905")];
    char stringpool_str1265[sizeof("ISO8859-6")];
    char stringpool_str1267[sizeof("ISO8859-5")];
    char stringpool_str1271[sizeof("ISO8859-2")];
    char stringpool_str1274[sizeof("EBCDIC-CP-YU")];
    char stringpool_str1275[sizeof("ISO8859-16")];
    char stringpool_str1277[sizeof("ISO8859-15")];
    char stringpool_str1279[sizeof("UCS-2LE")];
    char stringpool_str1281[sizeof("ISO8859-1")];
    char stringpool_str1283[sizeof("CP949")];
    char stringpool_str1284[sizeof("GREEK")];
    char stringpool_str1290[sizeof("JIS_X0208-1983")];
    char stringpool_str1291[sizeof("ISO8859-11")];
    char stringpool_str1292[sizeof("ANSI_X3.4-1968")];
    char stringpool_str1293[sizeof("ISO-2022-JP")];
    char stringpool_str1295[sizeof("EBCDIC-IT-280+EURO")];
    char stringpool_str1297[sizeof("UCS-4BE")];
    char stringpool_str1298[sizeof("ISO-2022-JP-2")];
    char stringpool_str1299[sizeof("CSISO14JISC6220RO")];
    char stringpool_str1300[sizeof("CSISO57GB1988")];
    char stringpool_str1303[sizeof("ISO-2022-JP-1")];
    char stringpool_str1306[sizeof("EBCDIC-CP-HE")];
    char stringpool_str1313[sizeof("EBCDIC-CP-SE")];
    char stringpool_str1314[sizeof("UCS-4LE")];
    char stringpool_str1315[sizeof("ISO_8859-7")];
    char stringpool_str1320[sizeof("JIS_X0212-1990")];
    char stringpool_str1323[sizeof("ISO_8859-7:1987")];
    char stringpool_str1330[sizeof("EUC-TW")];
    char stringpool_str1331[sizeof("EBCDIC-CP-BE")];
    char stringpool_str1332[sizeof("CSUNICODE11")];
    char stringpool_str1333[sizeof("EBCDIC-CP-FI")];
    char stringpool_str1335[sizeof("ISO8859-8")];
    char stringpool_str1336[sizeof("ISO-2022-JP-2004")];
    char stringpool_str1338[sizeof("EBCDIC-CP-FR")];
    char stringpool_str1341[sizeof("ISO8859-4")];
    char stringpool_str1346[sizeof("ISO-8859-7")];
    char stringpool_str1348[sizeof("EUC-JISX0213")];
    char stringpool_str1349[sizeof("STRK1048-2002")];
    char stringpool_str1351[sizeof("ISO8859-14")];
    char stringpool_str1352[sizeof("UTF-16BE")];
    char stringpool_str1355[sizeof("CSISOLATIN5")];
    char stringpool_str1359[sizeof("CSPC8CODEPAGE437")];
    char stringpool_str1365[sizeof("CSISOLATIN1")];
    char stringpool_str1369[sizeof("UTF-16LE")];
    char stringpool_str1376[sizeof("GEORGIAN-PS")];
    char stringpool_str1378[sizeof("CN-GB-ISOIR165")];
    char stringpool_str1379[sizeof("EBCDIC-SE-278+EURO")];
    char stringpool_str1380[sizeof("JISX0201-1976")];
    char stringpool_str1381[sizeof("CSIBM037")];
    char stringpool_str1384[sizeof("CSISOLATINARABIC")];
    char stringpool_str1391[sizeof("CSIBM277")];
    char stringpool_str1393[sizeof("CSISOLATIN4")];
    char stringpool_str1398[sizeof("ISO-IR-157")];
    char stringpool_str1400[sizeof("ISO-IR-127")];
    char stringpool_str1405[sizeof("ISO8859-10")];
    char stringpool_str1410[sizeof("ASMO-708")];
    char stringpool_str1414[sizeof("ISO-2022-JP-3")];
    char stringpool_str1415[sizeof("UNICODE-1-1-UTF-7")];
    char stringpool_str1421[sizeof("MACGREEK")];
    char stringpool_str1424[sizeof("EBCDIC-INTERNATIONAL-500+EURO")];
    char stringpool_str1448[sizeof("ISO-CELTIC")];
    char stringpool_str1456[sizeof("CSISO87JISX0208")];
    char stringpool_str1460[sizeof("MACHEBREW")];
    char stringpool_str1461[sizeof("CSISOLATINCYRILLIC")];
    char stringpool_str1466[sizeof("UTF-32BE")];
    char stringpool_str1467[sizeof("ISO-IR-57")];
    char stringpool_str1469[sizeof("ISO-10646-UCS-2")];
    char stringpool_str1472[sizeof("BIG5-HKSCS:2001")];
    char stringpool_str1474[sizeof("CSEUCTW")];
    char stringpool_str1476[sizeof("CSISOLATIN2")];
    char stringpool_str1479[sizeof("MS-EE")];
    char stringpool_str1483[sizeof("UTF-32LE")];
    char stringpool_str1492[sizeof("US-ASCII")];
    char stringpool_str1497[sizeof("MACUKRAINE")];
    char stringpool_str1499[sizeof("BIG5-HKSCS:2008")];
    char stringpool_str1502[sizeof("BIG5-HKSCS:2004")];
    char stringpool_str1503[sizeof("ISO8859-3")];
    char stringpool_str1504[sizeof("ISO-10646-UCS-4")];
    char stringpool_str1511[sizeof("CSISOLATIN3")];
    char stringpool_str1513[sizeof("ISO8859-13")];
    char stringpool_str1519[sizeof("CSUNICODE11UTF7")];
    char stringpool_str1523[sizeof("MS_KANJI")];
    char stringpool_str1528[sizeof("CSUNICODE")];
    char stringpool_str1531[sizeof("IBM-1097")];
    char stringpool_str1534[sizeof("GB_1988-80")];
    char stringpool_str1540[sizeof("EBCDIC-CP-IS")];
    char stringpool_str1545[sizeof("CSISOLATIN6")];
    char stringpool_str1549[sizeof("CCSID01149")];
    char stringpool_str1554[sizeof("ISO-IR-87")];
    char stringpool_str1557[sizeof("MACTURKISH")];
    char stringpool_str1558[sizeof("CSISO2022KR")];
    char stringpool_str1575[sizeof("EBCDIC-GREEK")];
    char stringpool_str1580[sizeof("WINDOWS-1256")];
    char stringpool_str1581[sizeof("WINDOWS-1255")];
    char stringpool_str1583[sizeof("WINDOWS-1252")];
    char stringpool_str1586[sizeof("MS-TURK")];
    char stringpool_str1588[sizeof("WINDOWS-1251")];
    char stringpool_str1589[sizeof("CSVISCII")];
    char stringpool_str1590[sizeof("CSKSC56011987")];
    char stringpool_str1598[sizeof("EBCDIC-CP-DK")];
    char stringpool_str1603[sizeof("CSIBM297")];
    char stringpool_str1604[sizeof("KS_C_5601-1987")];
    char stringpool_str1607[sizeof("EBCDIC-US-37+EURO")];
    char stringpool_str1609[sizeof("EBCDIC-ES-284+EURO")];
    char stringpool_str1615[sizeof("WINDOWS-1258")];
    char stringpool_str1618[sizeof("WINDOWS-1254")];
    char stringpool_str1636[sizeof("BIGFIVE")];
    char stringpool_str1643[sizeof("CSIBM01149")];
    char stringpool_str1645[sizeof("WINDOWS-1250")];
    char stringpool_str1646[sizeof("CSMACINTOSH")];
    char stringpool_str1647[sizeof("ISO8859-7")];
    char stringpool_str1651[sizeof("EUC-JIS-2004")];
    char stringpool_str1656[sizeof("EBCDIC-DE-273+EURO")];
    char stringpool_str1663[sizeof("ISO-2022-JP-MS")];
    char stringpool_str1666[sizeof("ISO-2022-KR")];
    char stringpool_str1676[sizeof("EBCDIC-CP-ROECE")];
    char stringpool_str1685[sizeof("CSISOLATINHEBREW")];
    char stringpool_str1691[sizeof("CSHALFWIDTHKATAKANA")];
    char stringpool_str1695[sizeof("UCS-2-INTERNAL")];
    char stringpool_str1699[sizeof("WINDOWS-1253")];
    char stringpool_str1729[sizeof("EBCDIC-DK-277+EURO")];
    char stringpool_str1730[sizeof("UCS-4-INTERNAL")];
    char stringpool_str1737[sizeof("ISO646-US")];
    char stringpool_str1739[sizeof("ISO_8859-9")];
    char stringpool_str1740[sizeof("CSISOLATINGREEK")];
    char stringpool_str1747[sizeof("ISO_8859-9:1989")];
    char stringpool_str1763[sizeof("UCS-2-SWAPPED")];
    char stringpool_str1770[sizeof("ISO-8859-9")];
    char stringpool_str1771[sizeof("WINDOWS-1257")];
    char stringpool_str1798[sizeof("UCS-4-SWAPPED")];
    char stringpool_str1816[sizeof("KS_C_5601-1989")];
    char stringpool_str1822[sizeof("ISO-IR-159")];
    char stringpool_str1823[sizeof("BIG5-HKSCS")];
    char stringpool_str1833[sizeof("WINDOWS-874")];
    char stringpool_str1859[sizeof("ISO-IR-149")];
    char stringpool_str1867[sizeof("BIG5-HKSCS:1999")];
    char stringpool_str1886[sizeof("ISO-IR-109")];
    char stringpool_str1895[sizeof("EBCDIC-CP-ES")];
    char stringpool_str1915[sizeof("BIG-FIVE")];
    char stringpool_str1939[sizeof("EBCDIC-IS-871+EURO")];
    char stringpool_str1950[sizeof("EBCDIC-CP-US")];
    char stringpool_str1968[sizeof("BIG5HKSCS")];
    char stringpool_str2002[sizeof("EXTENDED_UNIX_CODE_PACKED_FORMAT_FOR_JAPANESE")];
    char stringpool_str2003[sizeof("MS-GREEK")];
    char stringpool_str2012[sizeof("ISO-IR-179")];
    char stringpool_str2069[sizeof("CSSHIFTJIS")];
    char stringpool_str2071[sizeof("ISO8859-9")];
    char stringpool_str2136[sizeof("SHIFT_JISX0213")];
    char stringpool_str2224[sizeof("ISO-IR-199")];
    char stringpool_str2255[sizeof("SHIFT_JIS")];
    char stringpool_str2281[sizeof("WINDOWS-936")];
    char stringpool_str2286[sizeof("SHIFT-JIS")];
    char stringpool_str2302[sizeof("SHIFT_JIS-2004")];
    char stringpool_str2582[sizeof("CSEUCPKDFMTJAPANESE")];
  };
static const struct stringpool_t stringpool_contents =
  {
    "L6",
    "L5",
    "L2",
    "L1",
    "866",
    "ATARI",
    "865",
    "855",
    "862",
    "852",
    "CP1256",
    "CP1255",
    "CP1166",
    "CP1156",
    "CP1252",
    "CP1155",
    "861",
    "CP1125",
    "CP1162",
    "CP1122",
    "CP1251",
    "CP1112",
    "CP1161",
    "CP866",
    "CP856",
    "CP865",
    "CP855",
    "CP285",
    "CP862",
    "CP852",
    "R8",
    "CP861",
    "ARABIC",
    "JP",
    "L8",
    "LATIN6",
    "LATIN5",
    "L4",
    "LATIN2",
    "PT154",
    "LATIN1",
    "CP1026",
    "CP1025",
    "CP1258",
    "CP154",
    "CN",
    "CP1158",
    "CP1254",
    "CP50221",
    "CP1164",
    "CP1154",
    "PTCP154",
    "CP1124",
    "HZ",
    "CP858",
    "CP864",
    "CP1046",
    "CP284",
    "CP424",
    "CP01146",
    "CP01145",
    "L10",
    "LATIN8",
    "CP01142",
    "LATIN4",
    "860",
    "850",
    "CP01141",
    "CP1132",
    "CP1250",
    "CP1361",
    "CP1160",
    "CP1131",
    "JOHAB",
    "CP860",
    "CP850",
    "CP280",
    "X0212",
    "CP16804",
    "IBM1166",
    "IBM1156",
    "IBM1165",
    "IBM1155",
    "CP01148",
    "IBM1162",
    "CP500",
    "LATIN10",
    "IBM1122",
    "CP01144",
    "CP880",
    "IBM1112",
    "IBM1161",
    "IBM866",
    "IBM865",
    "IBM855",
    "IBM285",
    "IBM862",
    "IBM852",
    "IBM425",
    "IBM282",
    "CP12712",
    "BIG5",
    "IBM861",
    "L3",
    "MAC",
    "IBM1146",
    "CP875",
    "IBM1145",
    "IBM1142",
    "X0201",
    "CP871",
    "IBM1141",
    "863",
    "IBM1026",
    "IBM1025",
    "CP1253",
    "CP01140",
    "CP1163",
    "CP1153",
    "CP1123",
    "IBM1158",
    "CP278",
    "IBM1164",
    "IBM1154",
    "CP1130",
    "CP863",
    "CP853",
    "UHC",
    "CP423",
    "IBM864",
    "IBM284",
    "IBM424",
    "X0208",
    "LATIN3",
    "IBM1148",
    "CP874",
    "IBM1144",
    "ROMAN8",
    "CYRILLIC",
    "IBM1132",
    "MACTHAI",
    "IBM1160",
    "IBM16804",
    "IBM01146",
    "IBM01144",
    "IBM01142",
    "IBM860",
    "IBM850",
    "IBM280",
    "CP870",
    "IBM1140",
    "GB2312",
    "CP01143",
    "IBM01140",
    "IBM500",
    "L7",
    "IBM880",
    "CP1133",
    "ASCII",
    "CP775",
    "857",
    "ATARIST",
    "IBM838",
    "CP1257",
    "IBM875",
    "CP1157",
    "CP922",
    "IBM871",
    "IBM01143",
    "CP857",
    "IBM01141",
    "IBM12712",
    "IBM1163",
    "IBM1153",
    "TDS565",
    "IBM1123",
    "MACCYRILLIC",
    "CP273",
    "IBM278",
    "IBM1130",
    "LATIN7",
    "IBM863",
    "MACROMANIA",
    "IBM423",
    "RK1048",
    "IBM-285",
    "IBM1143",
    "IBM-425",
    "IBM-282",
    "MACROMAN",
    "EUCJP",
    "CP905",
    "BIG-5",
    "CSPCP852",
    "IBM-1166",
    "IBM-1156",
    "IBM-1164",
    "IBM-1154",
    "IBM-1162",
    "TIS620",
    "IBM-1122",
    "IBM01145",
    "IBM-1112",
    "CP1047",
    "EUCCN",
    "CP367",
    "CP01147",
    "CP-GR",
    "IBM-1160",
    "437",
    "IBM-1146",
    "IBM-1144",
    "CP1137",
    "IBM-1142",
    "CP936",
    "IBM870",
    "CP932",
    "CP950",
    "IBM-1026",
    "IBM-284",
    "CP437",
    "IBM-424",
    "CN-GB",
    "IBM-1140",
    "CN-BIG5",
    "IBM-16804",
    "IBM775",
    "IBM-1163",
    "IBM-1153",
    "IBM-1123",
    "CP037",
    "KOI8-R",
    "IBM-1161",
    "KOI8-T",
    "IBM1157",
    "MACARABIC",
    "GB18030",
    "JAVA",
    "IBM857",
    "IBM-280",
    "TCVN",
    "KOREAN",
    "IBM-1143",
    "IBM-1132",
    "IBM273",
    "HP-ROMAN8",
    "IBM-1141",
    "IBM01148",
    "CYRILLIC-ASIAN",
    "IBM1147",
    "GB18030:2005",
    "MACINTOSH",
    "CP00924",
    "CSBIG5",
    "IBM-500",
    "IBM-880",
    "CSIBM1162",
    "IBM-1130",
    "IBM-1165",
    "IBM-1155",
    "JIS0208",
    "CSIBM1161",
    "CSIBM866",
    "CSIBM864",
    "IBM905",
    "CSIBM284",
    "CSIBM424",
    "IBM-838",
    "CP4971",
    "IBM-875",
    "IBM924",
    "ISO646-JP",
    "TIS620.2533-1",
    "IBM-871",
    "IBM1047",
    "CSIBM860",
    "IBM-1145",
    "IBM367",
    "CSIBM280",
    "CP943",
    "CSIBM1026",
    "CSPTCP154",
    "EUCKR",
    "IBM-278",
    "CCSID00924",
    "IBM1137",
    "CSIBMTHAI",
    "CP737",
    "IBM-1025",
    "MACICELAND",
    "IBM01149",
    "CSIBM500",
    "IBM-423",
    "CSIBM880",
    "CCSID01146",
    "CCSID01145",
    "IBM437",
    "CSKOI8R",
    "CCSID01142",
    "TIS620.2533-0",
    "EUC-JP",
    "CSIBM863",
    "CCSID01141",
    "GB18030:2022",
    "KZ-1048",
    "CSIBM423",
    "CSIBM861",
    "ECMA-114",
    "TIS-620",
    "IBM037",
    "EBCDIC-LATIN9-EURO",
    "TIS620-0",
    "IBM277",
    "IBM00924",
    "EUC-CN",
    "IBM-12712",
    "IBM-1158",
    "CSASCII",
    "CCSID01148",
    "IBM-870",
    "CSIBM00924",
    "CCSID01144",
    "TIS620.2529-1",
    "WINBALTRIM",
    "UCS-2",
    "CP297",
    "BIG5-2003",
    "CSGB2312",
    "IBM-1148",
    "CSIBM865",
    "CSIBM855",
    "CSIBM285",
    "GBK",
    "CSIBM01145",
    "CSIBM01142",
    "CSHPROMAN8",
    "869",
    "MACCROATIAN",
    "MS-ARAB",
    "CSIBM01141",
    "IBM4971",
    "IBM-THAI",
    "CP1129",
    "CCSID01140",
    "CP869",
    "UTF-16",
    "CP819",
    "IBM-273",
    "JIS_X0201",
    "UCS-4",
    "CSIBM1163",
    "CP1097",
    "CSIBM870",
    "HZ-GB-2312",
    "IBM737",
    "VISCII",
    "US",
    "CSIBM01148",
    "MS-CYRL",
    "CSPC850MULTILINGUAL",
    "CSIBM273",
    "IBM-1149",
    "KOI8-U",
    "IBM01147",
    "ISO-IR-6",
    "KOI8-RU",
    "IBM-905",
    "CSISO58GB231280",
    "ISO_8859-6",
    "ISO_8859-5",
    "ISO-IR-226",
    "ISO_8859-2",
    "IBM-924",
    "UTF-8",
    "ISO_8859-15",
    "JIS_X0208",
    "ISO_8859-1",
    "DEC-KANJI",
    "ISO_8859-11",
    "CSIBM871",
    "ISO_8859-10:1992",
    "CSPC862LATINHEBREW",
    "CSISO159JISX02121990",
    "ISO-8859-6",
    "CP01149",
    "ISO-8859-5",
    "CSIBM01140",
    "CSISO2022CN",
    "ISO-8859-2",
    "EUC-KR",
    "IBM-CP1133",
    "ISO-8859-15",
    "ISO_8859-5:1988",
    "EBCDIC-CYRILLIC",
    "ISO-8859-1",
    "CCSID01143",
    "ISO_8859-14",
    "ISO_8859-15:1998",
    "ISO_8859-14:1998",
    "ISO-8859-11",
    "ISO646-CN",
    "UNICODELITTLE",
    "DECHANYU",
    "IBM297",
    "EBCDIC-GB-285+EURO",
    "JIS_X0212",
    "EBCDIC-NO-277+EURO",
    "UTF-32",
    "NEXTSTEP",
    "ISO_8859-8",
    "ISO_8859-4",
    "ISO_8859-8:1988",
    "ISO-8859-14",
    "ISO_8859-4:1988",
    "ISO-IR-166",
    "ISO_8859-10",
    "ISO-IR-165",
    "ISO-IR-126",
    "CP-IS",
    "IBM-037",
    "ISO-8859-8",
    "IBM-277",
    "CSUCS4",
    "ISO-8859-4",
    "ISO-2022-CN-EXT",
    "CSIBM869",
    "ECMA-118",
    "ISO-8859-10",
    "IBM869",
    "IBM819",
    "ISO_646.IRV:1991",
    "CSIBM1047",
    "MULELAO-1",
    "DECKANJI",
    "DEC-HANYU",
    "GREEK8",
    "IBM1097",
    "IBM1149",
    "IBM-1157",
    "CSIBM01143",
    "ISO-2022-CN",
    "EUCTW",
    "EBCDIC-FI-278+EURO",
    "JIS_C6220-1969-RO",
    "ISO-IR-14",
    "EBCDIC-FR-297+EURO",
    "ARMSCII-8",
    "EBCDIC-CP-NO",
    "MS936",
    "ISO_8859-3:1988",
    "ISO-IR-101",
    "JIS_X0212.1990-0",
    "TCVN5712-1",
    "ISO_8859-13",
    "EBCDIC-CP-NL",
    "IBM-1147",
    "CSIBM278",
    "KSC_5601",
    "GEORGIAN-ACADEMY",
    "CSPC775BALTIC",
    "CSEUCKR",
    "UNICODEBIG",
    "ISO-IR-148",
    "CCSID01147",
    "ISO-IR-144",
    "ISO-8859-13",
    "ISO_8859-6:1987",
    "ISO_8859-16",
    "ISO_8859-2:1987",
    "JIS_C6226-1983",
    "ISO_8859-1:1987",
    "MS-HEBR",
    "ISO_8859-16:2001",
    "CSKZ1048",
    "LATIN-9",
    "ISO-IR-110",
    "ISO-IR-58",
    "TCVN-5712",
    "ISO-8859-16",
    "IBM-1047",
    "CSPC8CODEPAGE1146",
    "ISO_8859-3",
    "EBCDIC-CP-CA",
    "EBCDIC-CP-GB",
    "EBCDIC-CP-IT",
    "EBCDIC-CP-GR",
    "ISO-IR-230",
    "CSISO2022JP",
    "GB_2312-80",
    "CSISO2022JP2",
    "IBM-1137",
    "SJIS",
    "HEBREW",
    "RISCOS-LATIN1",
    "CHINESE",
    "ELOT_928",
    "ISO-8859-3",
    "ISO-IR-138",
    "CSPC8CODEPAGE1144",
    "EBCDIC-CP-WT",
    "ISO-IR-100",
    "TCVN5712-1:1993",
    "CSIBM01147",
    "IBM-4971",
    "UNICODE-1-1",
    "CSIBM857",
    "JIS_X0208-1990",
    "ISO-IR-203",
    "C99",
    "IBM-297",
    "MACCENTRALEUROPE",
    "MS-ANSI",
    "ISO_8859-7:2003",
    "EBCDIC-CP-CH",
    "VISCII1.1-1",
    "UTF-7",
    "EBCDIC-CP-TR",
    "ANSI_X3.4-1986",
    "UCS-2BE",
    "CSIBM905",
    "ISO8859-6",
    "ISO8859-5",
    "ISO8859-2",
    "EBCDIC-CP-YU",
    "ISO8859-16",
    "ISO8859-15",
    "UCS-2LE",
    "ISO8859-1",
    "CP949",
    "GREEK",
    "JIS_X0208-1983",
    "ISO8859-11",
    "ANSI_X3.4-1968",
    "ISO-2022-JP",
    "EBCDIC-IT-280+EURO",
    "UCS-4BE",
    "ISO-2022-JP-2",
    "CSISO14JISC6220RO",
    "CSISO57GB1988",
    "ISO-2022-JP-1",
    "EBCDIC-CP-HE",
    "EBCDIC-CP-SE",
    "UCS-4LE",
    "ISO_8859-7",
    "JIS_X0212-1990",
    "ISO_8859-7:1987",
    "EUC-TW",
    "EBCDIC-CP-BE",
    "CSUNICODE11",
    "EBCDIC-CP-FI",
    "ISO8859-8",
    "ISO-2022-JP-2004",
    "EBCDIC-CP-FR",
    "ISO8859-4",
    "ISO-8859-7",
    "EUC-JISX0213",
    "STRK1048-2002",
    "ISO8859-14",
    "UTF-16BE",
    "CSISOLATIN5",
    "CSPC8CODEPAGE437",
    "CSISOLATIN1",
    "UTF-16LE",
    "GEORGIAN-PS",
    "CN-GB-ISOIR165",
    "EBCDIC-SE-278+EURO",
    "JISX0201-1976",
    "CSIBM037",
    "CSISOLATINARABIC",
    "CSIBM277",
    "CSISOLATIN4",
    "ISO-IR-157",
    "ISO-IR-127",
    "ISO8859-10",
    "ASMO-708",
    "ISO-2022-JP-3",
    "UNICODE-1-1-UTF-7",
    "MACGREEK",
    "EBCDIC-INTERNATIONAL-500+EURO",
    "ISO-CELTIC",
    "CSISO87JISX0208",
    "MACHEBREW",
    "CSISOLATINCYRILLIC",
    "UTF-32BE",
    "ISO-IR-57",
    "ISO-10646-UCS-2",
    "BIG5-HKSCS:2001",
    "CSEUCTW",
    "CSISOLATIN2",
    "MS-EE",
    "UTF-32LE",
    "US-ASCII",
    "MACUKRAINE",
    "BIG5-HKSCS:2008",
    "BIG5-HKSCS:2004",
    "ISO8859-3",
    "ISO-10646-UCS-4",
    "CSISOLATIN3",
    "ISO8859-13",
    "CSUNICODE11UTF7",
    "MS_KANJI",
    "CSUNICODE",
    "IBM-1097",
    "GB_1988-80",
    "EBCDIC-CP-IS",
    "CSISOLATIN6",
    "CCSID01149",
    "ISO-IR-87",
    "MACTURKISH",
    "CSISO2022KR",
    "EBCDIC-GREEK",
    "WINDOWS-1256",
    "WINDOWS-1255",
    "WINDOWS-1252",
    "MS-TURK",
    "WINDOWS-1251",
    "CSVISCII",
    "CSKSC56011987",
    "EBCDIC-CP-DK",
    "CSIBM297",
    "KS_C_5601-1987",
    "EBCDIC-US-37+EURO",
    "EBCDIC-ES-284+EURO",
    "WINDOWS-1258",
    "WINDOWS-1254",
    "BIGFIVE",
    "CSIBM01149",
    "WINDOWS-1250",
    "CSMACINTOSH",
    "ISO8859-7",
    "EUC-JIS-2004",
    "EBCDIC-DE-273+EURO",
    "ISO-2022-JP-MS",
    "ISO-2022-KR",
    "EBCDIC-CP-ROECE",
    "CSISOLATINHEBREW",
    "CSHALFWIDTHKATAKANA",
    "UCS-2-INTERNAL",
    "WINDOWS-1253",
    "EBCDIC-DK-277+EURO",
    "UCS-4-INTERNAL",
    "ISO646-US",
    "ISO_8859-9",
    "CSISOLATINGREEK",
    "ISO_8859-9:1989",
    "UCS-2-SWAPPED",
    "ISO-8859-9",
    "WINDOWS-1257",
    "UCS-4-SWAPPED",
    "KS_C_5601-1989",
    "ISO-IR-159",
    "BIG5-HKSCS",
    "WINDOWS-874",
    "ISO-IR-149",
    "BIG5-HKSCS:1999",
    "ISO-IR-109",
    "EBCDIC-CP-ES",
    "BIG-FIVE",
    "EBCDIC-IS-871+EURO",
    "EBCDIC-CP-US",
    "BIG5HKSCS",
    "EXTENDED_UNIX_CODE_PACKED_FORMAT_FOR_JAPANESE",
    "MS-GREEK",
    "ISO-IR-179",
    "CSSHIFTJIS",
    "ISO8859-9",
    "SHIFT_JISX0213",
    "ISO-IR-199",
    "SHIFT_JIS",
    "WINDOWS-936",
    "SHIFT-JIS",
    "SHIFT_JIS-2004",
    "CSEUCPKDFMTJAPANESE"
  };
#define stringpool ((const char *) &stringpool_contents)

static const struct alias aliases[] =
  {
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 134 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str22, ei_iso8859_10},
    {-1},
#line 126 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str24, ei_iso8859_9},
    {-1}, {-1}, {-1},
#line 68 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str28, ei_iso8859_2},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 60 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str38, ei_iso8859_1},
    {-1}, {-1}, {-1},
#line 207 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str42, ei_cp866},
#line 683 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str43, ei_atarist},
#line 424 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str44, ei_cp865},
#line 399 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str45, ei_cp855},
    {-1}, {-1},
#line 203 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str48, ei_cp862},
#line 394 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str49, ei_cp852},
#line 189 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str50, ei_cp1256},
    {-1},
#line 186 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str52, ei_cp1255},
    {-1},
#line 663 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str54, ei_ebcdic1166},
#line 646 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str55, ei_ebcdic1156},
#line 177 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str56, ei_cp1252},
#line 643 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str57, ei_ebcdic1155},
#line 412 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str58, ei_cp861},
#line 431 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str59, ei_cp1125},
#line 375 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str60, ei_cp1162},
    {-1}, {-1},
#line 550 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str63, ei_ebcdic1122},
    {-1}, {-1},
#line 174 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str66, ei_cp1251},
    {-1},
#line 547 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str68, ei_ebcdic1112},
    {-1},
#line 371 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str70, ei_cp1161},
#line 205 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str71, ei_cp866},
#line 365 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str72, ei_cp856},
#line 422 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str73, ei_cp865},
#line 397 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str74, ei_cp855},
    {-1},
#line 469 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str76, ei_ebcdic285},
#line 201 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str77, ei_cp862},
#line 392 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str78, ei_cp852},
    {-1},
#line 227 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str80, ei_hp_roman8},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 410 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str87, ei_cp861},
#line 100 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str88, ei_iso8859_6},
    {-1}, {-1},
#line 265 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str91, ei_iso646_jp},
#line 151 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str92, ei_iso8859_14},
#line 133 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str93, ei_iso8859_10},
    {-1},
#line 125 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str95, ei_iso8859_9},
    {-1}, {-1},
#line 84 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str98, ei_iso8859_4},
#line 67 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str99, ei_iso8859_2},
    {-1}, {-1}, {-1},
#line 234 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str103, ei_pt154},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 59 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str109, ei_iso8859_1},
    {-1}, {-1}, {-1}, {-1},
#line 536 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str114, ei_ebcdic1026},
    {-1},
#line 533 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str116, ei_ebcdic1025},
    {-1}, {-1}, {-1},
#line 195 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str120, ei_cp1258},
#line 236 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str121, ei_pt154},
#line 288 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str122, ei_iso646_cn},
    {-1}, {-1},
#line 652 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str125, ei_ebcdic1158},
#line 183 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str126, ei_cp1254},
    {-1},
#line 317 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str128, ei_iso2022_jpms},
    {-1},
#line 658 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str130, ei_ebcdic1164},
#line 640 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str131, ei_ebcdic1154},
#line 235 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str132, ei_pt154},
#line 369 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str133, ei_cp1124},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 334 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str141, ei_hz},
#line 405 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str142, ei_cp858},
    {-1}, {-1}, {-1}, {-1},
#line 419 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str147, ei_cp864},
    {-1},
#line 368 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str149, ei_cp1046},
#line 464 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str150, ei_ebcdic284},
    {-1}, {-1},
#line 484 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str153, ei_ebcdic424},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 611 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str159, ei_ebcdic1146},
    {-1},
#line 604 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str161, ei_ebcdic1145},
#line 165 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str162, ei_iso8859_16},
#line 150 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str163, ei_iso8859_14},
    {-1},
#line 581 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str165, ei_ebcdic1142},
    {-1}, {-1}, {-1},
#line 83 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str169, ei_iso8859_4},
    {-1}, {-1},
#line 408 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str172, ei_cp860},
#line 199 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str173, ei_cp850},
    {-1},
#line 574 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str175, ei_ebcdic1141},
    {-1}, {-1}, {-1},
#line 559 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str179, ei_ebcdic1132},
#line 171 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str180, ei_cp1250},
#line 358 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str181, ei_johab},
    {-1}, {-1},
#line 655 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str184, ei_ebcdic1160},
    {-1}, {-1}, {-1}, {-1},
#line 209 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str189, ei_cp1131},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 357 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str200, ei_johab},
#line 406 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str201, ei_cp860},
#line 197 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str202, ei_cp850},
    {-1},
#line 457 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str204, ei_ebcdic280},
    {-1}, {-1},
#line 282 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str207, ei_jisx0212},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 672 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str224, ei_ebcdic16804},
#line 662 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str225, ei_ebcdic1166},
#line 645 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str226, ei_ebcdic1156},
#line 660 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str227, ei_ebcdic1165},
#line 642 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str228, ei_ebcdic1155},
#line 625 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str229, ei_ebcdic1148},
    {-1},
#line 376 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str231, ei_cp1162},
#line 491 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str232, ei_ebcdic500},
#line 164 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str233, ei_iso8859_16},
#line 549 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str234, ei_ebcdic1122},
#line 597 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str235, ei_ebcdic1144},
#line 516 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str236, ei_ebcdic880},
    {-1}, {-1},
#line 546 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str239, ei_ebcdic1112},
    {-1},
#line 372 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str241, ei_cp1161},
#line 206 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str242, ei_cp866},
    {-1},
#line 423 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str244, ei_cp865},
#line 398 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str245, ei_cp855},
    {-1},
#line 468 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str247, ei_ebcdic285},
#line 202 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str248, ei_cp862},
#line 393 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str249, ei_cp852},
#line 488 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str250, ei_ebcdic425},
#line 461 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str251, ei_ebcdic282},
    {-1}, {-1}, {-1}, {-1},
#line 669 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str256, ei_ebcdic12712},
#line 339 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str257, ei_ces_big5},
#line 411 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str258, ei_cp861},
    {-1},
#line 76 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str260, ei_iso8859_3},
#line 212 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str261, ei_mac_roman},
    {-1},
#line 608 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str263, ei_ebcdic1146},
#line 512 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str264, ei_ebcdic875},
#line 601 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str265, ei_ebcdic1145},
    {-1}, {-1}, {-1},
#line 578 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str269, ei_ebcdic1142},
    {-1}, {-1}, {-1}, {-1},
#line 269 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str274, ei_jisx0201},
    {-1}, {-1}, {-1},
#line 507 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str278, ei_ebcdic871},
#line 571 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str279, ei_ebcdic1141},
#line 417 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str280, ei_cp863},
    {-1}, {-1}, {-1}, {-1},
#line 535 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str285, ei_ebcdic1026},
    {-1},
#line 532 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str287, ei_ebcdic1025},
#line 180 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str288, ei_cp1253},
#line 567 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str289, ei_ebcdic1140},
    {-1}, {-1},
#line 379 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str292, ei_cp1163},
#line 637 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str293, ei_ebcdic1153},
    {-1},
#line 553 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str295, ei_ebcdic1123},
#line 651 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str296, ei_ebcdic1158},
    {-1}, {-1}, {-1},
#line 451 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str300, ei_ebcdic278},
#line 657 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str301, ei_ebcdic1164},
#line 639 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str302, ei_ebcdic1154},
#line 556 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str303, ei_ebcdic1130},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 415 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str309, ei_cp863},
#line 396 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str310, ei_cp853},
#line 356 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str311, ei_cp949},
    {-1}, {-1}, {-1},
#line 479 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str315, ei_ebcdic423},
    {-1}, {-1},
#line 420 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str318, ei_cp864},
    {-1}, {-1},
#line 463 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str321, ei_ebcdic284},
    {-1}, {-1},
#line 483 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str324, ei_ebcdic424},
    {-1}, {-1}, {-1},
#line 275 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str328, ei_jisx0208},
    {-1}, {-1},
#line 75 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str331, ei_iso8859_3},
    {-1},
#line 622 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str333, ei_ebcdic1148},
    {-1}, {-1}, {-1}, {-1},
#line 253 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str338, ei_cp874},
#line 594 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str339, ei_ebcdic1144},
    {-1},
#line 226 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str341, ei_hp_roman8},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 91 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str347, ei_iso8859_5},
    {-1}, {-1},
#line 558 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str350, ei_ebcdic1132},
#line 224 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str351, ei_mac_thai},
    {-1}, {-1}, {-1},
#line 654 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str355, ei_ebcdic1160},
    {-1},
#line 671 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str357, ei_ebcdic16804},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 609 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str365, ei_ebcdic1146},
    {-1}, {-1},
#line 595 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str368, ei_ebcdic1144},
    {-1}, {-1},
#line 579 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str371, ei_ebcdic1142},
#line 407 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str372, ei_cp860},
#line 198 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str373, ei_cp850},
    {-1},
#line 456 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str375, ei_ebcdic280},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 501 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str392, ei_ebcdic870},
#line 564 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str393, ei_ebcdic1140},
    {-1},
#line 320 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str395, ei_euc_cn},
    {-1},
#line 589 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str397, ei_ebcdic1143},
#line 565 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str398, ei_ebcdic1140},
    {-1}, {-1}, {-1}, {-1},
#line 490 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str403, ei_ebcdic500},
#line 144 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str404, ei_iso8859_13},
    {-1}, {-1},
#line 515 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str407, ei_ebcdic880},
    {-1}, {-1}, {-1},
#line 244 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str411, ei_cp1133},
    {-1},
#line 13 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str413, ei_ascii},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 389 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str420, ei_cp775},
    {-1}, {-1}, {-1}, {-1},
#line 403 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str425, ei_cp857},
    {-1}, {-1},
#line 682 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str428, ei_atarist},
    {-1}, {-1},
#line 496 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str431, ei_ebcdic838},
#line 192 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str432, ei_cp1257},
    {-1}, {-1},
#line 511 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str435, ei_ebcdic875},
    {-1},
#line 649 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str437, ei_ebcdic1157},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 366 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str448, ei_cp922},
#line 506 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str449, ei_ebcdic871},
#line 587 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str450, ei_ebcdic1143},
    {-1}, {-1}, {-1},
#line 401 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str454, ei_cp857},
    {-1}, {-1},
#line 572 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str457, ei_ebcdic1141},
    {-1}, {-1}, {-1}, {-1},
#line 668 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str462, ei_ebcdic12712},
#line 380 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str463, ei_cp1163},
#line 636 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str464, ei_ebcdic1153},
#line 680 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str465, ei_tds565},
#line 552 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str466, ei_ebcdic1123},
#line 218 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str467, ei_mac_cyrillic},
#line 442 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str468, ei_ebcdic273},
    {-1}, {-1},
#line 450 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str471, ei_ebcdic278},
    {-1}, {-1},
#line 555 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str474, ei_ebcdic1130},
#line 143 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str475, ei_iso8859_13},
    {-1}, {-1}, {-1}, {-1},
#line 416 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str480, ei_cp863},
    {-1},
#line 217 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str482, ei_mac_romania},
    {-1}, {-1}, {-1},
#line 478 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str486, ei_ebcdic423},
    {-1}, {-1}, {-1}, {-1},
#line 239 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str491, ei_rk1048},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 467 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str499, ei_ebcdic285},
    {-1},
#line 586 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str501, ei_ebcdic1143},
#line 487 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str502, ei_ebcdic425},
#line 460 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str503, ei_ebcdic282},
#line 210 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str504, ei_mac_roman},
#line 302 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str505, ei_euc_jp},
#line 521 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str506, ei_ebcdic905},
    {-1}, {-1},
#line 340 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str509, ei_ces_big5},
    {-1},
#line 395 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str511, ei_cp852},
#line 661 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str512, ei_ebcdic1166},
#line 644 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str513, ei_ebcdic1156},
    {-1},
#line 656 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str515, ei_ebcdic1164},
#line 638 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str516, ei_ebcdic1154},
    {-1},
#line 377 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str518, ei_cp1162},
    {-1},
#line 247 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str520, ei_tis620},
#line 548 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str521, ei_ebcdic1122},
#line 602 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str522, ei_ebcdic1145},
    {-1}, {-1}, {-1},
#line 545 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str526, ei_ebcdic1112},
    {-1}, {-1}, {-1}, {-1},
#line 540 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str531, ei_ebcdic1047},
    {-1}, {-1}, {-1}, {-1},
#line 319 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str536, ei_euc_cn},
#line 19 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str537, ei_ascii},
    {-1}, {-1}, {-1},
#line 618 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str541, ei_ebcdic1147},
#line 429 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str542, ei_cp869},
    {-1}, {-1},
#line 653 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str545, ei_ebcdic1160},
#line 385 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str546, ei_cp437},
    {-1}, {-1}, {-1},
#line 607 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str550, ei_ebcdic1146},
    {-1}, {-1},
#line 593 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str553, ei_ebcdic1144},
    {-1},
#line 562 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str555, ei_ebcdic1137},
#line 577 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str556, ei_ebcdic1142},
    {-1},
#line 325 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str558, ei_cp936},
    {-1}, {-1}, {-1}, {-1},
#line 500 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str563, ei_ebcdic870},
#line 310 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str564, ei_cp932},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 345 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str570, ei_cp950},
    {-1},
#line 534 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str572, ei_ebcdic1026},
#line 462 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str573, ei_ebcdic284},
    {-1},
#line 383 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str575, ei_cp437},
#line 482 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str576, ei_ebcdic424},
    {-1},
#line 321 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str578, ei_euc_cn},
    {-1}, {-1}, {-1}, {-1},
#line 563 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str583, ei_ebcdic1140},
#line 343 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str584, ei_ces_big5},
#line 670 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str585, ei_ebcdic16804},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 390 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str591, ei_cp775},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 381 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str597, ei_cp1163},
#line 635 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str598, ei_ebcdic1153},
    {-1},
#line 551 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str600, ei_ebcdic1123},
    {-1},
#line 434 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str602, ei_ebcdic037},
#line 167 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str603, ei_koi8_r},
#line 373 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str604, ei_cp1161},
    {-1}, {-1},
#line 233 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str607, ei_koi8_t},
#line 648 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str608, ei_ebcdic1157},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 223 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str615, ei_mac_arabic},
    {-1}, {-1},
#line 328 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str618, ei_gb18030_2005},
    {-1}, {-1},
#line 52 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str621, ei_java},
    {-1}, {-1}, {-1},
#line 402 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str625, ei_cp857},
    {-1},
#line 455 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str627, ei_ebcdic280},
    {-1},
#line 258 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str629, ei_tcvn},
    {-1}, {-1}, {-1}, {-1},
#line 300 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str634, ei_ksc5601},
#line 585 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str635, ei_ebcdic1143},
    {-1},
#line 557 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str637, ei_ebcdic1132},
    {-1},
#line 441 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str639, ei_ebcdic273},
    {-1},
#line 225 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str641, ei_hp_roman8},
#line 570 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str642, ei_ebcdic1141},
#line 623 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str643, ei_ebcdic1148},
#line 237 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str644, ei_pt154},
#line 615 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str645, ei_ebcdic1147},
    {-1},
#line 329 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str647, ei_gb18030_2005},
#line 211 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str648, ei_mac_roman},
    {-1}, {-1}, {-1},
#line 528 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str652, ei_ebcdic924},
#line 344 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str653, ei_ces_big5},
    {-1},
#line 489 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str655, ei_ebcdic500},
    {-1}, {-1}, {-1},
#line 514 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str659, ei_ebcdic880},
    {-1}, {-1},
#line 378 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str662, ei_cp1162},
    {-1},
#line 554 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str664, ei_ebcdic1130},
    {-1}, {-1}, {-1}, {-1},
#line 659 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str669, ei_ebcdic1165},
#line 641 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str670, ei_ebcdic1155},
#line 274 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str671, ei_jisx0208},
#line 374 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str672, ei_cp1161},
#line 208 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str673, ei_cp866},
    {-1}, {-1},
#line 421 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str676, ei_cp864},
#line 520 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str677, ei_ebcdic905},
    {-1},
#line 466 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str679, ei_ebcdic284},
    {-1}, {-1},
#line 486 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str682, ei_ebcdic424},
#line 495 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str683, ei_ebcdic838},
    {-1}, {-1},
#line 666 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str686, ei_ebcdic4971},
#line 510 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str687, ei_ebcdic875},
    {-1},
#line 525 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str689, ei_ebcdic924},
    {-1}, {-1}, {-1}, {-1},
#line 263 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str694, ei_iso646_jp},
    {-1},
#line 251 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str696, ei_tis620},
    {-1}, {-1}, {-1}, {-1},
#line 505 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str701, ei_ebcdic871},
#line 539 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str702, ei_ebcdic1047},
    {-1}, {-1}, {-1},
#line 409 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str706, ei_cp860},
#line 600 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str707, ei_ebcdic1145},
#line 20 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str708, ei_ascii},
#line 459 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str709, ei_ebcdic280},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 367 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str715, ei_cp943},
#line 537 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str716, ei_ebcdic1026},
    {-1},
#line 238 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str718, ei_pt154},
    {-1}, {-1},
#line 353 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str721, ei_euc_kr},
    {-1},
#line 449 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str723, ei_ebcdic278},
#line 527 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str724, ei_ebcdic924},
    {-1},
#line 561 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str726, ei_ebcdic1137},
#line 498 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str727, ei_ebcdic838},
#line 387 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str728, ei_cp737},
#line 531 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str729, ei_ebcdic1025},
    {-1}, {-1},
#line 215 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str732, ei_mac_iceland},
    {-1}, {-1},
#line 630 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str735, ei_ebcdic1149},
    {-1},
#line 494 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str737, ei_ebcdic500},
#line 477 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str738, ei_ebcdic423},
    {-1}, {-1},
#line 518 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str741, ei_ebcdic880},
    {-1},
#line 610 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str743, ei_ebcdic1146},
    {-1},
#line 603 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str745, ei_ebcdic1145},
#line 384 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str746, ei_cp437},
#line 168 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str747, ei_koi8_r},
    {-1},
#line 580 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str749, ei_ebcdic1142},
    {-1}, {-1}, {-1},
#line 250 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str753, ei_tis620},
    {-1}, {-1}, {-1},
#line 301 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str757, ei_euc_jp},
#line 418 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str758, ei_cp863},
#line 573 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str759, ei_ebcdic1141},
#line 330 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str760, ei_gb18030_2022},
#line 241 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str761, ei_rk1048},
    {-1}, {-1},
#line 481 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str764, ei_ebcdic423},
#line 414 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str765, ei_cp861},
    {-1}, {-1}, {-1},
#line 98 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str769, ei_iso8859_6},
    {-1}, {-1},
#line 246 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str772, ei_tis620},
#line 433 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str773, ei_ebcdic037},
    {-1}, {-1},
#line 529 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str776, ei_ebcdic924},
#line 248 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str777, ei_tis620},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 445 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str783, ei_ebcdic277},
    {-1},
#line 526 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str785, ei_ebcdic924},
    {-1}, {-1},
#line 318 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str788, ei_euc_cn},
    {-1},
#line 667 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str790, ei_ebcdic12712},
#line 650 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str791, ei_ebcdic1158},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 22 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str809, ei_ascii},
    {-1}, {-1}, {-1},
#line 624 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str813, ei_ebcdic1148},
    {-1},
#line 499 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str815, ei_ebcdic870},
    {-1}, {-1},
#line 530 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str818, ei_ebcdic924},
#line 596 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str819, ei_ebcdic1144},
#line 249 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str820, ei_tis620},
    {-1},
#line 194 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str822, ei_cp1257},
#line 24 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str823, ei_ucs2},
#line 474 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str824, ei_ebcdic297},
#line 679 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str825, ei_big5_2003},
#line 322 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str826, ei_euc_cn},
    {-1},
#line 621 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str828, ei_ebcdic1148},
    {-1},
#line 425 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str830, ei_cp865},
#line 400 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str831, ei_cp855},
    {-1},
#line 471 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str833, ei_ebcdic285},
    {-1}, {-1}, {-1},
#line 324 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str837, ei_ces_gbk},
    {-1},
#line 606 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str839, ei_ebcdic1145},
    {-1}, {-1}, {-1},
#line 584 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str843, ei_ebcdic1142},
    {-1}, {-1},
#line 228 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str846, ei_hp_roman8},
    {-1},
#line 428 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str848, ei_cp869},
    {-1},
#line 216 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str850, ei_mac_croatian},
#line 191 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str851, ei_cp1256},
    {-1},
#line 576 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str853, ei_ebcdic1141},
    {-1}, {-1}, {-1},
#line 665 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str857, ei_ebcdic4971},
    {-1}, {-1},
#line 497 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str860, ei_ebcdic838},
    {-1}, {-1},
#line 370 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str863, ei_cp1129},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 566 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str873, ei_ebcdic1140},
    {-1}, {-1}, {-1},
#line 426 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str877, ei_cp869},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 38 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str883, ei_utf16},
    {-1},
#line 57 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str885, ei_iso8859_1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 440 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str891, ei_ebcdic273},
#line 267 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str892, ei_jisx0201},
#line 33 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str893, ei_ucs4},
#line 382 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str894, ei_cp1163},
    {-1},
#line 544 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str896, ei_ebcdic1097},
#line 504 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str897, ei_ebcdic870},
#line 335 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str898, ei_hz},
#line 388 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str899, ei_cp737},
    {-1},
#line 255 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str901, ei_viscii},
    {-1},
#line 21 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str903, ei_ascii},
    {-1}, {-1}, {-1},
#line 627 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str907, ei_ebcdic1148},
    {-1}, {-1}, {-1}, {-1},
#line 176 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str912, ei_cp1251},
    {-1},
#line 200 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str914, ei_cp850},
    {-1}, {-1},
#line 443 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str917, ei_ebcdic273},
    {-1}, {-1},
#line 628 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str920, ei_ebcdic1149},
#line 169 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str921, ei_koi8_u},
    {-1}, {-1},
#line 616 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str924, ei_ebcdic1147},
    {-1}, {-1},
#line 16 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str927, ei_ascii},
#line 170 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str928, ei_koi8_ru},
#line 519 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str929, ei_ebcdic905},
    {-1},
#line 292 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str931, ei_gb2312},
    {-1},
#line 95 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str933, ei_iso8859_6},
    {-1},
#line 88 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str935, ei_iso8859_5},
    {-1},
#line 163 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str937, ei_iso8859_16},
    {-1},
#line 64 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str939, ei_iso8859_2},
    {-1},
#line 524 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str941, ei_ebcdic924},
    {-1},
#line 23 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str943, ei_utf8},
#line 155 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str944, ei_iso8859_15},
    {-1},
#line 271 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str946, ei_jisx0208},
    {-1}, {-1},
#line 54 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str949, ei_iso8859_1},
    {-1}, {-1}, {-1},
#line 361 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str953, ei_dec_kanji},
#line 138 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str954, ei_iso8859_11},
    {-1},
#line 509 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str956, ei_ebcdic871},
    {-1}, {-1},
#line 131 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str959, ei_iso8859_10},
#line 204 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str960, ei_cp862},
    {-1}, {-1},
#line 284 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str963, ei_jisx0212},
#line 94 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str964, ei_iso8859_6},
#line 632 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str965, ei_ebcdic1149},
#line 87 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str966, ei_iso8859_5},
#line 569 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str967, ei_ebcdic1140},
#line 332 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str968, ei_iso2022_cn},
    {-1},
#line 63 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str970, ei_iso8859_2},
    {-1}, {-1},
#line 352 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str973, ei_euc_kr},
#line 245 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str974, ei_cp1133},
#line 154 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str975, ei_iso8859_15},
    {-1},
#line 89 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str977, ei_iso8859_5},
#line 517 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str978, ei_ebcdic880},
    {-1},
#line 53 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str980, ei_iso8859_1},
#line 588 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str981, ei_ebcdic1143},
#line 147 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str982, ei_iso8859_14},
#line 156 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str983, ei_iso8859_15},
#line 148 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str984, ei_iso8859_14},
#line 137 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str985, ei_iso8859_11},
    {-1}, {-1},
#line 286 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str988, ei_iso646_cn},
    {-1}, {-1}, {-1}, {-1},
#line 32 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str993, ei_ucs2le},
#line 364 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str994, ei_dec_hanyu},
#line 473 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str995, ei_ebcdic297},
#line 612 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str996, ei_ebcdic1146},
    {-1},
#line 279 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str998, ei_jisx0212},
#line 583 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str999, ei_ebcdic1142},
#line 41 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1000, ei_utf32},
#line 229 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1001, ei_nextstep},
    {-1},
#line 115 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1003, ei_iso8859_8},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 80 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1009, ei_iso8859_4},
    {-1},
#line 116 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1011, ei_iso8859_8},
    {-1},
#line 146 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1013, ei_iso8859_14},
#line 81 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1014, ei_iso8859_4},
#line 252 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1015, ei_tis620},
#line 130 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1016, ei_iso8859_10},
#line 293 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1017, ei_isoir165},
#line 107 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1018, ei_iso8859_7},
    {-1},
#line 413 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1020, ei_cp861},
    {-1}, {-1}, {-1}, {-1},
#line 432 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1025, ei_ebcdic037},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 114 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1034, ei_iso8859_8},
#line 444 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1035, ei_ebcdic277},
    {-1},
#line 35 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1037, ei_ucs4},
    {-1}, {-1},
#line 79 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1040, ei_iso8859_4},
#line 333 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1041, ei_iso2022_cn_ext},
    {-1},
#line 430 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1043, ei_cp869},
#line 108 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1044, ei_iso8859_7},
    {-1}, {-1},
#line 129 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1047, ei_iso8859_10},
#line 427 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1048, ei_cp869},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 58 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1056, ei_iso8859_1},
    {-1}, {-1},
#line 15 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1059, ei_ascii},
#line 541 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1060, ei_ebcdic1047},
#line 243 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1061, ei_mulelao},
#line 362 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1062, ei_dec_kanji},
#line 363 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1063, ei_dec_hanyu},
#line 110 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1064, ei_iso8859_7},
    {-1}, {-1},
#line 543 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1067, ei_ebcdic1097},
    {-1},
#line 629 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1069, ei_ebcdic1149},
    {-1}, {-1},
#line 647 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1072, ei_ebcdic1157},
    {-1}, {-1},
#line 592 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1075, ei_ebcdic1143},
#line 331 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1076, ei_iso2022_cn},
    {-1},
#line 337 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1078, ei_euc_tw},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 590 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1086, ei_ebcdic1143},
    {-1},
#line 262 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1088, ei_iso646_jp},
#line 264 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1089, ei_iso646_jp},
    {-1},
#line 619 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1091, ei_ebcdic1147},
#line 230 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1092, ei_armscii_8},
#line 447 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1093, ei_ebcdic277},
#line 326 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1094, ei_cp936},
#line 73 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1095, ei_iso8859_3},
#line 66 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1096, ei_iso8859_2},
#line 280 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1097, ei_jisx0212},
    {-1},
#line 260 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1099, ei_tcvn},
#line 141 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1100, ei_iso8859_13},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 438 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1107, ei_ebcdic037},
    {-1},
#line 614 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1109, ei_ebcdic1147},
#line 454 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1110, ei_ebcdic278},
    {-1}, {-1},
#line 295 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1113, ei_ksc5601},
#line 231 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1114, ei_georgian_academy},
    {-1},
#line 391 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1116, ei_cp775},
#line 354 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1117, ei_euc_kr},
    {-1}, {-1},
#line 28 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1120, ei_ucs2be},
    {-1}, {-1},
#line 124 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1123, ei_iso8859_9},
    {-1},
#line 617 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1125, ei_ebcdic1147},
    {-1}, {-1}, {-1},
#line 90 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1129, ei_iso8859_5},
    {-1},
#line 140 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1131, ei_iso8859_13},
#line 96 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1132, ei_iso8859_6},
    {-1},
#line 161 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1134, ei_iso8859_16},
#line 65 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1135, ei_iso8859_2},
#line 277 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1136, ei_jisx0208},
    {-1}, {-1}, {-1},
#line 55 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1140, ei_iso8859_1},
    {-1}, {-1}, {-1}, {-1},
#line 188 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1145, ei_cp1255},
    {-1},
#line 162 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1147, ei_iso8859_16},
#line 242 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1148, ei_rk1048},
    {-1}, {-1},
#line 158 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1151, ei_iso8859_15},
    {-1},
#line 82 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1153, ei_iso8859_4},
    {-1},
#line 291 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1155, ei_gb2312},
    {-1}, {-1}, {-1}, {-1},
#line 259 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1160, ei_tcvn},
    {-1}, {-1}, {-1}, {-1},
#line 160 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1165, ei_iso8859_16},
#line 538 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1166, ei_ebcdic1047},
    {-1}, {-1},
#line 613 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1169, ei_ebcdic1146},
    {-1},
#line 72 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1171, ei_iso8859_3},
#line 436 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1172, ei_ebcdic037},
    {-1}, {-1}, {-1}, {-1},
#line 470 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1177, ei_ebcdic285},
    {-1}, {-1},
#line 458 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1180, ei_ebcdic280},
    {-1},
#line 480 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1182, ei_ebcdic423},
#line 681 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1183, ei_tds565},
    {-1},
#line 312 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1185, ei_iso2022_jp},
#line 290 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1186, ei_gb2312},
    {-1}, {-1},
#line 315 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1189, ei_iso2022_jp2},
#line 560 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1190, ei_ebcdic1137},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 307 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1196, ei_sjis},
    {-1},
#line 118 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1198, ei_iso8859_8},
#line 684 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1199, ei_riscos1},
#line 323 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1200, ei_euc_cn},
#line 109 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1201, ei_iso8859_7},
#line 71 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1202, ei_iso8859_3},
    {-1},
#line 117 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1204, ei_iso8859_8},
    {-1}, {-1},
#line 599 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1207, ei_ebcdic1144},
#line 437 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1208, ei_ebcdic037},
    {-1},
#line 56 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1210, ei_iso8859_1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 261 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1218, ei_tcvn},
#line 620 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1219, ei_ebcdic1147},
#line 664 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1220, ei_ebcdic4971},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 29 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1226, ei_ucs2be},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 404 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1233, ei_cp857},
    {-1}, {-1},
#line 273 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1236, ei_jisx0208},
#line 157 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1237, ei_iso8859_15},
    {-1}, {-1}, {-1},
#line 51 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1241, ei_c99},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 472 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1247, ei_ebcdic297},
#line 214 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1248, ei_mac_centraleurope},
#line 179 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1249, ei_cp1252},
    {-1},
#line 106 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1251, ei_iso8859_7},
#line 493 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1252, ei_ebcdic500},
#line 256 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1253, ei_viscii},
    {-1},
#line 44 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1255, ei_utf7},
#line 522 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1256, ei_ebcdic905},
#line 18 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1257, ei_ascii},
    {-1}, {-1}, {-1}, {-1},
#line 27 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1262, ei_ucs2be},
#line 523 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1263, ei_ebcdic905},
    {-1},
#line 102 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1265, ei_iso8859_6},
    {-1},
#line 93 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1267, ei_iso8859_5},
    {-1}, {-1}, {-1},
#line 70 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1271, ei_iso8859_2},
    {-1}, {-1},
#line 503 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1274, ei_ebcdic870},
#line 166 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1275, ei_iso8859_16},
    {-1},
#line 159 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1277, ei_iso8859_15},
    {-1},
#line 31 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1279, ei_ucs2le},
    {-1},
#line 62 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1281, ei_iso8859_1},
    {-1},
#line 355 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1283, ei_cp949},
#line 111 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1284, ei_iso8859_7},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 272 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1290, ei_jisx0208},
#line 139 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1291, ei_iso8859_11},
#line 17 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1292, ei_ascii},
#line 311 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1293, ei_iso2022_jp},
    {-1},
#line 598 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1295, ei_ebcdic1144},
    {-1},
#line 36 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1297, ei_ucs4be},
#line 314 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1298, ei_iso2022_jp2},
#line 266 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1299, ei_iso646_jp},
#line 289 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1300, ei_iso646_cn},
    {-1}, {-1},
#line 313 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1303, ei_iso2022_jp1},
    {-1}, {-1},
#line 485 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1306, ei_ebcdic424},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 453 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1313, ei_ebcdic278},
#line 37 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1314, ei_ucs4le},
#line 104 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1315, ei_iso8859_7},
    {-1}, {-1}, {-1}, {-1},
#line 281 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1320, ei_jisx0212},
    {-1}, {-1},
#line 105 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1323, ei_iso8859_7},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 336 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1330, ei_euc_tw},
#line 492 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1331, ei_ebcdic500},
#line 30 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1332, ei_ucs2be},
#line 452 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1333, ei_ebcdic278},
    {-1},
#line 120 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1335, ei_iso8859_8},
#line 678 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1336, ei_iso2022_jp3},
    {-1},
#line 475 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1338, ei_ebcdic297},
    {-1}, {-1},
#line 86 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1341, ei_iso8859_4},
    {-1}, {-1}, {-1}, {-1},
#line 103 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1346, ei_iso8859_7},
    {-1},
#line 673 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1348, ei_euc_jisx0213},
#line 240 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1349, ei_rk1048},
    {-1},
#line 153 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1351, ei_iso8859_14},
#line 39 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1352, ei_utf16be},
    {-1}, {-1},
#line 127 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1355, ei_iso8859_9},
    {-1}, {-1}, {-1},
#line 386 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1359, ei_cp437},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 61 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1365, ei_iso8859_1},
    {-1}, {-1}, {-1},
#line 40 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1369, ei_utf16le},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 232 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1376, ei_georgian_ps},
    {-1},
#line 294 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1378, ei_isoir165},
#line 591 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1379, ei_ebcdic1143},
#line 268 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1380, ei_jisx0201},
#line 439 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1381, ei_ebcdic037},
    {-1}, {-1},
#line 101 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1384, ei_iso8859_6},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 448 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1391, ei_ebcdic277},
    {-1},
#line 85 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1393, ei_iso8859_4},
    {-1}, {-1}, {-1}, {-1},
#line 132 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1398, ei_iso8859_10},
    {-1},
#line 97 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1400, ei_iso8859_6},
    {-1}, {-1}, {-1}, {-1},
#line 136 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1405, ei_iso8859_10},
    {-1}, {-1}, {-1}, {-1},
#line 99 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1410, ei_iso8859_6},
    {-1}, {-1}, {-1},
#line 677 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1414, ei_iso2022_jp3},
#line 45 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1415, ei_utf7},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 220 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1421, ei_mac_greek},
    {-1}, {-1},
#line 626 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1424, ei_ebcdic1148},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 152 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1448, ei_iso8859_14},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 278 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1456, ei_jisx0208},
    {-1}, {-1}, {-1},
#line 222 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1460, ei_mac_hebrew},
#line 92 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1461, ei_iso8859_5},
    {-1}, {-1}, {-1}, {-1},
#line 42 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1466, ei_utf32be},
#line 287 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1467, ei_iso646_cn},
    {-1},
#line 25 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1469, ei_ucs2},
    {-1}, {-1},
#line 347 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1472, ei_big5hkscs2001},
    {-1},
#line 338 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1474, ei_euc_tw},
    {-1},
#line 69 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1476, ei_iso8859_2},
    {-1}, {-1},
#line 173 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1479, ei_cp1250},
    {-1}, {-1}, {-1},
#line 43 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1483, ei_utf32le},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 12 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1492, ei_ascii},
    {-1}, {-1}, {-1}, {-1},
#line 219 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1497, ei_mac_ukraine},
    {-1},
#line 351 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1499, ei_big5hkscs2008},
    {-1}, {-1},
#line 348 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1502, ei_big5hkscs2004},
#line 78 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1503, ei_iso8859_3},
#line 34 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1504, ei_ucs4},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 77 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1511, ei_iso8859_3},
    {-1},
#line 145 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1513, ei_iso8859_13},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 46 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1519, ei_utf7},
    {-1}, {-1}, {-1},
#line 308 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1523, ei_sjis},
    {-1}, {-1}, {-1}, {-1},
#line 26 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1528, ei_ucs2},
    {-1}, {-1},
#line 542 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1531, ei_ebcdic1097},
    {-1}, {-1},
#line 285 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1534, ei_iso646_cn},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 508 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1540, ei_ebcdic871},
    {-1}, {-1}, {-1}, {-1},
#line 135 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1545, ei_iso8859_10},
    {-1}, {-1}, {-1},
#line 631 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1549, ei_ebcdic1149},
    {-1}, {-1}, {-1}, {-1},
#line 276 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1554, ei_jisx0208},
    {-1}, {-1},
#line 221 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1557, ei_mac_turkish},
#line 360 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1558, ei_iso2022_kr},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 513 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1575, ei_ebcdic875},
    {-1}, {-1}, {-1}, {-1},
#line 190 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1580, ei_cp1256},
#line 187 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1581, ei_cp1255},
    {-1},
#line 178 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1583, ei_cp1252},
    {-1}, {-1},
#line 185 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1586, ei_cp1254},
    {-1},
#line 175 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1588, ei_cp1251},
#line 257 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1589, ei_viscii},
#line 299 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1590, ei_ksc5601},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 446 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1598, ei_ebcdic277},
    {-1}, {-1}, {-1}, {-1},
#line 476 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1603, ei_ebcdic297},
#line 296 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1604, ei_ksc5601},
    {-1}, {-1},
#line 568 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1607, ei_ebcdic1140},
    {-1},
#line 605 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1609, ei_ebcdic1145},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 196 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1615, ei_cp1258},
    {-1}, {-1},
#line 184 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1618, ei_cp1254},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 342 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1636, ei_ces_big5},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 634 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1643, ei_ebcdic1149},
    {-1},
#line 172 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1645, ei_cp1250},
#line 213 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1646, ei_mac_roman},
#line 113 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1647, ei_iso8859_7},
    {-1}, {-1}, {-1},
#line 674 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1651, ei_euc_jisx0213},
    {-1}, {-1}, {-1}, {-1},
#line 575 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1656, ei_ebcdic1141},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 316 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1663, ei_iso2022_jpms},
    {-1}, {-1},
#line 359 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1666, ei_iso2022_kr},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 502 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1676, ei_ebcdic870},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 119 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1685, ei_iso8859_8},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 270 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1691, ei_jisx0201},
    {-1}, {-1}, {-1},
#line 47 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1695, ei_ucs2internal},
    {-1}, {-1}, {-1},
#line 181 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1699, ei_cp1253},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 582 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1729, ei_ebcdic1142},
#line 49 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1730, ei_ucs4internal},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 14 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1737, ei_ascii},
    {-1},
#line 122 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1739, ei_iso8859_9},
#line 112 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1740, ei_iso8859_7},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 123 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1747, ei_iso8859_9},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 48 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1763, ei_ucs2swapped},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 121 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1770, ei_iso8859_9},
#line 193 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1771, ei_cp1257},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 50 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1798, ei_ucs4swapped},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 297 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1816, ei_ksc5601},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 283 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1822, ei_jisx0212},
#line 349 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1823, ei_big5hkscs2008},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 254 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1833, ei_cp874},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 298 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1859, ei_ksc5601},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 346 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1867, ei_big5hkscs1999},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 74 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1886, ei_iso8859_3},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 465 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1895, ei_ebcdic284},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 341 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1915, ei_ces_big5},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 633 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1939, ei_ebcdic1149},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 435 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1950, ei_ebcdic037},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 350 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1968, ei_big5hkscs2008},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 303 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2002, ei_euc_jp},
#line 182 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2003, ei_cp1253},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 142 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2012, ei_iso8859_13},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 309 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2069, ei_sjis},
    {-1},
#line 128 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2071, ei_iso8859_9},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 675 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2136, ei_shift_jisx0213},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 149 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2224, ei_iso8859_14},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 305 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2255, ei_sjis},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 327 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2281, ei_cp936},
    {-1}, {-1}, {-1}, {-1},
#line 306 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2286, ei_sjis},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 676 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2302, ei_shift_jisx0213},
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
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 304 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2582, ei_euc_jp}
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

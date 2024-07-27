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

#define TOTAL_KEYWORDS 684
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 45
#define MIN_HASH_VALUE 20
#define MAX_HASH_VALUE 2630
/* maximum key range = 2611, duplicates = 0 */

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
      2631, 2631, 2631, 2631, 2631, 2631, 2631, 2631, 2631, 2631,
      2631, 2631, 2631, 2631, 2631, 2631, 2631, 2631, 2631, 2631,
      2631, 2631, 2631, 2631, 2631, 2631, 2631, 2631, 2631, 2631,
      2631, 2631, 2631, 2631, 2631, 2631, 2631, 2631, 2631, 2631,
      2631, 2631, 2631, 2631, 2631,  272,    9,  402,   82,   11,
         6,  122,   52,    4,    3,  238,   40,  347,   13,    3,
         4, 2631, 2631, 2631, 2631,   18,    3,   29,    8,   87,
       347,  609,  169,    3,  180,  217,   12,  193,  313,    5,
         3,    7,   14,  476,    5,   59,  109,  318,  291,   80,
        30,    7, 2631, 2631, 2631,  146, 2631, 2631, 2631, 2631,
      2631, 2631, 2631, 2631, 2631, 2631, 2631, 2631, 2631, 2631,
      2631, 2631, 2631, 2631, 2631, 2631, 2631, 2631, 2631, 2631,
      2631, 2631, 2631, 2631, 2631, 2631, 2631, 2631, 2631, 2631
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
    char stringpool_str20[sizeof("L6")];
    char stringpool_str22[sizeof("L5")];
    char stringpool_str26[sizeof("L2")];
    char stringpool_str36[sizeof("L1")];
    char stringpool_str52[sizeof("866")];
    char stringpool_str54[sizeof("865")];
    char stringpool_str55[sizeof("855")];
    char stringpool_str58[sizeof("862")];
    char stringpool_str59[sizeof("852")];
    char stringpool_str64[sizeof("646")];
    char stringpool_str65[sizeof("CP1256")];
    char stringpool_str66[sizeof("ATARI")];
    char stringpool_str67[sizeof("CP1255")];
    char stringpool_str68[sizeof("861")];
    char stringpool_str69[sizeof("CP1166")];
    char stringpool_str70[sizeof("CP1156")];
    char stringpool_str71[sizeof("CP1252")];
    char stringpool_str72[sizeof("CP1155")];
    char stringpool_str74[sizeof("CP1125")];
    char stringpool_str75[sizeof("CP1162")];
    char stringpool_str78[sizeof("CP1122")];
    char stringpool_str81[sizeof("CP1251")];
    char stringpool_str83[sizeof("CP1112")];
    char stringpool_str85[sizeof("CP1161")];
    char stringpool_str86[sizeof("CP866")];
    char stringpool_str87[sizeof("CP856")];
    char stringpool_str88[sizeof("CP865")];
    char stringpool_str89[sizeof("CP855")];
    char stringpool_str91[sizeof("CP285")];
    char stringpool_str92[sizeof("CP862")];
    char stringpool_str93[sizeof("CP852")];
    char stringpool_str94[sizeof("L8")];
    char stringpool_str96[sizeof("R8")];
    char stringpool_str102[sizeof("CP861")];
    char stringpool_str118[sizeof("L4")];
    char stringpool_str120[sizeof("ARABIC")];
    char stringpool_str132[sizeof("PT154")];
    char stringpool_str139[sizeof("CP1258")];
    char stringpool_str143[sizeof("CP1026")];
    char stringpool_str144[sizeof("CP1158")];
    char stringpool_str145[sizeof("CP1025")];
    char stringpool_str156[sizeof("CP154")];
    char stringpool_str159[sizeof("CP50221")];
    char stringpool_str161[sizeof("CP858")];
    char stringpool_str163[sizeof("CP1254")];
    char stringpool_str166[sizeof("PTCP154")];
    char stringpool_str167[sizeof("CP1164")];
    char stringpool_str168[sizeof("CP1154")];
    char stringpool_str170[sizeof("CP1124")];
    char stringpool_str184[sizeof("CP864")];
    char stringpool_str187[sizeof("CP284")];
    char stringpool_str188[sizeof("JP")];
    char stringpool_str189[sizeof("CP1046")];
    char stringpool_str190[sizeof("L10")];
    char stringpool_str194[sizeof("CP1132")];
    char stringpool_str196[sizeof("CP1361")];
    char stringpool_str199[sizeof("CP424")];
    char stringpool_str201[sizeof("CP01146")];
    char stringpool_str203[sizeof("CP01145")];
    char stringpool_str204[sizeof("CP1131")];
    char stringpool_str207[sizeof("CP01142")];
    char stringpool_str210[sizeof("860")];
    char stringpool_str211[sizeof("850")];
    char stringpool_str217[sizeof("CP01141")];
    char stringpool_str223[sizeof("CP1250")];
    char stringpool_str227[sizeof("CP1160")];
    char stringpool_str231[sizeof("HZ")];
    char stringpool_str237[sizeof("IBM1166")];
    char stringpool_str238[sizeof("IBM1156")];
    char stringpool_str239[sizeof("IBM1165")];
    char stringpool_str240[sizeof("IBM1155")];
    char stringpool_str243[sizeof("IBM1162")];
    char stringpool_str244[sizeof("CP860")];
    char stringpool_str245[sizeof("CP850")];
    char stringpool_str246[sizeof("IBM1122")];
    char stringpool_str247[sizeof("CP280")];
    char stringpool_str251[sizeof("IBM1112")];
    char stringpool_str253[sizeof("IBM1161")];
    char stringpool_str254[sizeof("IBM866")];
    char stringpool_str256[sizeof("IBM865")];
    char stringpool_str257[sizeof("IBM855")];
    char stringpool_str258[sizeof("L3")];
    char stringpool_str259[sizeof("IBM285")];
    char stringpool_str260[sizeof("IBM862")];
    char stringpool_str261[sizeof("IBM852")];
    char stringpool_str263[sizeof("IBM282")];
    char stringpool_str270[sizeof("IBM861")];
    char stringpool_str271[sizeof("IBM425")];
    char stringpool_str272[sizeof("MAC")];
    char stringpool_str275[sizeof("CP01148")];
    char stringpool_str277[sizeof("CYRILLIC")];
    char stringpool_str279[sizeof("CP16804")];
    char stringpool_str281[sizeof("CP880")];
    char stringpool_str286[sizeof("IBM1146")];
    char stringpool_str287[sizeof("CP500")];
    char stringpool_str288[sizeof("IBM1145")];
    char stringpool_str289[sizeof("UHC")];
    char stringpool_str290[sizeof("863")];
    char stringpool_str292[sizeof("IBM1142")];
    char stringpool_str299[sizeof("CP01144")];
    char stringpool_str302[sizeof("IBM1141")];
    char stringpool_str303[sizeof("CP1253")];
    char stringpool_str307[sizeof("CP1163")];
    char stringpool_str308[sizeof("CP1153")];
    char stringpool_str310[sizeof("CP1123")];
    char stringpool_str311[sizeof("IBM1026")];
    char stringpool_str312[sizeof("IBM1158")];
    char stringpool_str313[sizeof("IBM1025")];
    char stringpool_str317[sizeof("CP12712")];
    char stringpool_str323[sizeof("CP875")];
    char stringpool_str324[sizeof("CP863")];
    char stringpool_str325[sizeof("CP853")];
    char stringpool_str335[sizeof("IBM1164")];
    char stringpool_str336[sizeof("IBM1154")];
    char stringpool_str337[sizeof("CP871")];
    char stringpool_str339[sizeof("CP423")];
    char stringpool_str346[sizeof("CP1130")];
    char stringpool_str347[sizeof("JAVA")];
    char stringpool_str352[sizeof("IBM864")];
    char stringpool_str355[sizeof("IBM284")];
    char stringpool_str359[sizeof("CP01140")];
    char stringpool_str360[sizeof("IBM1148")];
    char stringpool_str361[sizeof("CP278")];
    char stringpool_str362[sizeof("IBM1132")];
    char stringpool_str363[sizeof("LATIN6")];
    char stringpool_str365[sizeof("LATIN5")];
    char stringpool_str366[sizeof("EUCJP")];
    char stringpool_str367[sizeof("IBM424")];
    char stringpool_str369[sizeof("LATIN2")];
    char stringpool_str379[sizeof("LATIN1")];
    char stringpool_str383[sizeof("JOHAB")];
    char stringpool_str384[sizeof("IBM1144")];
    char stringpool_str395[sizeof("IBM1160")];
    char stringpool_str398[sizeof("IBM16804")];
    char stringpool_str402[sizeof("CP922")];
    char stringpool_str406[sizeof("IBM01146")];
    char stringpool_str407[sizeof("X0212")];
    char stringpool_str412[sizeof("IBM860")];
    char stringpool_str413[sizeof("IBM850")];
    char stringpool_str415[sizeof("IBM280")];
    char stringpool_str416[sizeof("IBM01148")];
    char stringpool_str418[sizeof("IBM01144")];
    char stringpool_str419[sizeof("CP874")];
    char stringpool_str421[sizeof("IBM01142")];
    char stringpool_str425[sizeof("EUCKR")];
    char stringpool_str426[sizeof("CP1133")];
    char stringpool_str437[sizeof("LATIN8")];
    char stringpool_str439[sizeof("CP01143")];
    char stringpool_str444[sizeof("IBM1140")];
    char stringpool_str445[sizeof("MACTHAI")];
    char stringpool_str447[sizeof("IBM838")];
    char stringpool_str449[sizeof("IBM880")];
    char stringpool_str451[sizeof("IBM01140")];
    char stringpool_str455[sizeof("IBM500")];
    char stringpool_str461[sizeof("LATIN4")];
    char stringpool_str462[sizeof("RK1048")];
    char stringpool_str469[sizeof("PCK")];
    char stringpool_str474[sizeof("CP905")];
    char stringpool_str475[sizeof("IBM1163")];
    char stringpool_str476[sizeof("IBM1153")];
    char stringpool_str478[sizeof("IBM1123")];
    char stringpool_str479[sizeof("CP870")];
    char stringpool_str488[sizeof("X0201")];
    char stringpool_str489[sizeof("IBM01143")];
    char stringpool_str490[sizeof("L7")];
    char stringpool_str491[sizeof("IBM875")];
    char stringpool_str492[sizeof("IBM863")];
    char stringpool_str495[sizeof("UTF8")];
    char stringpool_str496[sizeof("IBM01141")];
    char stringpool_str505[sizeof("IBM871")];
    char stringpool_str507[sizeof("IBM423")];
    char stringpool_str510[sizeof("TDS565")];
    char stringpool_str512[sizeof("CP936")];
    char stringpool_str514[sizeof("IBM1130")];
    char stringpool_str518[sizeof("CP932")];
    char stringpool_str521[sizeof("CP775")];
    char stringpool_str522[sizeof("MACROMANIA")];
    char stringpool_str523[sizeof("857")];
    char stringpool_str524[sizeof("IBM1143")];
    char stringpool_str525[sizeof("CP273")];
    char stringpool_str529[sizeof("IBM278")];
    char stringpool_str531[sizeof("IBM12712")];
    char stringpool_str532[sizeof("IBM-285")];
    char stringpool_str533[sizeof("LATIN10")];
    char stringpool_str535[sizeof("CP1257")];
    char stringpool_str536[sizeof("IBM-282")];
    char stringpool_str537[sizeof("ASCII")];
    char stringpool_str540[sizeof("CP1157")];
    char stringpool_str544[sizeof("IBM-425")];
    char stringpool_str546[sizeof("X0208")];
    char stringpool_str547[sizeof("IBM-1166")];
    char stringpool_str548[sizeof("IBM-1156")];
    char stringpool_str551[sizeof("ATARIST")];
    char stringpool_str552[sizeof("CP950")];
    char stringpool_str553[sizeof("KOI8-T")];
    char stringpool_str557[sizeof("CP857")];
    char stringpool_str558[sizeof("IBM-1158")];
    char stringpool_str559[sizeof("IBM-1164")];
    char stringpool_str560[sizeof("IBM-1154")];
    char stringpool_str562[sizeof("IBM-1162")];
    char stringpool_str565[sizeof("IBM-1122")];
    char stringpool_str570[sizeof("IBM-1112")];
    char stringpool_str571[sizeof("KOI8-R")];
    char stringpool_str577[sizeof("MACARABIC")];
    char stringpool_str592[sizeof("IBM-1160")];
    char stringpool_str596[sizeof("IBM-1146")];
    char stringpool_str601[sizeof("LATIN3")];
    char stringpool_str605[sizeof("IBM01145")];
    char stringpool_str606[sizeof("IBM-1148")];
    char stringpool_str608[sizeof("IBM-1144")];
    char stringpool_str611[sizeof("IBM-1142")];
    char stringpool_str621[sizeof("IBM-1026")];
    char stringpool_str627[sizeof("BIG5")];
    char stringpool_str628[sizeof("IBM-284")];
    char stringpool_str629[sizeof("ROMAN8")];
    char stringpool_str630[sizeof("IBM-1163")];
    char stringpool_str631[sizeof("IBM-1153")];
    char stringpool_str632[sizeof("VISCII")];
    char stringpool_str633[sizeof("IBM-1123")];
    char stringpool_str637[sizeof("IBM-1161")];
    char stringpool_str638[sizeof("CP367")];
    char stringpool_str639[sizeof("EUC-JP")];
    char stringpool_str640[sizeof("IBM-424")];
    char stringpool_str641[sizeof("IBM-1140")];
    char stringpool_str642[sizeof("IBM905")];
    char stringpool_str644[sizeof("IBM-16804")];
    char stringpool_str647[sizeof("IBM870")];
    char stringpool_str650[sizeof("CSPCP852")];
    char stringpool_str653[sizeof("437")];
    char stringpool_str657[sizeof("CN")];
    char stringpool_str658[sizeof("CP1137")];
    char stringpool_str659[sizeof("CP1047")];
    char stringpool_str660[sizeof("CP00924")];
    char stringpool_str661[sizeof("KOI8-U")];
    char stringpool_str662[sizeof("IBM924")];
    char stringpool_str663[sizeof("TIS620")];
    char stringpool_str669[sizeof("ELOT_928")];
    char stringpool_str671[sizeof("CP01147")];
    char stringpool_str673[sizeof("IBM-EUCJP")];
    char stringpool_str676[sizeof("KOI8-RU")];
    char stringpool_str679[sizeof("IBM-1143")];
    char stringpool_str680[sizeof("CP943")];
    char stringpool_str681[sizeof("IBM-1132")];
    char stringpool_str682[sizeof("ECMA-118")];
    char stringpool_str683[sizeof("TIS620.2529-1")];
    char stringpool_str684[sizeof("ECMA-114")];
    char stringpool_str686[sizeof("IBM-1141")];
    char stringpool_str687[sizeof("CP437")];
    char stringpool_str688[sizeof("IBM-280")];
    char stringpool_str689[sizeof("IBM775")];
    char stringpool_str693[sizeof("IBM273")];
    char stringpool_str697[sizeof("CP4971")];
    char stringpool_str698[sizeof("EUC-KR")];
    char stringpool_str706[sizeof("UTF-16")];
    char stringpool_str708[sizeof("IBM1157")];
    char stringpool_str711[sizeof("IBM-1130")];
    char stringpool_str713[sizeof("IBM01149")];
    char stringpool_str717[sizeof("CP037")];
    char stringpool_str720[sizeof("IBM-838")];
    char stringpool_str722[sizeof("IBM-880")];
    char stringpool_str725[sizeof("IBM857")];
    char stringpool_str728[sizeof("IBM-500")];
    char stringpool_str739[sizeof("MACICELAND")];
    char stringpool_str740[sizeof("869")];
    char stringpool_str742[sizeof("MACCYRILLIC")];
    char stringpool_str746[sizeof("IBM-1165")];
    char stringpool_str747[sizeof("IBM-1155")];
    char stringpool_str751[sizeof("KZ-1048")];
    char stringpool_str756[sizeof("IBM1147")];
    char stringpool_str760[sizeof("CP1129")];
    char stringpool_str764[sizeof("IBM-875")];
    char stringpool_str765[sizeof("MACCROATIAN")];
    char stringpool_str766[sizeof("HP-ROMAN8")];
    char stringpool_str768[sizeof("UTF-8")];
    char stringpool_str769[sizeof("GB2312")];
    char stringpool_str773[sizeof("TCVN")];
    char stringpool_str774[sizeof("CP869")];
    char stringpool_str778[sizeof("IBM-871")];
    char stringpool_str779[sizeof("IBM00924")];
    char stringpool_str780[sizeof("IBM-423")];
    char stringpool_str782[sizeof("CP819")];
    char stringpool_str787[sizeof("CSIBM1162")];
    char stringpool_str794[sizeof("MACROMAN")];
    char stringpool_str795[sizeof("IBM-1145")];
    char stringpool_str797[sizeof("CSIBM1161")];
    char stringpool_str798[sizeof("CSIBM866")];
    char stringpool_str802[sizeof("IBM-278")];
    char stringpool_str805[sizeof("CSKOI8R")];
    char stringpool_str806[sizeof("IBM367")];
    char stringpool_str810[sizeof("CSIBM864")];
    char stringpool_str813[sizeof("CSIBM284")];
    char stringpool_str815[sizeof("EBCDIC-CP-NO")];
    char stringpool_str819[sizeof("MULELAO-1")];
    char stringpool_str820[sizeof("IBM-1025")];
    char stringpool_str821[sizeof("EUCTW")];
    char stringpool_str822[sizeof("EBCDIC-CP-NL")];
    char stringpool_str823[sizeof("UTF-32")];
    char stringpool_str825[sizeof("CSIBM424")];
    char stringpool_str826[sizeof("IBM1137")];
    char stringpool_str827[sizeof("IBM1047")];
    char stringpool_str828[sizeof("CCSID01146")];
    char stringpool_str829[sizeof("CSPC850MULTILINGUAL")];
    char stringpool_str830[sizeof("CCSID01145")];
    char stringpool_str831[sizeof("EBCDIC-CP-CA")];
    char stringpool_str832[sizeof("CCSID00924")];
    char stringpool_str833[sizeof("LATIN7")];
    char stringpool_str834[sizeof("CCSID01142")];
    char stringpool_str835[sizeof("EUCCN")];
    char stringpool_str836[sizeof("EBCDIC-CYRILLIC")];
    char stringpool_str838[sizeof("TIS620.2533-1")];
    char stringpool_str841[sizeof("ISO646-JP")];
    char stringpool_str843[sizeof("CSIBM860")];
    char stringpool_str844[sizeof("CCSID01141")];
    char stringpool_str846[sizeof("CSIBM280")];
    char stringpool_str848[sizeof("HP15CN")];
    char stringpool_str853[sizeof("UCS-2")];
    char stringpool_str854[sizeof("EBCDIC-GB-285+EURO")];
    char stringpool_str855[sizeof("IBM437")];
    char stringpool_str856[sizeof("EBCDIC-NO-277+EURO")];
    char stringpool_str862[sizeof("CYRILLIC-ASIAN")];
    char stringpool_str864[sizeof("CSIBM1026")];
    char stringpool_str865[sizeof("IBM4971")];
    char stringpool_str866[sizeof("CP297")];
    char stringpool_str869[sizeof("IBM-12712")];
    char stringpool_str873[sizeof("CP737")];
    char stringpool_str878[sizeof("EBCDIC-CP-TR")];
    char stringpool_str880[sizeof("CSIBM880")];
    char stringpool_str881[sizeof("CSIBM863")];
    char stringpool_str882[sizeof("DECHANZI")];
    char stringpool_str885[sizeof("IBM037")];
    char stringpool_str886[sizeof("CSIBM500")];
    char stringpool_str888[sizeof("CSIBM861")];
    char stringpool_str889[sizeof("CP01149")];
    char stringpool_str891[sizeof("IBM-THAI")];
    char stringpool_str894[sizeof("EBCDIC-CP-YU")];
    char stringpool_str895[sizeof("EBCDIC-CP-HE")];
    char stringpool_str896[sizeof("CSIBM423")];
    char stringpool_str897[sizeof("EBCDIC-CP-SE")];
    char stringpool_str900[sizeof("BIG-5")];
    char stringpool_str902[sizeof("CCSID01148")];
    char stringpool_str903[sizeof("IBM-1149")];
    char stringpool_str907[sizeof("CSPTCP154")];
    char stringpool_str909[sizeof("TIS620.2533-0")];
    char stringpool_str915[sizeof("IBM-905")];
    char stringpool_str916[sizeof("JIS0208")];
    char stringpool_str920[sizeof("IBM-870")];
    char stringpool_str921[sizeof("EBCDIC-CP-BE")];
    char stringpool_str922[sizeof("CSIBMTHAI")];
    char stringpool_str925[sizeof("IBM277")];
    char stringpool_str926[sizeof("CCSID01144")];
    char stringpool_str932[sizeof("CSEUCKR")];
    char stringpool_str935[sizeof("IBM-924")];
    char stringpool_str936[sizeof("TIS-620")];
    char stringpool_str942[sizeof("IBM869")];
    char stringpool_str943[sizeof("TIS620-0")];
    char stringpool_str945[sizeof("UCS-4")];
    char stringpool_str946[sizeof("CP-GR")];
    char stringpool_str948[sizeof("IBM01147")];
    char stringpool_str950[sizeof("IBM819")];
    char stringpool_str954[sizeof("CP1097")];
    char stringpool_str958[sizeof("CSKZ1048")];
    char stringpool_str959[sizeof("IBM-932")];
    char stringpool_str966[sizeof("IBM-273")];
    char stringpool_str970[sizeof("EBCDIC-LATIN9-EURO")];
    char stringpool_str971[sizeof("DEC-KANJI")];
    char stringpool_str972[sizeof("MACINTOSH")];
    char stringpool_str973[sizeof("KOREAN")];
    char stringpool_str974[sizeof("IBM1149")];
    char stringpool_str977[sizeof("EBCDIC-CP-GB")];
    char stringpool_str982[sizeof("EBCDIC-CP-CH")];
    char stringpool_str984[sizeof("UNICODELITTLE")];
    char stringpool_str986[sizeof("CCSID01140")];
    char stringpool_str988[sizeof("EBCDIC-CP-GR")];
    char stringpool_str989[sizeof("CSIBM01145")];
    char stringpool_str990[sizeof("EBCDIC-CP-IT")];
    char stringpool_str991[sizeof("CSIBM00924")];
    char stringpool_str993[sizeof("CSIBM01142")];
    char stringpool_str994[sizeof("EBCDIC-SE-278+EURO")];
    char stringpool_str997[sizeof("CSIBM865")];
    char stringpool_str998[sizeof("CSIBM855")];
    char stringpool_str1000[sizeof("CSIBM285")];
    char stringpool_str1002[sizeof("HEBREW")];
    char stringpool_str1003[sizeof("CSIBM01141")];
    char stringpool_str1004[sizeof("MS-ARAB")];
    char stringpool_str1005[sizeof("ISO_8859-6")];
    char stringpool_str1007[sizeof("ISO_8859-5")];
    char stringpool_str1009[sizeof("CSIBM278")];
    char stringpool_str1011[sizeof("ISO_8859-2")];
    char stringpool_str1012[sizeof("IBM-CP1133")];
    char stringpool_str1013[sizeof("US")];
    char stringpool_str1018[sizeof("ISO_8859-15")];
    char stringpool_str1019[sizeof("CSIBM1163")];
    char stringpool_str1020[sizeof("EBCDIC-FI-278+EURO")];
    char stringpool_str1021[sizeof("ISO_8859-1")];
    char stringpool_str1026[sizeof("UCS-2BE")];
    char stringpool_str1027[sizeof("VISCII1.1-1")];
    char stringpool_str1028[sizeof("ISO_8859-11")];
    char stringpool_str1029[sizeof("CNS11643")];
    char stringpool_str1030[sizeof("DEC-HANYU")];
    char stringpool_str1031[sizeof("EBCDIC-FR-297+EURO")];
    char stringpool_str1033[sizeof("ISO_8859-10:1992")];
    char stringpool_str1034[sizeof("IBM297")];
    char stringpool_str1035[sizeof("UCS-2LE")];
    char stringpool_str1038[sizeof("GB18030")];
    char stringpool_str1041[sizeof("IBM737")];
    char stringpool_str1044[sizeof("CSASCII")];
    char stringpool_str1049[sizeof("GBK")];
    char stringpool_str1051[sizeof("ISO_8859-5:1988")];
    char stringpool_str1059[sizeof("ISO_8859-15:1998")];
    char stringpool_str1060[sizeof("ISO_8859-14:1998")];
    char stringpool_str1061[sizeof("CSIBM01148")];
    char stringpool_str1064[sizeof("ISO-CELTIC")];
    char stringpool_str1065[sizeof("TCVN5712-1")];
    char stringpool_str1066[sizeof("CCSID01143")];
    char stringpool_str1067[sizeof("ISO_8859-14")];
    char stringpool_str1068[sizeof("GB18030:2005")];
    char stringpool_str1070[sizeof("EBCDIC-IT-280+EURO")];
    char stringpool_str1071[sizeof("CSPC8CODEPAGE1146")];
    char stringpool_str1072[sizeof("UCS-4BE")];
    char stringpool_str1073[sizeof("C99")];
    char stringpool_str1076[sizeof("WINBALTRIM")];
    char stringpool_str1078[sizeof("CSIBM870")];
    char stringpool_str1079[sizeof("ISO_8859-8")];
    char stringpool_str1080[sizeof("DECKANJI")];
    char stringpool_str1081[sizeof("UCS-4LE")];
    char stringpool_str1082[sizeof("CSIBM273")];
    char stringpool_str1087[sizeof("ISO_8859-8:1988")];
    char stringpool_str1089[sizeof("DECHANYU")];
    char stringpool_str1090[sizeof("IBM-1157")];
    char stringpool_str1094[sizeof("EUC-TW")];
    char stringpool_str1095[sizeof("MS-CYRL")];
    char stringpool_str1096[sizeof("ISO-IR-6")];
    char stringpool_str1098[sizeof("KSC_5601")];
    char stringpool_str1099[sizeof("ISO_8859-4:1988")];
    char stringpool_str1100[sizeof("GREEK8")];
    char stringpool_str1101[sizeof("EBCDIC-CP-WT")];
    char stringpool_str1103[sizeof("ISO_8859-4")];
    char stringpool_str1104[sizeof("ISO_8859-10")];
    char stringpool_str1105[sizeof("CSIBM869")];
    char stringpool_str1108[sizeof("EUC-CN")];
    char stringpool_str1109[sizeof("EBCDIC-CP-DK")];
    char stringpool_str1111[sizeof("EBCDIC-GREEK")];
    char stringpool_str1113[sizeof("TCVN-5712")];
    char stringpool_str1119[sizeof("ISO-IR-226")];
    char stringpool_str1120[sizeof("CSPC8CODEPAGE1144")];
    char stringpool_str1122[sizeof("IBM1097")];
    char stringpool_str1123[sizeof("CSIBM871")];
    char stringpool_str1130[sizeof("CP949")];
    char stringpool_str1131[sizeof("ISO-8859-6")];
    char stringpool_str1132[sizeof("ISO_646.IRV:1991")];
    char stringpool_str1133[sizeof("ISO-8859-5")];
    char stringpool_str1134[sizeof("CSBIG5")];
    char stringpool_str1137[sizeof("ISO-8859-2")];
    char stringpool_str1138[sizeof("IBM-1147")];
    char stringpool_str1144[sizeof("ISO-8859-15")];
    char stringpool_str1145[sizeof("CSIBM01140")];
    char stringpool_str1147[sizeof("ISO-8859-1")];
    char stringpool_str1149[sizeof("MS936")];
    char stringpool_str1154[sizeof("ISO-8859-11")];
    char stringpool_str1156[sizeof("CSPC775BALTIC")];
    char stringpool_str1158[sizeof("IBM-037")];
    char stringpool_str1159[sizeof("MACCENTRALEUROPE")];
    char stringpool_str1164[sizeof("UTF-7")];
    char stringpool_str1169[sizeof("ISO_8859-3:1988")];
    char stringpool_str1175[sizeof("SDECKANJI")];
    char stringpool_str1178[sizeof("STRK1048-2002")];
    char stringpool_str1179[sizeof("CSUCS4")];
    char stringpool_str1181[sizeof("GB18030:2022")];
    char stringpool_str1184[sizeof("TCVN5712-1:1993")];
    char stringpool_str1185[sizeof("ISO_8859-13")];
    char stringpool_str1186[sizeof("ISO-IR-166")];
    char stringpool_str1188[sizeof("ISO-IR-165")];
    char stringpool_str1189[sizeof("ISO-IR-126")];
    char stringpool_str1193[sizeof("ISO-8859-14")];
    char stringpool_str1194[sizeof("CSISO58GB231280")];
    char stringpool_str1198[sizeof("IBM-277")];
    char stringpool_str1205[sizeof("ISO-8859-8")];
    char stringpool_str1207[sizeof("MS-EE")];
    char stringpool_str1208[sizeof("IBM-1137")];
    char stringpool_str1209[sizeof("IBM-1047")];
    char stringpool_str1217[sizeof("UNICODE-1-1")];
    char stringpool_str1221[sizeof("JIS_X0201")];
    char stringpool_str1225[sizeof("CSIBM01143")];
    char stringpool_str1227[sizeof("ARMSCII-8")];
    char stringpool_str1228[sizeof("ISO-2022-CN-EXT")];
    char stringpool_str1229[sizeof("ISO-8859-4")];
    char stringpool_str1230[sizeof("ISO-8859-10")];
    char stringpool_str1234[sizeof("CN-GB")];
    char stringpool_str1235[sizeof("MS-HEBR")];
    char stringpool_str1236[sizeof("GREEK")];
    char stringpool_str1238[sizeof("BIG5-2003")];
    char stringpool_str1243[sizeof("ISO_8859-3")];
    char stringpool_str1244[sizeof("CN-BIG5")];
    char stringpool_str1248[sizeof("ISO_8859-6:1987")];
    char stringpool_str1249[sizeof("IBM-4971")];
    char stringpool_str1251[sizeof("ISO_8859-2:1987")];
    char stringpool_str1252[sizeof("ISO_8859-16")];
    char stringpool_str1255[sizeof("BIGFIVE")];
    char stringpool_str1256[sizeof("ISO_8859-1:1987")];
    char stringpool_str1258[sizeof("CHINESE")];
    char stringpool_str1260[sizeof("ISO-10646-UCS-2")];
    char stringpool_str1262[sizeof("MACUKRAINE")];
    char stringpool_str1264[sizeof("CP-IS")];
    char stringpool_str1265[sizeof("ISO_8859-16:2001")];
    char stringpool_str1277[sizeof("JIS_C6220-1969-RO")];
    char stringpool_str1279[sizeof("JIS_X0208")];
    char stringpool_str1280[sizeof("ISO-IR-14")];
    char stringpool_str1281[sizeof("ISO-IR-101")];
    char stringpool_str1282[sizeof("EBCDIC-DE-273+EURO")];
    char stringpool_str1285[sizeof("CSIBM1047")];
    char stringpool_str1289[sizeof("NEXTSTEP")];
    char stringpool_str1297[sizeof("CSISO159JISX02121990")];
    char stringpool_str1298[sizeof("CCSID01147")];
    char stringpool_str1305[sizeof("CSPC8CODEPAGE437")];
    char stringpool_str1306[sizeof("ISO-10646-UCS-4")];
    char stringpool_str1307[sizeof("IBM-297")];
    char stringpool_str1309[sizeof("ISO-IR-148")];
    char stringpool_str1311[sizeof("ISO-8859-13")];
    char stringpool_str1312[sizeof("JIS_C6226-1983")];
    char stringpool_str1314[sizeof("CSISO57GB1988")];
    char stringpool_str1321[sizeof("CSHPROMAN8")];
    char stringpool_str1322[sizeof("CSGB2312")];
    char stringpool_str1324[sizeof("LATIN-9")];
    char stringpool_str1327[sizeof("JIS_X0212")];
    char stringpool_str1328[sizeof("CSEUCTW")];
    char stringpool_str1332[sizeof("ISO8859-6")];
    char stringpool_str1333[sizeof("ISO-IR-144")];
    char stringpool_str1334[sizeof("ISO8859-5")];
    char stringpool_str1336[sizeof("CSISO2022JP")];
    char stringpool_str1338[sizeof("ISO8859-2")];
    char stringpool_str1340[sizeof("CSISO2022JP2")];
    char stringpool_str1341[sizeof("CSIBM857")];
    char stringpool_str1344[sizeof("ISO8859-16")];
    char stringpool_str1345[sizeof("ASMO-708")];
    char stringpool_str1346[sizeof("ISO8859-15")];
    char stringpool_str1347[sizeof("EBCDIC-INTERNATIONAL-500+EURO")];
    char stringpool_str1348[sizeof("ISO8859-1")];
    char stringpool_str1352[sizeof("ISO-IR-110")];
    char stringpool_str1353[sizeof("CSVISCII")];
    char stringpool_str1360[sizeof("ISO8859-11")];
    char stringpool_str1364[sizeof("EUC-JISX0213")];
    char stringpool_str1367[sizeof("ISO_8859-7:2003")];
    char stringpool_str1368[sizeof("IBM-EUCCN")];
    char stringpool_str1369[sizeof("ISO-8859-3")];
    char stringpool_str1371[sizeof("EBCDIC-CP-ROECE")];
    char stringpool_str1372[sizeof("ISO-IR-58")];
    char stringpool_str1375[sizeof("ISO-2022-JP")];
    char stringpool_str1378[sizeof("ISO-8859-16")];
    char stringpool_str1379[sizeof("ISO-IR-138")];
    char stringpool_str1380[sizeof("ISO-2022-JP-2")];
    char stringpool_str1383[sizeof("CSIBM905")];
    char stringpool_str1385[sizeof("ISO-2022-JP-1")];
    char stringpool_str1387[sizeof("CSUNICODE11")];
    char stringpool_str1390[sizeof("EBCDIC-CP-US")];
    char stringpool_str1393[sizeof("ISO-IR-230")];
    char stringpool_str1398[sizeof("HZ-GB-2312")];
    char stringpool_str1400[sizeof("IBM-EUCTW")];
    char stringpool_str1404[sizeof("UTF-16BE")];
    char stringpool_str1406[sizeof("ISO8859-8")];
    char stringpool_str1412[sizeof("EBCDIC-DK-277+EURO")];
    char stringpool_str1413[sizeof("UTF-16LE")];
    char stringpool_str1417[sizeof("EBCDIC-CP-FI")];
    char stringpool_str1423[sizeof("ISO-IR-100")];
    char stringpool_str1425[sizeof("JIS_X0212.1990-0")];
    char stringpool_str1428[sizeof("EBCDIC-CP-FR")];
    char stringpool_str1429[sizeof("ISO-2022-JP-2004")];
    char stringpool_str1430[sizeof("ISO8859-4")];
    char stringpool_str1433[sizeof("ISO-IR-203")];
    char stringpool_str1438[sizeof("CSPC862LATINHEBREW")];
    char stringpool_str1442[sizeof("ISO8859-14")];
    char stringpool_str1444[sizeof("CSUNICODE")];
    char stringpool_str1450[sizeof("UNICODE-1-1-UTF-7")];
    char stringpool_str1455[sizeof("MACGREEK")];
    char stringpool_str1457[sizeof("CSIBM01147")];
    char stringpool_str1460[sizeof("MS-TURK")];
    char stringpool_str1461[sizeof("EBCDIC-CP-IS")];
    char stringpool_str1462[sizeof("CSISOLATIN5")];
    char stringpool_str1472[sizeof("CSISOLATIN1")];
    char stringpool_str1475[sizeof("ISO_8859-7")];
    char stringpool_str1483[sizeof("ISO_8859-7:1987")];
    char stringpool_str1492[sizeof("CSISOLATINARABIC")];
    char stringpool_str1493[sizeof("CSISO2022CN")];
    char stringpool_str1496[sizeof("ISO-2022-JP-3")];
    char stringpool_str1499[sizeof("CSISOLATINCYRILLIC")];
    char stringpool_str1501[sizeof("CSIBM037")];
    char stringpool_str1502[sizeof("ISO8859-10")];
    char stringpool_str1504[sizeof("IBM-1097")];
    char stringpool_str1511[sizeof("CSISOLATIN4")];
    char stringpool_str1516[sizeof("CCSID01149")];
    char stringpool_str1518[sizeof("UTF-32BE")];
    char stringpool_str1519[sizeof("GB_2312-80")];
    char stringpool_str1526[sizeof("CSKSC56011987")];
    char stringpool_str1527[sizeof("UTF-32LE")];
    char stringpool_str1532[sizeof("ISO-2022-CN")];
    char stringpool_str1536[sizeof("ISO646-CN")];
    char stringpool_str1541[sizeof("CSIBM277")];
    char stringpool_str1543[sizeof("ISO-IR-87")];
    char stringpool_str1554[sizeof("JISX0201-1976")];
    char stringpool_str1561[sizeof("US-ASCII")];
    char stringpool_str1567[sizeof("EXTENDED_UNIX_CODE_PACKED_FORMAT_FOR_JAPANESE")];
    char stringpool_str1568[sizeof("KS_C_5601-1987")];
    char stringpool_str1570[sizeof("ISO8859-3")];
    char stringpool_str1571[sizeof("EBCDIC-US-37+EURO")];
    char stringpool_str1573[sizeof("CSISO14JISC6220RO")];
    char stringpool_str1576[sizeof("MACTURKISH")];
    char stringpool_str1582[sizeof("ISO8859-13")];
    char stringpool_str1583[sizeof("CSISOLATIN2")];
    char stringpool_str1601[sizeof("ISO-8859-7")];
    char stringpool_str1604[sizeof("JIS_X0208-1990")];
    char stringpool_str1615[sizeof("SJIS")];
    char stringpool_str1618[sizeof("CSUNICODE11UTF7")];
    char stringpool_str1628[sizeof("EBCDIC-CP-ES")];
    char stringpool_str1629[sizeof("CSISOLATIN3")];
    char stringpool_str1639[sizeof("CSHALFWIDTHKATAKANA")];
    char stringpool_str1644[sizeof("JIS_X0208-1983")];
    char stringpool_str1650[sizeof("CSIBM297")];
    char stringpool_str1657[sizeof("ISO-IR-157")];
    char stringpool_str1659[sizeof("ISO-IR-127")];
    char stringpool_str1671[sizeof("EUC-JIS-2004")];
    char stringpool_str1675[sizeof("CSIBM01149")];
    char stringpool_str1677[sizeof("KS_C_5601-1989")];
    char stringpool_str1686[sizeof("JIS_X0212-1990")];
    char stringpool_str1693[sizeof("ISO_8859-9")];
    char stringpool_str1696[sizeof("CSISOLATIN6")];
    char stringpool_str1701[sizeof("ISO_8859-9:1989")];
    char stringpool_str1714[sizeof("UCS-2-INTERNAL")];
    char stringpool_str1719[sizeof("UCS-2-SWAPPED")];
    char stringpool_str1742[sizeof("GEORGIAN-ACADEMY")];
    char stringpool_str1743[sizeof("UNICODEBIG")];
    char stringpool_str1760[sizeof("UCS-4-INTERNAL")];
    char stringpool_str1761[sizeof("MS-ANSI")];
    char stringpool_str1765[sizeof("UCS-4-SWAPPED")];
    char stringpool_str1766[sizeof("EBCDIC-IS-871+EURO")];
    char stringpool_str1767[sizeof("MACHEBREW")];
    char stringpool_str1768[sizeof("ISO-IR-57")];
    char stringpool_str1771[sizeof("MS_KANJI")];
    char stringpool_str1781[sizeof("CSISOLATINHEBREW")];
    char stringpool_str1798[sizeof("ANSI_X3.4-1986")];
    char stringpool_str1802[sizeof("ISO8859-7")];
    char stringpool_str1812[sizeof("GB_1988-80")];
    char stringpool_str1815[sizeof("RISCOS-LATIN1")];
    char stringpool_str1819[sizeof("ISO-8859-9")];
    char stringpool_str1834[sizeof("CSMACINTOSH")];
    char stringpool_str1835[sizeof("ANSI_X3.4-1968")];
    char stringpool_str1845[sizeof("CSISOLATINGREEK")];
    char stringpool_str1851[sizeof("ISO-2022-JP-MS")];
    char stringpool_str1853[sizeof("CSISO2022KR")];
    char stringpool_str1870[sizeof("BIG5-HKSCS:2001")];
    char stringpool_str1875[sizeof("ISO-IR-159")];
    char stringpool_str1878[sizeof("WINDOWS-1256")];
    char stringpool_str1879[sizeof("WINDOWS-1255")];
    char stringpool_str1881[sizeof("WINDOWS-1252")];
    char stringpool_str1886[sizeof("WINDOWS-1251")];
    char stringpool_str1892[sizeof("ISO-2022-KR")];
    char stringpool_str1893[sizeof("CSISO87JISX0208")];
    char stringpool_str1899[sizeof("BIG5-HKSCS:2008")];
    char stringpool_str1911[sizeof("BIG5-HKSCS:2004")];
    char stringpool_str1915[sizeof("WINDOWS-1258")];
    char stringpool_str1923[sizeof("ISO-IR-149")];
    char stringpool_str1927[sizeof("WINDOWS-1254")];
    char stringpool_str1933[sizeof("EBCDIC-ES-284+EURO")];
    char stringpool_str1952[sizeof("CSEUCPKDFMTJAPANESE")];
    char stringpool_str1953[sizeof("ISO-IR-109")];
    char stringpool_str1957[sizeof("WINDOWS-1250")];
    char stringpool_str1997[sizeof("WINDOWS-1253")];
    char stringpool_str2020[sizeof("ISO8859-9")];
    char stringpool_str2050[sizeof("BIG-FIVE")];
    char stringpool_str2062[sizeof("CN-GB-ISOIR165")];
    char stringpool_str2093[sizeof("ISO646-US")];
    char stringpool_str2109[sizeof("ISO-IR-179")];
    char stringpool_str2113[sizeof("WINDOWS-1257")];
    char stringpool_str2115[sizeof("GEORGIAN-PS")];
    char stringpool_str2156[sizeof("MS-GREEK")];
    char stringpool_str2188[sizeof("WINDOWS-874")];
    char stringpool_str2206[sizeof("BIG5-HKSCS:1999")];
    char stringpool_str2218[sizeof("ISO-IR-199")];
    char stringpool_str2327[sizeof("BIG5-HKSCS")];
    char stringpool_str2457[sizeof("SHIFT_JISX0213")];
    char stringpool_str2479[sizeof("SHIFT_JIS-2004")];
    char stringpool_str2482[sizeof("CSSHIFTJIS")];
    char stringpool_str2504[sizeof("SHIFT_JIS")];
    char stringpool_str2529[sizeof("BIG5HKSCS")];
    char stringpool_str2564[sizeof("WINDOWS-936")];
    char stringpool_str2630[sizeof("SHIFT-JIS")];
  };
static const struct stringpool_t stringpool_contents =
  {
    "L6",
    "L5",
    "L2",
    "L1",
    "866",
    "865",
    "855",
    "862",
    "852",
    "646",
    "CP1256",
    "ATARI",
    "CP1255",
    "861",
    "CP1166",
    "CP1156",
    "CP1252",
    "CP1155",
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
    "L8",
    "R8",
    "CP861",
    "L4",
    "ARABIC",
    "PT154",
    "CP1258",
    "CP1026",
    "CP1158",
    "CP1025",
    "CP154",
    "CP50221",
    "CP858",
    "CP1254",
    "PTCP154",
    "CP1164",
    "CP1154",
    "CP1124",
    "CP864",
    "CP284",
    "JP",
    "CP1046",
    "L10",
    "CP1132",
    "CP1361",
    "CP424",
    "CP01146",
    "CP01145",
    "CP1131",
    "CP01142",
    "860",
    "850",
    "CP01141",
    "CP1250",
    "CP1160",
    "HZ",
    "IBM1166",
    "IBM1156",
    "IBM1165",
    "IBM1155",
    "IBM1162",
    "CP860",
    "CP850",
    "IBM1122",
    "CP280",
    "IBM1112",
    "IBM1161",
    "IBM866",
    "IBM865",
    "IBM855",
    "L3",
    "IBM285",
    "IBM862",
    "IBM852",
    "IBM282",
    "IBM861",
    "IBM425",
    "MAC",
    "CP01148",
    "CYRILLIC",
    "CP16804",
    "CP880",
    "IBM1146",
    "CP500",
    "IBM1145",
    "UHC",
    "863",
    "IBM1142",
    "CP01144",
    "IBM1141",
    "CP1253",
    "CP1163",
    "CP1153",
    "CP1123",
    "IBM1026",
    "IBM1158",
    "IBM1025",
    "CP12712",
    "CP875",
    "CP863",
    "CP853",
    "IBM1164",
    "IBM1154",
    "CP871",
    "CP423",
    "CP1130",
    "JAVA",
    "IBM864",
    "IBM284",
    "CP01140",
    "IBM1148",
    "CP278",
    "IBM1132",
    "LATIN6",
    "LATIN5",
    "EUCJP",
    "IBM424",
    "LATIN2",
    "LATIN1",
    "JOHAB",
    "IBM1144",
    "IBM1160",
    "IBM16804",
    "CP922",
    "IBM01146",
    "X0212",
    "IBM860",
    "IBM850",
    "IBM280",
    "IBM01148",
    "IBM01144",
    "CP874",
    "IBM01142",
    "EUCKR",
    "CP1133",
    "LATIN8",
    "CP01143",
    "IBM1140",
    "MACTHAI",
    "IBM838",
    "IBM880",
    "IBM01140",
    "IBM500",
    "LATIN4",
    "RK1048",
    "PCK",
    "CP905",
    "IBM1163",
    "IBM1153",
    "IBM1123",
    "CP870",
    "X0201",
    "IBM01143",
    "L7",
    "IBM875",
    "IBM863",
    "UTF8",
    "IBM01141",
    "IBM871",
    "IBM423",
    "TDS565",
    "CP936",
    "IBM1130",
    "CP932",
    "CP775",
    "MACROMANIA",
    "857",
    "IBM1143",
    "CP273",
    "IBM278",
    "IBM12712",
    "IBM-285",
    "LATIN10",
    "CP1257",
    "IBM-282",
    "ASCII",
    "CP1157",
    "IBM-425",
    "X0208",
    "IBM-1166",
    "IBM-1156",
    "ATARIST",
    "CP950",
    "KOI8-T",
    "CP857",
    "IBM-1158",
    "IBM-1164",
    "IBM-1154",
    "IBM-1162",
    "IBM-1122",
    "IBM-1112",
    "KOI8-R",
    "MACARABIC",
    "IBM-1160",
    "IBM-1146",
    "LATIN3",
    "IBM01145",
    "IBM-1148",
    "IBM-1144",
    "IBM-1142",
    "IBM-1026",
    "BIG5",
    "IBM-284",
    "ROMAN8",
    "IBM-1163",
    "IBM-1153",
    "VISCII",
    "IBM-1123",
    "IBM-1161",
    "CP367",
    "EUC-JP",
    "IBM-424",
    "IBM-1140",
    "IBM905",
    "IBM-16804",
    "IBM870",
    "CSPCP852",
    "437",
    "CN",
    "CP1137",
    "CP1047",
    "CP00924",
    "KOI8-U",
    "IBM924",
    "TIS620",
    "ELOT_928",
    "CP01147",
    "IBM-EUCJP",
    "KOI8-RU",
    "IBM-1143",
    "CP943",
    "IBM-1132",
    "ECMA-118",
    "TIS620.2529-1",
    "ECMA-114",
    "IBM-1141",
    "CP437",
    "IBM-280",
    "IBM775",
    "IBM273",
    "CP4971",
    "EUC-KR",
    "UTF-16",
    "IBM1157",
    "IBM-1130",
    "IBM01149",
    "CP037",
    "IBM-838",
    "IBM-880",
    "IBM857",
    "IBM-500",
    "MACICELAND",
    "869",
    "MACCYRILLIC",
    "IBM-1165",
    "IBM-1155",
    "KZ-1048",
    "IBM1147",
    "CP1129",
    "IBM-875",
    "MACCROATIAN",
    "HP-ROMAN8",
    "UTF-8",
    "GB2312",
    "TCVN",
    "CP869",
    "IBM-871",
    "IBM00924",
    "IBM-423",
    "CP819",
    "CSIBM1162",
    "MACROMAN",
    "IBM-1145",
    "CSIBM1161",
    "CSIBM866",
    "IBM-278",
    "CSKOI8R",
    "IBM367",
    "CSIBM864",
    "CSIBM284",
    "EBCDIC-CP-NO",
    "MULELAO-1",
    "IBM-1025",
    "EUCTW",
    "EBCDIC-CP-NL",
    "UTF-32",
    "CSIBM424",
    "IBM1137",
    "IBM1047",
    "CCSID01146",
    "CSPC850MULTILINGUAL",
    "CCSID01145",
    "EBCDIC-CP-CA",
    "CCSID00924",
    "LATIN7",
    "CCSID01142",
    "EUCCN",
    "EBCDIC-CYRILLIC",
    "TIS620.2533-1",
    "ISO646-JP",
    "CSIBM860",
    "CCSID01141",
    "CSIBM280",
    "HP15CN",
    "UCS-2",
    "EBCDIC-GB-285+EURO",
    "IBM437",
    "EBCDIC-NO-277+EURO",
    "CYRILLIC-ASIAN",
    "CSIBM1026",
    "IBM4971",
    "CP297",
    "IBM-12712",
    "CP737",
    "EBCDIC-CP-TR",
    "CSIBM880",
    "CSIBM863",
    "DECHANZI",
    "IBM037",
    "CSIBM500",
    "CSIBM861",
    "CP01149",
    "IBM-THAI",
    "EBCDIC-CP-YU",
    "EBCDIC-CP-HE",
    "CSIBM423",
    "EBCDIC-CP-SE",
    "BIG-5",
    "CCSID01148",
    "IBM-1149",
    "CSPTCP154",
    "TIS620.2533-0",
    "IBM-905",
    "JIS0208",
    "IBM-870",
    "EBCDIC-CP-BE",
    "CSIBMTHAI",
    "IBM277",
    "CCSID01144",
    "CSEUCKR",
    "IBM-924",
    "TIS-620",
    "IBM869",
    "TIS620-0",
    "UCS-4",
    "CP-GR",
    "IBM01147",
    "IBM819",
    "CP1097",
    "CSKZ1048",
    "IBM-932",
    "IBM-273",
    "EBCDIC-LATIN9-EURO",
    "DEC-KANJI",
    "MACINTOSH",
    "KOREAN",
    "IBM1149",
    "EBCDIC-CP-GB",
    "EBCDIC-CP-CH",
    "UNICODELITTLE",
    "CCSID01140",
    "EBCDIC-CP-GR",
    "CSIBM01145",
    "EBCDIC-CP-IT",
    "CSIBM00924",
    "CSIBM01142",
    "EBCDIC-SE-278+EURO",
    "CSIBM865",
    "CSIBM855",
    "CSIBM285",
    "HEBREW",
    "CSIBM01141",
    "MS-ARAB",
    "ISO_8859-6",
    "ISO_8859-5",
    "CSIBM278",
    "ISO_8859-2",
    "IBM-CP1133",
    "US",
    "ISO_8859-15",
    "CSIBM1163",
    "EBCDIC-FI-278+EURO",
    "ISO_8859-1",
    "UCS-2BE",
    "VISCII1.1-1",
    "ISO_8859-11",
    "CNS11643",
    "DEC-HANYU",
    "EBCDIC-FR-297+EURO",
    "ISO_8859-10:1992",
    "IBM297",
    "UCS-2LE",
    "GB18030",
    "IBM737",
    "CSASCII",
    "GBK",
    "ISO_8859-5:1988",
    "ISO_8859-15:1998",
    "ISO_8859-14:1998",
    "CSIBM01148",
    "ISO-CELTIC",
    "TCVN5712-1",
    "CCSID01143",
    "ISO_8859-14",
    "GB18030:2005",
    "EBCDIC-IT-280+EURO",
    "CSPC8CODEPAGE1146",
    "UCS-4BE",
    "C99",
    "WINBALTRIM",
    "CSIBM870",
    "ISO_8859-8",
    "DECKANJI",
    "UCS-4LE",
    "CSIBM273",
    "ISO_8859-8:1988",
    "DECHANYU",
    "IBM-1157",
    "EUC-TW",
    "MS-CYRL",
    "ISO-IR-6",
    "KSC_5601",
    "ISO_8859-4:1988",
    "GREEK8",
    "EBCDIC-CP-WT",
    "ISO_8859-4",
    "ISO_8859-10",
    "CSIBM869",
    "EUC-CN",
    "EBCDIC-CP-DK",
    "EBCDIC-GREEK",
    "TCVN-5712",
    "ISO-IR-226",
    "CSPC8CODEPAGE1144",
    "IBM1097",
    "CSIBM871",
    "CP949",
    "ISO-8859-6",
    "ISO_646.IRV:1991",
    "ISO-8859-5",
    "CSBIG5",
    "ISO-8859-2",
    "IBM-1147",
    "ISO-8859-15",
    "CSIBM01140",
    "ISO-8859-1",
    "MS936",
    "ISO-8859-11",
    "CSPC775BALTIC",
    "IBM-037",
    "MACCENTRALEUROPE",
    "UTF-7",
    "ISO_8859-3:1988",
    "SDECKANJI",
    "STRK1048-2002",
    "CSUCS4",
    "GB18030:2022",
    "TCVN5712-1:1993",
    "ISO_8859-13",
    "ISO-IR-166",
    "ISO-IR-165",
    "ISO-IR-126",
    "ISO-8859-14",
    "CSISO58GB231280",
    "IBM-277",
    "ISO-8859-8",
    "MS-EE",
    "IBM-1137",
    "IBM-1047",
    "UNICODE-1-1",
    "JIS_X0201",
    "CSIBM01143",
    "ARMSCII-8",
    "ISO-2022-CN-EXT",
    "ISO-8859-4",
    "ISO-8859-10",
    "CN-GB",
    "MS-HEBR",
    "GREEK",
    "BIG5-2003",
    "ISO_8859-3",
    "CN-BIG5",
    "ISO_8859-6:1987",
    "IBM-4971",
    "ISO_8859-2:1987",
    "ISO_8859-16",
    "BIGFIVE",
    "ISO_8859-1:1987",
    "CHINESE",
    "ISO-10646-UCS-2",
    "MACUKRAINE",
    "CP-IS",
    "ISO_8859-16:2001",
    "JIS_C6220-1969-RO",
    "JIS_X0208",
    "ISO-IR-14",
    "ISO-IR-101",
    "EBCDIC-DE-273+EURO",
    "CSIBM1047",
    "NEXTSTEP",
    "CSISO159JISX02121990",
    "CCSID01147",
    "CSPC8CODEPAGE437",
    "ISO-10646-UCS-4",
    "IBM-297",
    "ISO-IR-148",
    "ISO-8859-13",
    "JIS_C6226-1983",
    "CSISO57GB1988",
    "CSHPROMAN8",
    "CSGB2312",
    "LATIN-9",
    "JIS_X0212",
    "CSEUCTW",
    "ISO8859-6",
    "ISO-IR-144",
    "ISO8859-5",
    "CSISO2022JP",
    "ISO8859-2",
    "CSISO2022JP2",
    "CSIBM857",
    "ISO8859-16",
    "ASMO-708",
    "ISO8859-15",
    "EBCDIC-INTERNATIONAL-500+EURO",
    "ISO8859-1",
    "ISO-IR-110",
    "CSVISCII",
    "ISO8859-11",
    "EUC-JISX0213",
    "ISO_8859-7:2003",
    "IBM-EUCCN",
    "ISO-8859-3",
    "EBCDIC-CP-ROECE",
    "ISO-IR-58",
    "ISO-2022-JP",
    "ISO-8859-16",
    "ISO-IR-138",
    "ISO-2022-JP-2",
    "CSIBM905",
    "ISO-2022-JP-1",
    "CSUNICODE11",
    "EBCDIC-CP-US",
    "ISO-IR-230",
    "HZ-GB-2312",
    "IBM-EUCTW",
    "UTF-16BE",
    "ISO8859-8",
    "EBCDIC-DK-277+EURO",
    "UTF-16LE",
    "EBCDIC-CP-FI",
    "ISO-IR-100",
    "JIS_X0212.1990-0",
    "EBCDIC-CP-FR",
    "ISO-2022-JP-2004",
    "ISO8859-4",
    "ISO-IR-203",
    "CSPC862LATINHEBREW",
    "ISO8859-14",
    "CSUNICODE",
    "UNICODE-1-1-UTF-7",
    "MACGREEK",
    "CSIBM01147",
    "MS-TURK",
    "EBCDIC-CP-IS",
    "CSISOLATIN5",
    "CSISOLATIN1",
    "ISO_8859-7",
    "ISO_8859-7:1987",
    "CSISOLATINARABIC",
    "CSISO2022CN",
    "ISO-2022-JP-3",
    "CSISOLATINCYRILLIC",
    "CSIBM037",
    "ISO8859-10",
    "IBM-1097",
    "CSISOLATIN4",
    "CCSID01149",
    "UTF-32BE",
    "GB_2312-80",
    "CSKSC56011987",
    "UTF-32LE",
    "ISO-2022-CN",
    "ISO646-CN",
    "CSIBM277",
    "ISO-IR-87",
    "JISX0201-1976",
    "US-ASCII",
    "EXTENDED_UNIX_CODE_PACKED_FORMAT_FOR_JAPANESE",
    "KS_C_5601-1987",
    "ISO8859-3",
    "EBCDIC-US-37+EURO",
    "CSISO14JISC6220RO",
    "MACTURKISH",
    "ISO8859-13",
    "CSISOLATIN2",
    "ISO-8859-7",
    "JIS_X0208-1990",
    "SJIS",
    "CSUNICODE11UTF7",
    "EBCDIC-CP-ES",
    "CSISOLATIN3",
    "CSHALFWIDTHKATAKANA",
    "JIS_X0208-1983",
    "CSIBM297",
    "ISO-IR-157",
    "ISO-IR-127",
    "EUC-JIS-2004",
    "CSIBM01149",
    "KS_C_5601-1989",
    "JIS_X0212-1990",
    "ISO_8859-9",
    "CSISOLATIN6",
    "ISO_8859-9:1989",
    "UCS-2-INTERNAL",
    "UCS-2-SWAPPED",
    "GEORGIAN-ACADEMY",
    "UNICODEBIG",
    "UCS-4-INTERNAL",
    "MS-ANSI",
    "UCS-4-SWAPPED",
    "EBCDIC-IS-871+EURO",
    "MACHEBREW",
    "ISO-IR-57",
    "MS_KANJI",
    "CSISOLATINHEBREW",
    "ANSI_X3.4-1986",
    "ISO8859-7",
    "GB_1988-80",
    "RISCOS-LATIN1",
    "ISO-8859-9",
    "CSMACINTOSH",
    "ANSI_X3.4-1968",
    "CSISOLATINGREEK",
    "ISO-2022-JP-MS",
    "CSISO2022KR",
    "BIG5-HKSCS:2001",
    "ISO-IR-159",
    "WINDOWS-1256",
    "WINDOWS-1255",
    "WINDOWS-1252",
    "WINDOWS-1251",
    "ISO-2022-KR",
    "CSISO87JISX0208",
    "BIG5-HKSCS:2008",
    "BIG5-HKSCS:2004",
    "WINDOWS-1258",
    "ISO-IR-149",
    "WINDOWS-1254",
    "EBCDIC-ES-284+EURO",
    "CSEUCPKDFMTJAPANESE",
    "ISO-IR-109",
    "WINDOWS-1250",
    "WINDOWS-1253",
    "ISO8859-9",
    "BIG-FIVE",
    "CN-GB-ISOIR165",
    "ISO646-US",
    "ISO-IR-179",
    "WINDOWS-1257",
    "GEORGIAN-PS",
    "MS-GREEK",
    "WINDOWS-874",
    "BIG5-HKSCS:1999",
    "ISO-IR-199",
    "BIG5-HKSCS",
    "SHIFT_JISX0213",
    "SHIFT_JIS-2004",
    "CSSHIFTJIS",
    "SHIFT_JIS",
    "BIG5HKSCS",
    "WINDOWS-936",
    "SHIFT-JIS"
  };
#define stringpool ((const char *) &stringpool_contents)

static const struct alias aliases[] =
  {
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 136 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str20, ei_iso8859_10},
    {-1},
#line 128 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str22, ei_iso8859_9},
    {-1}, {-1}, {-1},
#line 70 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str26, ei_iso8859_2},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 62 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str36, ei_iso8859_1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 209 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str52, ei_cp866},
    {-1},
#line 435 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str54, ei_cp865},
#line 410 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str55, ei_cp855},
    {-1}, {-1},
#line 205 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str58, ei_cp862},
#line 405 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str59, ei_cp852},
    {-1}, {-1}, {-1}, {-1},
#line 23 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str64, ei_ascii},
#line 191 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str65, ei_cp1256},
#line 694 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str66, ei_atarist},
#line 188 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str67, ei_cp1255},
#line 423 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str68, ei_cp861},
#line 674 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str69, ei_ebcdic1166},
#line 657 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str70, ei_ebcdic1156},
#line 179 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str71, ei_cp1252},
#line 654 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str72, ei_ebcdic1155},
    {-1},
#line 442 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str74, ei_cp1125},
#line 386 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str75, ei_cp1162},
    {-1}, {-1},
#line 561 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str78, ei_ebcdic1122},
    {-1}, {-1},
#line 176 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str81, ei_cp1251},
    {-1},
#line 558 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str83, ei_ebcdic1112},
    {-1},
#line 382 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str85, ei_cp1161},
#line 207 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str86, ei_cp866},
#line 376 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str87, ei_cp856},
#line 433 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str88, ei_cp865},
#line 408 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str89, ei_cp855},
    {-1},
#line 480 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str91, ei_ebcdic285},
#line 203 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str92, ei_cp862},
#line 403 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str93, ei_cp852},
#line 153 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str94, ei_iso8859_14},
    {-1},
#line 229 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str96, ei_hp_roman8},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 421 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str102, ei_cp861},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 86 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str118, ei_iso8859_4},
    {-1},
#line 102 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str120, ei_iso8859_6},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 236 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str132, ei_pt154},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 197 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str139, ei_cp1258},
    {-1}, {-1}, {-1},
#line 547 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str143, ei_ebcdic1026},
#line 663 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str144, ei_ebcdic1158},
#line 544 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str145, ei_ebcdic1025},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 238 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str156, ei_pt154},
    {-1}, {-1},
#line 323 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str159, ei_iso2022_jpms},
    {-1},
#line 416 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str161, ei_cp858},
    {-1},
#line 185 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str163, ei_cp1254},
    {-1}, {-1},
#line 237 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str166, ei_pt154},
#line 669 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str167, ei_ebcdic1164},
#line 651 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str168, ei_ebcdic1154},
    {-1},
#line 380 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str170, ei_cp1124},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 430 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str184, ei_cp864},
    {-1}, {-1},
#line 475 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str187, ei_ebcdic284},
#line 267 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str188, ei_iso646_jp},
#line 379 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str189, ei_cp1046},
#line 167 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str190, ei_iso8859_16},
    {-1}, {-1}, {-1},
#line 570 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str194, ei_ebcdic1132},
    {-1},
#line 369 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str196, ei_johab},
    {-1}, {-1},
#line 495 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str199, ei_ebcdic424},
    {-1},
#line 622 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str201, ei_ebcdic1146},
    {-1},
#line 615 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str203, ei_ebcdic1145},
#line 211 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str204, ei_cp1131},
    {-1}, {-1},
#line 592 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str207, ei_ebcdic1142},
    {-1}, {-1},
#line 419 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str210, ei_cp860},
#line 201 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str211, ei_cp850},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 585 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str217, ei_ebcdic1141},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 173 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str223, ei_cp1250},
    {-1}, {-1}, {-1},
#line 666 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str227, ei_ebcdic1160},
    {-1}, {-1}, {-1},
#line 343 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str231, ei_hz},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 673 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str237, ei_ebcdic1166},
#line 656 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str238, ei_ebcdic1156},
#line 671 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str239, ei_ebcdic1165},
#line 653 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str240, ei_ebcdic1155},
    {-1}, {-1},
#line 387 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str243, ei_cp1162},
#line 417 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str244, ei_cp860},
#line 199 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str245, ei_cp850},
#line 560 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str246, ei_ebcdic1122},
#line 468 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str247, ei_ebcdic280},
    {-1}, {-1}, {-1},
#line 557 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str251, ei_ebcdic1112},
    {-1},
#line 383 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str253, ei_cp1161},
#line 208 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str254, ei_cp866},
    {-1},
#line 434 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str256, ei_cp865},
#line 409 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str257, ei_cp855},
#line 78 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str258, ei_iso8859_3},
#line 479 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str259, ei_ebcdic285},
#line 204 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str260, ei_cp862},
#line 404 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str261, ei_cp852},
    {-1},
#line 472 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str263, ei_ebcdic282},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 422 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str270, ei_cp861},
#line 499 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str271, ei_ebcdic425},
#line 214 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str272, ei_mac_roman},
    {-1}, {-1},
#line 636 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str275, ei_ebcdic1148},
    {-1},
#line 93 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str277, ei_iso8859_5},
    {-1},
#line 683 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str279, ei_ebcdic16804},
    {-1},
#line 527 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str281, ei_ebcdic880},
    {-1}, {-1}, {-1}, {-1},
#line 619 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str286, ei_ebcdic1146},
#line 502 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str287, ei_ebcdic500},
#line 612 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str288, ei_ebcdic1145},
#line 367 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str289, ei_cp949},
#line 428 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str290, ei_cp863},
    {-1},
#line 589 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str292, ei_ebcdic1142},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 608 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str299, ei_ebcdic1144},
    {-1}, {-1},
#line 582 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str302, ei_ebcdic1141},
#line 182 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str303, ei_cp1253},
    {-1}, {-1}, {-1},
#line 390 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str307, ei_cp1163},
#line 648 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str308, ei_ebcdic1153},
    {-1},
#line 564 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str310, ei_ebcdic1123},
#line 546 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str311, ei_ebcdic1026},
#line 662 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str312, ei_ebcdic1158},
#line 543 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str313, ei_ebcdic1025},
    {-1}, {-1}, {-1},
#line 680 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str317, ei_ebcdic12712},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 523 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str323, ei_ebcdic875},
#line 426 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str324, ei_cp863},
#line 407 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str325, ei_cp853},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 668 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str335, ei_ebcdic1164},
#line 650 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str336, ei_ebcdic1154},
#line 518 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str337, ei_ebcdic871},
    {-1},
#line 490 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str339, ei_ebcdic423},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 567 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str346, ei_ebcdic1130},
#line 54 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str347, ei_java},
    {-1}, {-1}, {-1}, {-1},
#line 431 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str352, ei_cp864},
    {-1}, {-1},
#line 474 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str355, ei_ebcdic284},
    {-1}, {-1}, {-1},
#line 578 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str359, ei_ebcdic1140},
#line 633 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str360, ei_ebcdic1148},
#line 462 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str361, ei_ebcdic278},
#line 569 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str362, ei_ebcdic1132},
#line 135 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str363, ei_iso8859_10},
    {-1},
#line 127 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str365, ei_iso8859_9},
#line 304 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str366, ei_euc_jp},
#line 494 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str367, ei_ebcdic424},
    {-1},
#line 69 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str369, ei_iso8859_2},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 61 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str379, ei_iso8859_1},
    {-1}, {-1}, {-1},
#line 368 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str383, ei_johab},
#line 605 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str384, ei_ebcdic1144},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 665 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str395, ei_ebcdic1160},
    {-1}, {-1},
#line 682 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str398, ei_ebcdic16804},
    {-1}, {-1}, {-1},
#line 377 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str402, ei_cp922},
    {-1}, {-1}, {-1},
#line 620 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str406, ei_ebcdic1146},
#line 284 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str407, ei_jisx0212},
    {-1}, {-1}, {-1}, {-1},
#line 418 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str412, ei_cp860},
#line 200 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str413, ei_cp850},
    {-1},
#line 467 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str415, ei_ebcdic280},
#line 634 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str416, ei_ebcdic1148},
    {-1},
#line 606 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str418, ei_ebcdic1144},
#line 255 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str419, ei_cp874},
    {-1},
#line 590 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str421, ei_ebcdic1142},
    {-1}, {-1}, {-1},
#line 364 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str425, ei_euc_kr},
#line 246 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str426, ei_cp1133},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 152 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str437, ei_iso8859_14},
    {-1},
#line 600 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str439, ei_ebcdic1143},
    {-1}, {-1}, {-1}, {-1},
#line 575 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str444, ei_ebcdic1140},
#line 226 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str445, ei_mac_thai},
    {-1},
#line 507 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str447, ei_ebcdic838},
    {-1},
#line 526 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str449, ei_ebcdic880},
    {-1},
#line 576 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str451, ei_ebcdic1140},
    {-1}, {-1}, {-1},
#line 501 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str455, ei_ebcdic500},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 85 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str461, ei_iso8859_4},
#line 241 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str462, ei_rk1048},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 314 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str469, ei_sjis},
    {-1}, {-1}, {-1}, {-1},
#line 532 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str474, ei_ebcdic905},
#line 391 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str475, ei_cp1163},
#line 647 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str476, ei_ebcdic1153},
    {-1},
#line 563 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str478, ei_ebcdic1123},
#line 512 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str479, ei_ebcdic870},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 271 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str488, ei_jisx0201},
#line 598 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str489, ei_ebcdic1143},
#line 146 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str490, ei_iso8859_13},
#line 522 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str491, ei_ebcdic875},
#line 427 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str492, ei_cp863},
    {-1}, {-1},
#line 25 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str495, ei_utf8},
#line 583 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str496, ei_ebcdic1141},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 517 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str505, ei_ebcdic871},
    {-1},
#line 489 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str507, ei_ebcdic423},
    {-1}, {-1},
#line 691 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str510, ei_tds565},
    {-1},
#line 334 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str512, ei_cp936},
    {-1},
#line 566 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str514, ei_ebcdic1130},
    {-1}, {-1}, {-1},
#line 315 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str518, ei_cp932},
    {-1}, {-1},
#line 400 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str521, ei_cp775},
#line 219 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str522, ei_mac_romania},
#line 414 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str523, ei_cp857},
#line 597 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str524, ei_ebcdic1143},
#line 453 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str525, ei_ebcdic273},
    {-1}, {-1}, {-1},
#line 461 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str529, ei_ebcdic278},
    {-1},
#line 679 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str531, ei_ebcdic12712},
#line 478 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str532, ei_ebcdic285},
#line 166 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str533, ei_iso8859_16},
    {-1},
#line 194 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str535, ei_cp1257},
#line 471 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str536, ei_ebcdic282},
#line 13 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str537, ei_ascii},
    {-1}, {-1},
#line 660 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str540, ei_ebcdic1157},
    {-1}, {-1}, {-1},
#line 498 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str544, ei_ebcdic425},
    {-1},
#line 277 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str546, ei_jisx0208},
#line 672 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str547, ei_ebcdic1166},
#line 655 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str548, ei_ebcdic1156},
    {-1}, {-1},
#line 693 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str551, ei_atarist},
#line 356 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str552, ei_cp950},
#line 235 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str553, ei_koi8_t},
    {-1}, {-1}, {-1},
#line 412 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str557, ei_cp857},
#line 661 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str558, ei_ebcdic1158},
#line 667 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str559, ei_ebcdic1164},
#line 649 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str560, ei_ebcdic1154},
    {-1},
#line 388 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str562, ei_cp1162},
    {-1}, {-1},
#line 559 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str565, ei_ebcdic1122},
    {-1}, {-1}, {-1}, {-1},
#line 556 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str570, ei_ebcdic1112},
#line 169 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str571, ei_koi8_r},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 225 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str577, ei_mac_arabic},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 664 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str592, ei_ebcdic1160},
    {-1}, {-1}, {-1},
#line 618 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str596, ei_ebcdic1146},
    {-1}, {-1}, {-1}, {-1},
#line 77 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str601, ei_iso8859_3},
    {-1}, {-1}, {-1},
#line 613 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str605, ei_ebcdic1145},
#line 632 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str606, ei_ebcdic1148},
    {-1},
#line 604 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str608, ei_ebcdic1144},
    {-1}, {-1},
#line 588 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str611, ei_ebcdic1142},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 545 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str621, ei_ebcdic1026},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 350 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str627, ei_ces_big5},
#line 473 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str628, ei_ebcdic284},
#line 228 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str629, ei_hp_roman8},
#line 392 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str630, ei_cp1163},
#line 646 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str631, ei_ebcdic1153},
#line 257 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str632, ei_viscii},
#line 562 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str633, ei_ebcdic1123},
    {-1}, {-1}, {-1},
#line 384 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str637, ei_cp1161},
#line 19 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str638, ei_ascii},
#line 303 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str639, ei_euc_jp},
#line 493 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str640, ei_ebcdic424},
#line 574 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str641, ei_ebcdic1140},
#line 531 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str642, ei_ebcdic905},
    {-1},
#line 681 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str644, ei_ebcdic16804},
    {-1}, {-1},
#line 511 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str647, ei_ebcdic870},
    {-1}, {-1},
#line 406 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str650, ei_cp852},
    {-1}, {-1},
#line 396 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str653, ei_cp437},
    {-1}, {-1}, {-1},
#line 290 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str657, ei_iso646_cn},
#line 573 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str658, ei_ebcdic1137},
#line 551 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str659, ei_ebcdic1047},
#line 539 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str660, ei_ebcdic924},
#line 171 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str661, ei_koi8_u},
#line 536 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str662, ei_ebcdic924},
#line 249 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str663, ei_tis620},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 111 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str669, ei_iso8859_7},
    {-1},
#line 629 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str671, ei_ebcdic1147},
    {-1},
#line 307 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str673, ei_euc_jp},
    {-1}, {-1},
#line 172 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str676, ei_koi8_ru},
    {-1}, {-1},
#line 596 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str679, ei_ebcdic1143},
#line 378 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str680, ei_cp943},
#line 568 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str681, ei_ebcdic1132},
#line 110 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str682, ei_iso8859_7},
#line 251 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str683, ei_tis620},
#line 100 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str684, ei_iso8859_6},
    {-1},
#line 581 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str686, ei_ebcdic1141},
#line 394 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str687, ei_cp437},
#line 466 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str688, ei_ebcdic280},
#line 401 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str689, ei_cp775},
    {-1}, {-1}, {-1},
#line 452 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str693, ei_ebcdic273},
    {-1}, {-1}, {-1},
#line 677 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str697, ei_ebcdic4971},
#line 363 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str698, ei_euc_kr},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 40 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str706, ei_utf16},
    {-1},
#line 659 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str708, ei_ebcdic1157},
    {-1}, {-1},
#line 565 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str711, ei_ebcdic1130},
    {-1},
#line 641 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str713, ei_ebcdic1149},
    {-1}, {-1}, {-1},
#line 445 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str717, ei_ebcdic037},
    {-1}, {-1},
#line 506 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str720, ei_ebcdic838},
    {-1},
#line 525 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str722, ei_ebcdic880},
    {-1}, {-1},
#line 413 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str725, ei_cp857},
    {-1}, {-1},
#line 500 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str728, ei_ebcdic500},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 217 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str739, ei_mac_iceland},
#line 439 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str740, ei_cp869},
    {-1},
#line 220 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str742, ei_mac_cyrillic},
    {-1}, {-1}, {-1},
#line 670 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str746, ei_ebcdic1165},
#line 652 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str747, ei_ebcdic1155},
    {-1}, {-1}, {-1},
#line 243 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str751, ei_rk1048},
    {-1}, {-1}, {-1}, {-1},
#line 626 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str756, ei_ebcdic1147},
    {-1}, {-1}, {-1},
#line 381 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str760, ei_cp1129},
    {-1}, {-1}, {-1},
#line 521 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str764, ei_ebcdic875},
#line 218 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str765, ei_mac_croatian},
#line 227 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str766, ei_hp_roman8},
    {-1},
#line 24 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str768, ei_utf8},
#line 326 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str769, ei_euc_cn},
    {-1}, {-1}, {-1},
#line 260 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str773, ei_tcvn},
#line 437 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str774, ei_cp869},
    {-1}, {-1}, {-1},
#line 516 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str778, ei_ebcdic871},
#line 537 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str779, ei_ebcdic924},
#line 488 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str780, ei_ebcdic423},
    {-1},
#line 59 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str782, ei_iso8859_1},
    {-1}, {-1}, {-1}, {-1},
#line 389 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str787, ei_cp1162},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 212 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str794, ei_mac_roman},
#line 611 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str795, ei_ebcdic1145},
    {-1},
#line 385 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str797, ei_cp1161},
#line 210 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str798, ei_cp866},
    {-1}, {-1}, {-1},
#line 460 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str802, ei_ebcdic278},
    {-1}, {-1},
#line 170 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str805, ei_koi8_r},
#line 20 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str806, ei_ascii},
    {-1}, {-1}, {-1},
#line 432 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str810, ei_cp864},
    {-1}, {-1},
#line 477 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str813, ei_ebcdic284},
    {-1},
#line 458 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str815, ei_ebcdic277},
    {-1}, {-1}, {-1},
#line 245 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str819, ei_mulelao},
#line 542 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str820, ei_ebcdic1025},
#line 346 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str821, ei_euc_tw},
#line 449 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str822, ei_ebcdic037},
#line 43 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str823, ei_utf32},
    {-1},
#line 497 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str825, ei_ebcdic424},
#line 572 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str826, ei_ebcdic1137},
#line 550 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str827, ei_ebcdic1047},
#line 621 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str828, ei_ebcdic1146},
#line 202 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str829, ei_cp850},
#line 614 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str830, ei_ebcdic1145},
#line 447 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str831, ei_ebcdic037},
#line 538 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str832, ei_ebcdic924},
#line 145 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str833, ei_iso8859_13},
#line 591 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str834, ei_ebcdic1142},
#line 325 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str835, ei_euc_cn},
#line 528 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str836, ei_ebcdic880},
    {-1},
#line 253 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str838, ei_tis620},
    {-1}, {-1},
#line 265 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str841, ei_iso646_jp},
    {-1},
#line 420 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str843, ei_cp860},
#line 584 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str844, ei_ebcdic1141},
    {-1},
#line 470 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str846, ei_ebcdic280},
    {-1},
#line 331 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str848, ei_euc_cn},
    {-1}, {-1}, {-1}, {-1},
#line 26 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str853, ei_ucs2},
#line 623 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str854, ei_ebcdic1146},
#line 395 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str855, ei_cp437},
#line 594 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str856, ei_ebcdic1142},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 239 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str862, ei_pt154},
    {-1},
#line 548 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str864, ei_ebcdic1026},
#line 676 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str865, ei_ebcdic4971},
#line 485 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str866, ei_ebcdic297},
    {-1}, {-1},
#line 678 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str869, ei_ebcdic12712},
    {-1}, {-1}, {-1},
#line 398 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str873, ei_cp737},
    {-1}, {-1}, {-1}, {-1},
#line 533 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str878, ei_ebcdic905},
    {-1},
#line 529 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str880, ei_ebcdic880},
#line 429 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str881, ei_cp863},
#line 332 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str882, ei_euc_cn},
    {-1}, {-1},
#line 444 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str885, ei_ebcdic037},
#line 505 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str886, ei_ebcdic500},
    {-1},
#line 425 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str888, ei_cp861},
#line 643 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str889, ei_ebcdic1149},
    {-1},
#line 508 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str891, ei_ebcdic838},
    {-1}, {-1},
#line 514 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str894, ei_ebcdic870},
#line 496 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str895, ei_ebcdic424},
#line 492 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str896, ei_ebcdic423},
#line 464 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str897, ei_ebcdic278},
    {-1}, {-1},
#line 351 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str900, ei_ces_big5},
    {-1},
#line 635 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str902, ei_ebcdic1148},
#line 639 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str903, ei_ebcdic1149},
    {-1}, {-1}, {-1},
#line 240 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str907, ei_pt154},
    {-1},
#line 252 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str909, ei_tis620},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 530 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str915, ei_ebcdic905},
#line 276 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str916, ei_jisx0208},
    {-1}, {-1}, {-1},
#line 510 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str920, ei_ebcdic870},
#line 503 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str921, ei_ebcdic500},
#line 509 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str922, ei_ebcdic838},
    {-1}, {-1},
#line 456 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str925, ei_ebcdic277},
#line 607 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str926, ei_ebcdic1144},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 365 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str932, ei_euc_kr},
    {-1}, {-1},
#line 535 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str935, ei_ebcdic924},
#line 248 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str936, ei_tis620},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 438 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str942, ei_cp869},
#line 250 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str943, ei_tis620},
    {-1},
#line 35 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str945, ei_ucs4},
#line 440 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str946, ei_cp869},
    {-1},
#line 627 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str948, ei_ebcdic1147},
    {-1},
#line 60 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str950, ei_iso8859_1},
    {-1}, {-1}, {-1},
#line 555 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str954, ei_ebcdic1097},
    {-1}, {-1}, {-1},
#line 244 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str958, ei_rk1048},
#line 316 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str959, ei_cp932},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 451 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str966, ei_ebcdic273},
    {-1}, {-1}, {-1},
#line 540 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str970, ei_ebcdic924},
#line 372 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str971, ei_dec_kanji},
#line 213 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str972, ei_mac_roman},
#line 302 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str973, ei_ksc5601},
#line 640 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str974, ei_ebcdic1149},
    {-1}, {-1},
#line 481 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str977, ei_ebcdic285},
    {-1}, {-1}, {-1}, {-1},
#line 504 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str982, ei_ebcdic500},
    {-1},
#line 34 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str984, ei_ucs2le},
    {-1},
#line 577 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str986, ei_ebcdic1140},
    {-1},
#line 491 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str988, ei_ebcdic423},
#line 617 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str989, ei_ebcdic1145},
#line 469 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str990, ei_ebcdic280},
#line 541 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str991, ei_ebcdic924},
    {-1},
#line 595 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str993, ei_ebcdic1142},
#line 602 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str994, ei_ebcdic1143},
    {-1}, {-1},
#line 436 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str997, ei_cp865},
#line 411 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str998, ei_cp855},
    {-1},
#line 482 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1000, ei_ebcdic285},
    {-1},
#line 120 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1002, ei_iso8859_8},
#line 587 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1003, ei_ebcdic1141},
#line 193 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1004, ei_cp1256},
#line 97 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1005, ei_iso8859_6},
    {-1},
#line 90 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1007, ei_iso8859_5},
    {-1},
#line 465 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1009, ei_ebcdic278},
    {-1},
#line 66 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1011, ei_iso8859_2},
#line 247 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1012, ei_cp1133},
#line 21 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1013, ei_ascii},
    {-1}, {-1}, {-1}, {-1},
#line 157 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1018, ei_iso8859_15},
#line 393 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1019, ei_cp1163},
#line 601 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1020, ei_ebcdic1143},
#line 56 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1021, ei_iso8859_1},
    {-1}, {-1}, {-1}, {-1},
#line 29 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1026, ei_ucs2be},
#line 258 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1027, ei_viscii},
#line 140 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1028, ei_iso8859_11},
#line 349 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1029, ei_euc_tw},
#line 374 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1030, ei_dec_hanyu},
#line 630 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1031, ei_ebcdic1147},
    {-1},
#line 133 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1033, ei_iso8859_10},
#line 484 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1034, ei_ebcdic297},
#line 33 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1035, ei_ucs2le},
    {-1}, {-1},
#line 337 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1038, ei_gb18030_2005},
    {-1}, {-1},
#line 399 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1041, ei_cp737},
    {-1}, {-1},
#line 22 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1044, ei_ascii},
    {-1}, {-1}, {-1}, {-1},
#line 333 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1049, ei_ces_gbk},
    {-1},
#line 91 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1051, ei_iso8859_5},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 158 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1059, ei_iso8859_15},
#line 150 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1060, ei_iso8859_14},
#line 638 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1061, ei_ebcdic1148},
    {-1}, {-1},
#line 154 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1064, ei_iso8859_14},
#line 262 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1065, ei_tcvn},
#line 599 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1066, ei_ebcdic1143},
#line 149 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1067, ei_iso8859_14},
#line 338 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1068, ei_gb18030_2005},
    {-1},
#line 609 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1070, ei_ebcdic1144},
#line 624 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1071, ei_ebcdic1146},
#line 38 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1072, ei_ucs4be},
#line 53 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1073, ei_c99},
    {-1}, {-1},
#line 196 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1076, ei_cp1257},
    {-1},
#line 515 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1078, ei_ebcdic870},
#line 117 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1079, ei_iso8859_8},
#line 373 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1080, ei_dec_kanji},
#line 39 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1081, ei_ucs4le},
#line 454 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1082, ei_ebcdic273},
    {-1}, {-1}, {-1}, {-1},
#line 118 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1087, ei_iso8859_8},
    {-1},
#line 375 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1089, ei_dec_hanyu},
#line 658 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1090, ei_ebcdic1157},
    {-1}, {-1}, {-1},
#line 345 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1094, ei_euc_tw},
#line 178 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1095, ei_cp1251},
#line 16 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1096, ei_ascii},
    {-1},
#line 297 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1098, ei_ksc5601},
#line 83 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1099, ei_iso8859_4},
#line 112 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1100, ei_iso8859_7},
#line 448 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1101, ei_ebcdic037},
    {-1},
#line 82 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1103, ei_iso8859_4},
#line 132 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1104, ei_iso8859_10},
#line 441 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1105, ei_cp869},
    {-1}, {-1},
#line 324 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1108, ei_euc_cn},
#line 457 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1109, ei_ebcdic277},
    {-1},
#line 524 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1111, ei_ebcdic875},
    {-1},
#line 261 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1113, ei_tcvn},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 165 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1119, ei_iso8859_16},
#line 610 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1120, ei_ebcdic1144},
    {-1},
#line 554 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1122, ei_ebcdic1097},
#line 520 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1123, ei_ebcdic871},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 366 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1130, ei_cp949},
#line 96 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1131, ei_iso8859_6},
#line 15 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1132, ei_ascii},
#line 89 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1133, ei_iso8859_5},
#line 355 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1134, ei_ces_big5},
    {-1}, {-1},
#line 65 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1137, ei_iso8859_2},
#line 625 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1138, ei_ebcdic1147},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 156 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1144, ei_iso8859_15},
#line 580 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1145, ei_ebcdic1140},
    {-1},
#line 55 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1147, ei_iso8859_1},
    {-1},
#line 335 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1149, ei_cp936},
    {-1}, {-1}, {-1}, {-1},
#line 139 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1154, ei_iso8859_11},
    {-1},
#line 402 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1156, ei_cp775},
    {-1},
#line 443 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1158, ei_ebcdic037},
#line 216 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1159, ei_mac_centraleurope},
    {-1}, {-1}, {-1}, {-1},
#line 46 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1164, ei_utf7},
    {-1}, {-1}, {-1}, {-1},
#line 75 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1169, ei_iso8859_3},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 308 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1175, ei_euc_jp},
    {-1}, {-1},
#line 242 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1178, ei_rk1048},
#line 37 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1179, ei_ucs4},
    {-1},
#line 339 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1181, ei_gb18030_2022},
    {-1}, {-1},
#line 263 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1184, ei_tcvn},
#line 143 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1185, ei_iso8859_13},
#line 254 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1186, ei_tis620},
    {-1},
#line 295 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1188, ei_isoir165},
#line 109 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1189, ei_iso8859_7},
    {-1}, {-1}, {-1},
#line 148 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1193, ei_iso8859_14},
#line 294 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1194, ei_gb2312},
    {-1}, {-1}, {-1},
#line 455 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1198, ei_ebcdic277},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 116 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1205, ei_iso8859_8},
    {-1},
#line 175 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1207, ei_cp1250},
#line 571 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1208, ei_ebcdic1137},
#line 549 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1209, ei_ebcdic1047},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 31 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1217, ei_ucs2be},
    {-1}, {-1}, {-1},
#line 269 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1221, ei_jisx0201},
    {-1}, {-1}, {-1},
#line 603 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1225, ei_ebcdic1143},
    {-1},
#line 232 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1227, ei_armscii_8},
#line 342 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1228, ei_iso2022_cn_ext},
#line 81 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1229, ei_iso8859_4},
#line 131 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1230, ei_iso8859_10},
    {-1}, {-1}, {-1},
#line 327 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1234, ei_euc_cn},
#line 190 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1235, ei_cp1255},
#line 113 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1236, ei_iso8859_7},
    {-1},
#line 690 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1238, ei_big5_2003},
    {-1}, {-1}, {-1}, {-1},
#line 74 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1243, ei_iso8859_3},
#line 354 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1244, ei_ces_big5},
    {-1}, {-1}, {-1},
#line 98 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1248, ei_iso8859_6},
#line 675 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1249, ei_ebcdic4971},
    {-1},
#line 67 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1251, ei_iso8859_2},
#line 163 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1252, ei_iso8859_16},
    {-1}, {-1},
#line 353 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1255, ei_ces_big5},
#line 57 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1256, ei_iso8859_1},
    {-1},
#line 329 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1258, ei_euc_cn},
    {-1},
#line 27 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1260, ei_ucs2},
    {-1},
#line 221 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1262, ei_mac_ukraine},
    {-1},
#line 424 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1264, ei_cp861},
#line 164 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1265, ei_iso8859_16},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 264 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1277, ei_iso646_jp},
    {-1},
#line 273 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1279, ei_jisx0208},
#line 266 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1280, ei_iso646_jp},
#line 68 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1281, ei_iso8859_2},
#line 586 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1282, ei_ebcdic1141},
    {-1}, {-1},
#line 552 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1285, ei_ebcdic1047},
    {-1}, {-1}, {-1},
#line 231 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1289, ei_nextstep},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 286 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1297, ei_jisx0212},
#line 628 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1298, ei_ebcdic1147},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 397 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1305, ei_cp437},
#line 36 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1306, ei_ucs4},
#line 483 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1307, ei_ebcdic297},
    {-1},
#line 126 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1309, ei_iso8859_9},
    {-1},
#line 142 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1311, ei_iso8859_13},
#line 279 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1312, ei_jisx0208},
    {-1},
#line 291 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1314, ei_iso646_cn},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 230 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1321, ei_hp_roman8},
#line 328 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1322, ei_euc_cn},
    {-1},
#line 160 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1324, ei_iso8859_15},
    {-1}, {-1},
#line 281 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1327, ei_jisx0212},
#line 347 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1328, ei_euc_tw},
    {-1}, {-1}, {-1},
#line 104 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1332, ei_iso8859_6},
#line 92 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1333, ei_iso8859_5},
#line 95 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1334, ei_iso8859_5},
    {-1},
#line 318 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1336, ei_iso2022_jp},
    {-1},
#line 72 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1338, ei_iso8859_2},
    {-1},
#line 321 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1340, ei_iso2022_jp2},
#line 415 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1341, ei_cp857},
    {-1}, {-1},
#line 168 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1344, ei_iso8859_16},
#line 101 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1345, ei_iso8859_6},
#line 161 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1346, ei_iso8859_15},
#line 637 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1347, ei_ebcdic1148},
#line 64 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1348, ei_iso8859_1},
    {-1}, {-1}, {-1},
#line 84 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1352, ei_iso8859_4},
#line 259 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1353, ei_viscii},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 141 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1360, ei_iso8859_11},
    {-1}, {-1}, {-1},
#line 684 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1364, ei_euc_jisx0213},
    {-1}, {-1},
#line 108 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1367, ei_iso8859_7},
#line 330 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1368, ei_euc_cn},
#line 73 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1369, ei_iso8859_3},
    {-1},
#line 513 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1371, ei_ebcdic870},
#line 293 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1372, ei_gb2312},
    {-1}, {-1},
#line 317 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1375, ei_iso2022_jp},
    {-1}, {-1},
#line 162 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1378, ei_iso8859_16},
#line 119 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1379, ei_iso8859_8},
#line 320 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1380, ei_iso2022_jp2},
    {-1}, {-1},
#line 534 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1383, ei_ebcdic905},
    {-1},
#line 319 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1385, ei_iso2022_jp1},
    {-1},
#line 32 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1387, ei_ucs2be},
    {-1}, {-1},
#line 446 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1390, ei_ebcdic037},
    {-1}, {-1},
#line 692 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1393, ei_tds565},
    {-1}, {-1}, {-1}, {-1},
#line 344 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1398, ei_hz},
    {-1},
#line 348 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1400, ei_euc_tw},
    {-1}, {-1}, {-1},
#line 41 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1404, ei_utf16be},
    {-1},
#line 122 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1406, ei_iso8859_8},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 593 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1412, ei_ebcdic1142},
#line 42 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1413, ei_utf16le},
    {-1}, {-1}, {-1},
#line 463 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1417, ei_ebcdic278},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 58 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1423, ei_iso8859_1},
    {-1},
#line 282 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1425, ei_jisx0212},
    {-1}, {-1},
#line 486 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1428, ei_ebcdic297},
#line 689 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1429, ei_iso2022_jp3},
#line 88 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1430, ei_iso8859_4},
    {-1}, {-1},
#line 159 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1433, ei_iso8859_15},
    {-1}, {-1}, {-1}, {-1},
#line 206 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1438, ei_cp862},
    {-1}, {-1}, {-1},
#line 155 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1442, ei_iso8859_14},
    {-1},
#line 28 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1444, ei_ucs2},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 47 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1450, ei_utf7},
    {-1}, {-1}, {-1}, {-1},
#line 222 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1455, ei_mac_greek},
    {-1},
#line 631 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1457, ei_ebcdic1147},
    {-1}, {-1},
#line 187 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1460, ei_cp1254},
#line 519 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1461, ei_ebcdic871},
#line 129 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1462, ei_iso8859_9},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 63 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1472, ei_iso8859_1},
    {-1}, {-1},
#line 106 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1475, ei_iso8859_7},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 107 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1483, ei_iso8859_7},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 103 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1492, ei_iso8859_6},
#line 341 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1493, ei_iso2022_cn},
    {-1}, {-1},
#line 688 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1496, ei_iso2022_jp3},
    {-1}, {-1},
#line 94 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1499, ei_iso8859_5},
    {-1},
#line 450 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1501, ei_ebcdic037},
#line 138 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1502, ei_iso8859_10},
    {-1},
#line 553 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1504, ei_ebcdic1097},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 87 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1511, ei_iso8859_4},
    {-1}, {-1}, {-1}, {-1},
#line 642 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1516, ei_ebcdic1149},
    {-1},
#line 44 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1518, ei_utf32be},
#line 292 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1519, ei_gb2312},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 301 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1526, ei_ksc5601},
#line 45 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1527, ei_utf32le},
    {-1}, {-1}, {-1}, {-1},
#line 340 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1532, ei_iso2022_cn},
    {-1}, {-1}, {-1},
#line 288 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1536, ei_iso646_cn},
    {-1}, {-1}, {-1}, {-1},
#line 459 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1541, ei_ebcdic277},
    {-1},
#line 278 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1543, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 270 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1554, ei_jisx0201},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 12 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1561, ei_ascii},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 305 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1567, ei_euc_jp},
#line 298 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1568, ei_ksc5601},
    {-1},
#line 80 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1570, ei_iso8859_3},
#line 579 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1571, ei_ebcdic1140},
    {-1},
#line 268 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1573, ei_iso646_jp},
    {-1}, {-1},
#line 223 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1576, ei_mac_turkish},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 147 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1582, ei_iso8859_13},
#line 71 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1583, ei_iso8859_2},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 105 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1601, ei_iso8859_7},
    {-1}, {-1},
#line 275 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1604, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 311 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1615, ei_sjis},
    {-1}, {-1},
#line 48 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1618, ei_utf7},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 476 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1628, ei_ebcdic284},
#line 79 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1629, ei_iso8859_3},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 272 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1639, ei_jisx0201},
    {-1}, {-1}, {-1}, {-1},
#line 274 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1644, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 487 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1650, ei_ebcdic297},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 134 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1657, ei_iso8859_10},
    {-1},
#line 99 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1659, ei_iso8859_6},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 685 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1671, ei_euc_jisx0213},
    {-1}, {-1}, {-1},
#line 645 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1675, ei_ebcdic1149},
    {-1},
#line 299 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1677, ei_ksc5601},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 283 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1686, ei_jisx0212},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 124 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1693, ei_iso8859_9},
    {-1}, {-1},
#line 137 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1696, ei_iso8859_10},
    {-1}, {-1}, {-1}, {-1},
#line 125 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1701, ei_iso8859_9},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 49 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1714, ei_ucs2internal},
    {-1}, {-1}, {-1}, {-1},
#line 50 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1719, ei_ucs2swapped},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 233 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1742, ei_georgian_academy},
#line 30 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1743, ei_ucs2be},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 51 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1760, ei_ucs4internal},
#line 181 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1761, ei_cp1252},
    {-1}, {-1}, {-1},
#line 52 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1765, ei_ucs4swapped},
#line 644 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1766, ei_ebcdic1149},
#line 224 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1767, ei_mac_hebrew},
#line 289 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1768, ei_iso646_cn},
    {-1}, {-1},
#line 312 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1771, ei_sjis},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 121 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1781, ei_iso8859_8},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 18 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1798, ei_ascii},
    {-1}, {-1}, {-1},
#line 115 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1802, ei_iso8859_7},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 287 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1812, ei_iso646_cn},
    {-1}, {-1},
#line 695 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1815, ei_riscos1},
    {-1}, {-1}, {-1},
#line 123 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1819, ei_iso8859_9},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 215 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1834, ei_mac_roman},
#line 17 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1835, ei_ascii},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 114 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1845, ei_iso8859_7},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 322 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1851, ei_iso2022_jpms},
    {-1},
#line 371 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1853, ei_iso2022_kr},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 358 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1870, ei_big5hkscs2001},
    {-1}, {-1}, {-1}, {-1},
#line 285 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1875, ei_jisx0212},
    {-1}, {-1},
#line 192 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1878, ei_cp1256},
#line 189 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1879, ei_cp1255},
    {-1},
#line 180 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1881, ei_cp1252},
    {-1}, {-1}, {-1}, {-1},
#line 177 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1886, ei_cp1251},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 370 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1892, ei_iso2022_kr},
#line 280 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1893, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 362 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1899, ei_big5hkscs2008},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 359 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1911, ei_big5hkscs2004},
    {-1}, {-1}, {-1},
#line 198 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1915, ei_cp1258},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 300 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1923, ei_ksc5601},
    {-1}, {-1}, {-1},
#line 186 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1927, ei_cp1254},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 616 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1933, ei_ebcdic1145},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 306 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1952, ei_euc_jp},
#line 76 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1953, ei_iso8859_3},
    {-1}, {-1}, {-1},
#line 174 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1957, ei_cp1250},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 183 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1997, ei_cp1253},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 130 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2020, ei_iso8859_9},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 352 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2050, ei_ces_big5},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 296 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2062, ei_isoir165},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 14 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2093, ei_ascii},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 144 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2109, ei_iso8859_13},
    {-1}, {-1}, {-1},
#line 195 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2113, ei_cp1257},
    {-1},
#line 234 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2115, ei_georgian_ps},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 184 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2156, ei_cp1253},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 256 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2188, ei_cp874},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 357 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2206, ei_big5hkscs1999},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 151 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2218, ei_iso8859_14},
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
#line 360 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2327, ei_big5hkscs2008},
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
    {-1}, {-1}, {-1},
#line 686 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2457, ei_shift_jisx0213},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 687 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2479, ei_shift_jisx0213},
    {-1}, {-1},
#line 313 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2482, ei_sjis},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 309 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2504, ei_sjis},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 361 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2529, ei_big5hkscs2008},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 336 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2564, ei_cp936},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 310 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2630, ei_sjis}
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

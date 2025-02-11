/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: gperf -L ANSI-C -m 10 lib/generated/aliases.gperf  */
/* Computed positions: -k'1-10,$' */

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

#line 2 "lib/generated/aliases.gperf"
struct alias { int name; unsigned int encoding_index; };

#define TOTAL_KEYWORDS 840
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 39
#define MIN_HASH_VALUE 4
#define MAX_HASH_VALUE 4067
/* maximum key range = 4064, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
aliases_hash (register const char *str, register size_t len)
{
  static const unsigned short asso_values[] =
    {
      4068, 4068, 4068, 4068, 4068, 4068, 4068, 4068, 4068, 4068,
      4068, 4068, 4068, 4068, 4068, 4068, 4068, 4068, 4068, 4068,
      4068, 4068, 4068, 4068, 4068, 4068, 4068, 4068, 4068, 4068,
      4068, 4068, 4068, 4068, 4068, 4068, 4068, 4068, 4068, 4068,
      4068, 4068, 4068, 4068, 4068,    1,   44, 4068,    3,    0,
        34,  260,   15,    6,   98,  544,   64,  341,  644,  844,
       849,  805, 4068, 4068, 4068,  530,  441,    0,  748,  328,
       469,    5,  177,    0,  589,  510,    3,    1,   11,  386,
        25,  112,  151,    0,  424,    2,  182,  536,  220,   14,
         2,    8,    0,    0, 4068, 4068, 4068, 4068, 4068, 4068,
      4068, 4068, 4068, 4068, 4068, 4068, 4068, 4068, 4068, 4068,
      4068, 4068, 4068, 4068, 4068, 4068, 4068, 4068, 4068, 4068,
      4068, 4068, 4068, 4068, 4068, 4068, 4068, 4068, 4068, 4068,
      4068, 4068
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
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
        hval += asso_values[(unsigned char)str[5]+4];
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
        hval += asso_values[(unsigned char)str[1]+2];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

struct stringpool_t
  {
    char stringpool_str4[sizeof("MAC")];
    char stringpool_str6[sizeof("US")];
    char stringpool_str7[sizeof("SJIS")];
    char stringpool_str22[sizeof("1201")];
    char stringpool_str25[sizeof("1251")];
    char stringpool_str26[sizeof("12001")];
    char stringpool_str28[sizeof("1200")];
    char stringpool_str31[sizeof("1250")];
    char stringpool_str32[sizeof("12000")];
    char stringpool_str37[sizeof("1255")];
    char stringpool_str38[sizeof("CN")];
    char stringpool_str45[sizeof("425")];
    char stringpool_str48[sizeof("10010")];
    char stringpool_str49[sizeof("500")];
    char stringpool_str51[sizeof("10000")];
    char stringpool_str54[sizeof("L2")];
    char stringpool_str55[sizeof("1254")];
    char stringpool_str57[sizeof("10005")];
    char stringpool_str63[sizeof("424")];
    char stringpool_str75[sizeof("10004")];
    char stringpool_str76[sizeof("10021")];
    char stringpool_str77[sizeof("5601")];
    char stringpool_str79[sizeof("U32")];
    char stringpool_str84[sizeof("1025")];
    char stringpool_str89[sizeof("CSUCS4")];
    char stringpool_str93[sizeof("1252")];
    char stringpool_str106[sizeof("10081")];
    char stringpool_str108[sizeof("1361")];
    char stringpool_str113[sizeof("50221")];
    char stringpool_str118[sizeof("L4")];
    char stringpool_str125[sizeof("50225")];
    char stringpool_str131[sizeof("861")];
    char stringpool_str137[sizeof("860")];
    char stringpool_str143[sizeof("865")];
    char stringpool_str153[sizeof("1258")];
    char stringpool_str155[sizeof("CPIS")];
    char stringpool_str161[sizeof("864")];
    char stringpool_str166[sizeof("16804")];
    char stringpool_str167[sizeof("L6")];
    char stringpool_str171[sizeof("CP500")];
    char stringpool_str172[sizeof("CP1051")];
    char stringpool_str174[sizeof("10082")];
    char stringpool_str176[sizeof("CP10010")];
    char stringpool_str178[sizeof("CP1141")];
    char stringpool_str181[sizeof("HZ")];
    char stringpool_str185[sizeof("CP10000")];
    char stringpool_str190[sizeof("CP1140")];
    char stringpool_str191[sizeof("CP10005")];
    char stringpool_str192[sizeof("CP154")];
    char stringpool_str195[sizeof("CYRILLIC")];
    char stringpool_str197[sizeof("CSVISCII")];
    char stringpool_str199[sizeof("862")];
    char stringpool_str200[sizeof("CP1201")];
    char stringpool_str201[sizeof("838")];
    char stringpool_str202[sizeof("MSCYRL")];
    char stringpool_str203[sizeof("CP1251")];
    char stringpool_str209[sizeof("CP10004")];
    char stringpool_str210[sizeof("CP12001")];
    char stringpool_str212[sizeof("CP1200")];
    char stringpool_str214[sizeof("MACCYRILLIC")];
    char stringpool_str215[sizeof("CP1250")];
    char stringpool_str216[sizeof("CP12000")];
    char stringpool_str217[sizeof("CP425")];
    char stringpool_str221[sizeof("1256")];
    char stringpool_str225[sizeof("CP01141")];
    char stringpool_str231[sizeof("CP01140")];
    char stringpool_str232[sizeof("CP850")];
    char stringpool_str235[sizeof("CP424")];
    char stringpool_str237[sizeof("CP01145")];
    char stringpool_str238[sizeof("CP855")];
    char stringpool_str241[sizeof("10006")];
    char stringpool_str242[sizeof("CP1154")];
    char stringpool_str248[sizeof("PT154")];
    char stringpool_str249[sizeof("1046")];
    char stringpool_str251[sizeof("CP1144")];
    char stringpool_str255[sizeof("CP01144")];
    char stringpool_str260[sizeof("CP280")];
    char stringpool_str261[sizeof("CP1161")];
    char stringpool_str262[sizeof("CP10021")];
    char stringpool_str265[sizeof("L1")];
    char stringpool_str266[sizeof("CP285")];
    char stringpool_str268[sizeof("1026")];
    char stringpool_str270[sizeof("CP1124")];
    char stringpool_str271[sizeof("L3")];
    char stringpool_str272[sizeof("L10")];
    char stringpool_str273[sizeof("CP1160")];
    char stringpool_str276[sizeof("CP1254")];
    char stringpool_str279[sizeof("1141")];
    char stringpool_str280[sizeof("CP65001")];
    char stringpool_str282[sizeof("1155")];
    char stringpool_str284[sizeof("CP284")];
    char stringpool_str285[sizeof("1140")];
    char stringpool_str286[sizeof("CP65000")];
    char stringpool_str289[sizeof("CP1112")];
    char stringpool_str290[sizeof("CP880")];
    char stringpool_str291[sizeof("1145")];
    char stringpool_str293[sizeof("CP01142")];
    char stringpool_str294[sizeof("CP852")];
    char stringpool_str296[sizeof("X0201")];
    char stringpool_str299[sizeof("CP50221")];
    char stringpool_str300[sizeof("1154")];
    char stringpool_str304[sizeof("CP1142")];
    char stringpool_str309[sizeof("1144")];
    char stringpool_str310[sizeof("1125")];
    char stringpool_str311[sizeof("CP50225")];
    char stringpool_str318[sizeof("CP861")];
    char stringpool_str322[sizeof("CP282")];
    char stringpool_str323[sizeof("CP1122")];
    char stringpool_str324[sizeof("CP860")];
    char stringpool_str327[sizeof("866")];
    char stringpool_str328[sizeof("1124")];
    char stringpool_str329[sizeof("CP1252")];
    char stringpool_str330[sizeof("CP865")];
    char stringpool_str332[sizeof("1112")];
    char stringpool_str334[sizeof("CP1164")];
    char stringpool_str347[sizeof("1142")];
    char stringpool_str348[sizeof("CP864")];
    char stringpool_str353[sizeof("CP01148")];
    char stringpool_str354[sizeof("CP858")];
    char stringpool_str361[sizeof("X0212")];
    char stringpool_str362[sizeof("1161")];
    char stringpool_str364[sizeof("UCS4")];
    char stringpool_str365[sizeof("CP16804")];
    char stringpool_str366[sizeof("1122")];
    char stringpool_str368[sizeof("1160")];
    char stringpool_str374[sizeof("1165")];
    char stringpool_str375[sizeof("CP10006")];
    char stringpool_str386[sizeof("CP862")];
    char stringpool_str387[sizeof("CP1162")];
    char stringpool_str389[sizeof("924")];
    char stringpool_str392[sizeof("1164")];
    char stringpool_str395[sizeof("646")];
    char stringpool_str398[sizeof("1158")];
    char stringpool_str402[sizeof("UCS2")];
    char stringpool_str407[sizeof("1148")];
    char stringpool_str408[sizeof("871")];
    char stringpool_str414[sizeof("870")];
    char stringpool_str418[sizeof("932")];
    char stringpool_str420[sizeof("875")];
    char stringpool_str421[sizeof("CP01146")];
    char stringpool_str422[sizeof("CP856")];
    char stringpool_str423[sizeof("CP1131")];
    char stringpool_str424[sizeof("X0208")];
    char stringpool_str427[sizeof("922")];
    char stringpool_str430[sizeof("1162")];
    char stringpool_str431[sizeof("20866")];
    char stringpool_str433[sizeof("CP866U")];
    char stringpool_str435[sizeof("CP1130")];
    char stringpool_str438[sizeof("874")];
    char stringpool_str450[sizeof("LATIN1")];
    char stringpool_str457[sizeof("LATIN10")];
    char stringpool_str461[sizeof("U16")];
    char stringpool_str462[sizeof("CPGR")];
    char stringpool_str463[sizeof("CSPC850MULTILINGUAL")];
    char stringpool_str464[sizeof("CP-GR")];
    char stringpool_str466[sizeof("1156")];
    char stringpool_str475[sizeof("1146")];
    char stringpool_str484[sizeof("CSIBM01141")];
    char stringpool_str490[sizeof("CSIBM01140")];
    char stringpool_str496[sizeof("CSIBM01145")];
    char stringpool_str502[sizeof("HP15CN")];
    char stringpool_str505[sizeof("CSIBM1125")];
    char stringpool_str506[sizeof("278")];
    char stringpool_str509[sizeof("CP950")];
    char stringpool_str510[sizeof("CP1155")];
    char stringpool_str514[sizeof("CP866")];
    char stringpool_str519[sizeof("CP1145")];
    char stringpool_str521[sizeof("CP1361")];
    char stringpool_str523[sizeof("LATIN4")];
    char stringpool_str524[sizeof("1131")];
    char stringpool_str530[sizeof("1130")];
    char stringpool_str537[sizeof("ASCII")];
    char stringpool_str538[sizeof("CP1125")];
    char stringpool_str540[sizeof("CSASCII")];
    char stringpool_str541[sizeof("CP1025")];
    char stringpool_str542[sizeof("USASCII")];
    char stringpool_str544[sizeof("CP1255")];
    char stringpool_str545[sizeof("1253")];
    char stringpool_str546[sizeof("936")];
    char stringpool_str549[sizeof("CP1132")];
    char stringpool_str551[sizeof("MSANSI")];
    char stringpool_str552[sizeof("CSIBM01142")];
    char stringpool_str553[sizeof("423")];
    char stringpool_str555[sizeof("L5")];
    char stringpool_str556[sizeof("ISOIR101")];
    char stringpool_str557[sizeof("CSIBM1161")];
    char stringpool_str558[sizeof("1166")];
    char stringpool_str559[sizeof("ISOIR110")];
    char stringpool_str561[sizeof("CP924")];
    char stringpool_str562[sizeof("ISOIR100")];
    char stringpool_str576[sizeof("LATIN2")];
    char stringpool_str577[sizeof("154")];
    char stringpool_str579[sizeof("CSISO2022CN")];
    char stringpool_str580[sizeof("CSIBM424")];
    char stringpool_str582[sizeof("ISOIR14")];
    char stringpool_str588[sizeof("ISO2022CN")];
    char stringpool_str592[sizeof("1132")];
    char stringpool_str594[sizeof("UHC")];
    char stringpool_str598[sizeof("ISOIR144")];
    char stringpool_str599[sizeof("CP922")];
    char stringpool_str602[sizeof("CP1165")];
    char stringpool_str608[sizeof("CP838")];
    char stringpool_str610[sizeof("PTCP154")];
    char stringpool_str612[sizeof("CSIBM01148")];
    char stringpool_str617[sizeof("850")];
    char stringpool_str620[sizeof("CSIBM280")];
    char stringpool_str623[sizeof("855")];
    char stringpool_str624[sizeof("51950")];
    char stringpool_str625[sizeof("CSIBM1162")];
    char stringpool_str626[sizeof("CSIBM285")];
    char stringpool_str632[sizeof("12712")];
    char stringpool_str633[sizeof("CP00924")];
    char stringpool_str638[sizeof("KSC5601")];
    char stringpool_str644[sizeof("CSIBM284")];
    char stringpool_str646[sizeof("MS874")];
    char stringpool_str651[sizeof("863")];
    char stringpool_str653[sizeof("65001")];
    char stringpool_str657[sizeof("21866")];
    char stringpool_str659[sizeof("65000")];
    char stringpool_str663[sizeof("ISOIR165")];
    char stringpool_str667[sizeof("ANSI1251")];
    char stringpool_str679[sizeof("852")];
    char stringpool_str680[sizeof("CSKZ1048")];
    char stringpool_str682[sizeof("UCS4LE")];
    char stringpool_str687[sizeof("280")];
    char stringpool_str692[sizeof("CSIBM1026")];
    char stringpool_str693[sizeof("285")];
    char stringpool_str694[sizeof("RUSCII")];
    char stringpool_str695[sizeof("KOI8U")];
    char stringpool_str696[sizeof("ISOIR148")];
    char stringpool_str697[sizeof("CP00858")];
    char stringpool_str699[sizeof("VISCII")];
    char stringpool_str701[sizeof("UCS2LE")];
    char stringpool_str706[sizeof("U32LE")];
    char stringpool_str711[sizeof("284")];
    char stringpool_str712[sizeof("U8")];
    char stringpool_str713[sizeof("L8")];
    char stringpool_str717[sizeof("880")];
    char stringpool_str725[sizeof("CP423")];
    char stringpool_str739[sizeof("858")];
    char stringpool_str741[sizeof("CYRILLICASIAN")];
    char stringpool_str742[sizeof("CYRIILLICASIAN")];
    char stringpool_str745[sizeof("CP01143")];
    char stringpool_str746[sizeof("CP853")];
    char stringpool_str747[sizeof("VISCII1.11")];
    char stringpool_str749[sizeof("282")];
    char stringpool_str758[sizeof("10029")];
    char stringpool_str764[sizeof("CP871")];
    char stringpool_str767[sizeof("JP")];
    char stringpool_str770[sizeof("CP870")];
    char stringpool_str776[sizeof("CP875")];
    char stringpool_str781[sizeof("IBM01141")];
    char stringpool_str782[sizeof("IBM500")];
    char stringpool_str783[sizeof("ISOIR126")];
    char stringpool_str785[sizeof("UTF8")];
    char stringpool_str787[sizeof("IBM01140")];
    char stringpool_str790[sizeof("1153")];
    char stringpool_str791[sizeof("LATIN5")];
    char stringpool_str793[sizeof("IBM01145")];
    char stringpool_str794[sizeof("CP874")];
    char stringpool_str796[sizeof("28605")];
    char stringpool_str799[sizeof("1143")];
    char stringpool_str801[sizeof("CSBIG5")];
    char stringpool_str802[sizeof("CSIBM500")];
    char stringpool_str805[sizeof("MS936")];
    char stringpool_str807[sizeof("856")];
    char stringpool_str810[sizeof("CP12712")];
    char stringpool_str811[sizeof("IBM01144")];
    char stringpool_str813[sizeof("869")];
    char stringpool_str818[sizeof("1123")];
    char stringpool_str820[sizeof("IBM1141")];
    char stringpool_str823[sizeof("52936")];
    char stringpool_str824[sizeof("CNBIG5")];
    char stringpool_str825[sizeof("CP932")];
    char stringpool_str826[sizeof("IBM1140")];
    char stringpool_str830[sizeof("IBM1112")];
    char stringpool_str832[sizeof("IBM1145")];
    char stringpool_str838[sizeof("CP863")];
    char stringpool_str843[sizeof("IBM850")];
    char stringpool_str847[sizeof("ISOIR166")];
    char stringpool_str849[sizeof("IBM01142")];
    char stringpool_str850[sizeof("IBM1144")];
    char stringpool_str852[sizeof("CP51950")];
    char stringpool_str854[sizeof("UTF16")];
    char stringpool_str859[sizeof("KOI8RU")];
    char stringpool_str861[sizeof("R8")];
    char stringpool_str862[sizeof("CP278")];
    char stringpool_str866[sizeof("IBM1125")];
    char stringpool_str869[sizeof("IBM1025")];
    char stringpool_str871[sizeof("IBM280")];
    char stringpool_str875[sizeof("ISOIR226")];
    char stringpool_str877[sizeof("CSIBM00924")];
    char stringpool_str882[sizeof("1163")];
    char stringpool_str883[sizeof("IBM424")];
    char stringpool_str884[sizeof("IBM1124")];
    char stringpool_str888[sizeof("IBM1142")];
    char stringpool_str889[sizeof("U7")];
    char stringpool_str890[sizeof("L7")];
    char stringpool_str891[sizeof("EUCCN")];
    char stringpool_str894[sizeof("950")];
    char stringpool_str898[sizeof("273")];
    char stringpool_str900[sizeof("775")];
    char stringpool_str901[sizeof("IBM880")];
    char stringpool_str902[sizeof("CP819")];
    char stringpool_str905[sizeof("CP1156")];
    char stringpool_str906[sizeof("54936")];
    char stringpool_str907[sizeof("CP01149")];
    char stringpool_str909[sizeof("IBM01148")];
    char stringpool_str911[sizeof("ISOIR230")];
    char stringpool_str914[sizeof("CP1146")];
    char stringpool_str916[sizeof("CNGB")];
    char stringpool_str917[sizeof("CP1046")];
    char stringpool_str920[sizeof("CSPTCP154")];
    char stringpool_str922[sizeof("IBM1122")];
    char stringpool_str923[sizeof("IBM861")];
    char stringpool_str927[sizeof("UNICODE11")];
    char stringpool_str928[sizeof("SYSTEM1125")];
    char stringpool_str932[sizeof("IBM284")];
    char stringpool_str935[sizeof("IBM860")];
    char stringpool_str936[sizeof("CP1026")];
    char stringpool_str937[sizeof("MACTHAI")];
    char stringpool_str939[sizeof("CP1256")];
    char stringpool_str940[sizeof("51932")];
    char stringpool_str941[sizeof("ISOIR138")];
    char stringpool_str944[sizeof("CP10029")];
    char stringpool_str948[sizeof("IBM1148")];
    char stringpool_str953[sizeof("CP936")];
    char stringpool_str957[sizeof("IBM852")];
    char stringpool_str960[sizeof("TCVN")];
    char stringpool_str961[sizeof("1149")];
    char stringpool_str962[sizeof("943")];
    char stringpool_str967[sizeof("CP1153")];
    char stringpool_str972[sizeof("BIG5")];
    char stringpool_str976[sizeof("CP1143")];
    char stringpool_str977[sizeof("IBM01146")];
    char stringpool_str980[sizeof("1129")];
    char stringpool_str981[sizeof("MACINTOSH")];
    char stringpool_str983[sizeof("CSPCP852")];
    char stringpool_str985[sizeof("IBM282")];
    char stringpool_str986[sizeof("UTF32")];
    char stringpool_str991[sizeof("MSEE")];
    char stringpool_str993[sizeof("KOI8R")];
    char stringpool_str995[sizeof("CP1123")];
    char stringpool_str996[sizeof("IBM864")];
    char stringpool_str997[sizeof("CP1166")];
    char stringpool_str1000[sizeof("CP869")];
    char stringpool_str1001[sizeof("CP1253")];
    char stringpool_str1004[sizeof("CSIBM01143")];
    char stringpool_str1009[sizeof("819")];
    char stringpool_str1013[sizeof("CP10081")];
    char stringpool_str1015[sizeof("ISOIR58")];
    char stringpool_str1016[sizeof("IBM1146")];
    char stringpool_str1019[sizeof("IBM1046")];
    char stringpool_str1020[sizeof("STRK10482002")];
    char stringpool_str1024[sizeof("U16LE")];
    char stringpool_str1027[sizeof("CSEUCKR")];
    char stringpool_str1030[sizeof("28591")];
    char stringpool_str1032[sizeof("CP943")];
    char stringpool_str1035[sizeof("CSHPROMAN8")];
    char stringpool_str1042[sizeof("28595")];
    char stringpool_str1044[sizeof("1133")];
    char stringpool_str1049[sizeof("IBM862")];
    char stringpool_str1053[sizeof("IBM1026")];
    char stringpool_str1059[sizeof("CP1163")];
    char stringpool_str1060[sizeof("28594")];
    char stringpool_str1063[sizeof("CP4971")];
    char stringpool_str1067[sizeof("CP28591")];
    char stringpool_str1070[sizeof("CSIBM423")];
    char stringpool_str1072[sizeof("MSKANJI")];
    char stringpool_str1076[sizeof("CP1158")];
    char stringpool_str1077[sizeof("CSIBM1163")];
    char stringpool_str1079[sizeof("CP28595")];
    char stringpool_str1081[sizeof("CP10082")];
    char stringpool_str1085[sizeof("CP1148")];
    char stringpool_str1089[sizeof("RK1048")];
    char stringpool_str1090[sizeof("TIS620")];
    char stringpool_str1092[sizeof("ARMSCII8")];
    char stringpool_str1094[sizeof("TIS6200")];
    char stringpool_str1096[sizeof("CP21866")];
    char stringpool_str1097[sizeof("CP28594")];
    char stringpool_str1098[sizeof("28592")];
    char stringpool_str1099[sizeof("CP20866")];
    char stringpool_str1102[sizeof("CSGB2312")];
    char stringpool_str1109[sizeof("IBM1155")];
    char stringpool_str1110[sizeof("CP1258")];
    char stringpool_str1112[sizeof("437")];
    char stringpool_str1113[sizeof("1257")];
    char stringpool_str1114[sizeof("IBMEUCCN")];
    char stringpool_str1116[sizeof("CCSID01141")];
    char stringpool_str1117[sizeof("CP51932")];
    char stringpool_str1120[sizeof("UCS4BE")];
    char stringpool_str1122[sizeof("CCSID01140")];
    char stringpool_str1124[sizeof("949")];
    char stringpool_str1127[sizeof("IBM1154")];
    char stringpool_str1128[sizeof("CCSID01145")];
    char stringpool_str1129[sizeof("GEORGIANPS")];
    char stringpool_str1130[sizeof("10017")];
    char stringpool_str1131[sizeof("853")];
    char stringpool_str1133[sizeof("10007")];
    char stringpool_str1135[sizeof("CP28592")];
    char stringpool_str1137[sizeof("IBM1250")];
    char stringpool_str1139[sizeof("UCS2BE")];
    char stringpool_str1141[sizeof("1047")];
    char stringpool_str1143[sizeof("IBM1255")];
    char stringpool_str1144[sizeof("U32BE")];
    char stringpool_str1146[sizeof("CCSID01144")];
    char stringpool_str1151[sizeof("IBM425")];
    char stringpool_str1155[sizeof("ISO646US")];
    char stringpool_str1158[sizeof("28598")];
    char stringpool_str1160[sizeof("DOS862")];
    char stringpool_str1161[sizeof("IBM1254")];
    char stringpool_str1166[sizeof("CSIBM01149")];
    char stringpool_str1168[sizeof("ISOIR203")];
    char stringpool_str1172[sizeof("IBM855")];
    char stringpool_str1174[sizeof("ISOCELTIC")];
    char stringpool_str1175[sizeof("ISO646CN")];
    char stringpool_str1177[sizeof("ISO10646UCS4")];
    char stringpool_str1181[sizeof("ISO2022JP1")];
    char stringpool_str1182[sizeof("CSISO2022JP")];
    char stringpool_str1183[sizeof("ISO2022JPMS")];
    char stringpool_str1184[sizeof("CCSID01142")];
    char stringpool_str1185[sizeof("GB2312")];
    char stringpool_str1186[sizeof("LATIN6")];
    char stringpool_str1190[sizeof("L9")];
    char stringpool_str1192[sizeof("CSISO2022JP2")];
    char stringpool_str1194[sizeof("CP949")];
    char stringpool_str1195[sizeof("CP28598")];
    char stringpool_str1196[sizeof("ISO10646UCS2")];
    char stringpool_str1199[sizeof("IBM1252")];
    char stringpool_str1200[sizeof("IBM285")];
    char stringpool_str1205[sizeof("ISO2022JP")];
    char stringpool_str1206[sizeof("ISO88591")];
    char stringpool_str1207[sizeof("ISO885911")];
    char stringpool_str1209[sizeof("IBM924")];
    char stringpool_str1210[sizeof("MACROMAN")];
    char stringpool_str1211[sizeof("TIS620.25291")];
    char stringpool_str1212[sizeof("CNS11643")];
    char stringpool_str1213[sizeof("ISO885910")];
    char stringpool_str1218[sizeof("ISO88595")];
    char stringpool_str1219[sizeof("ISO885915")];
    char stringpool_str1221[sizeof("CP1133")];
    char stringpool_str1222[sizeof("CSIBM278")];
    char stringpool_str1223[sizeof("GB231280")];
    char stringpool_str1225[sizeof("IBM1158")];
    char stringpool_str1226[sizeof("28596")];
    char stringpool_str1229[sizeof("CSISO2022KR")];
    char stringpool_str1230[sizeof("ECMA114")];
    char stringpool_str1233[sizeof("ISO2022JP2004")];
    char stringpool_str1236[sizeof("ISO88594")];
    char stringpool_str1237[sizeof("ISO885914")];
    char stringpool_str1238[sizeof("ISOIR109")];
    char stringpool_str1241[sizeof("ISOIR159")];
    char stringpool_str1244[sizeof("CCSID01148")];
    char stringpool_str1248[sizeof("LATIN3")];
    char stringpool_str1249[sizeof("ISO2022JP2")];
    char stringpool_str1250[sizeof("ISOIR149")];
    char stringpool_str1251[sizeof("CP51949")];
    char stringpool_str1254[sizeof("CP273")];
    char stringpool_str1256[sizeof("CP775")];
    char stringpool_str1258[sizeof("CP10017")];
    char stringpool_str1259[sizeof("IBM1258")];
    char stringpool_str1260[sizeof("CP54936")];
    char stringpool_str1262[sizeof("IBM922")];
    char stringpool_str1263[sizeof("CP28596")];
    char stringpool_str1264[sizeof("IBM865")];
    char stringpool_str1266[sizeof("NEXTSTEP")];
    char stringpool_str1267[sizeof("CP10007")];
    char stringpool_str1268[sizeof("10079")];
    char stringpool_str1272[sizeof("CSIBM905")];
    char stringpool_str1274[sizeof("ISO88592")];
    char stringpool_str1277[sizeof("HZGB2312")];
    char stringpool_str1279[sizeof("CP52936")];
    char stringpool_str1286[sizeof("JIS0208")];
    char stringpool_str1287[sizeof("ISOIR6")];
    char stringpool_str1288[sizeof("MSHEBR")];
    char stringpool_str1291[sizeof("CSISO58GB231280")];
    char stringpool_str1293[sizeof("IBM1156")];
    char stringpool_str1300[sizeof("IBM1131")];
    char stringpool_str1301[sizeof("IBM01143")];
    char stringpool_str1302[sizeof("CCSID00858")];
    char stringpool_str1304[sizeof("28603")];
    char stringpool_str1305[sizeof("XMACCYRILLIC")];
    char stringpool_str1306[sizeof("IBM1130")];
    char stringpool_str1309[sizeof("51949")];
    char stringpool_str1312[sizeof("CCSID01146")];
    char stringpool_str1313[sizeof("CP01147")];
    char stringpool_str1314[sizeof("CP857")];
    char stringpool_str1318[sizeof("CP1149")];
    char stringpool_str1319[sizeof("CSIBM855")];
    char stringpool_str1327[sizeof("IBM1256")];
    char stringpool_str1328[sizeof("ECMA118")];
    char stringpool_str1332[sizeof("ISO2022CNEXT")];
    char stringpool_str1334[sizeof("ISO88598")];
    char stringpool_str1337[sizeof("CP1129")];
    char stringpool_str1340[sizeof("IBM1143")];
    char stringpool_str1341[sizeof("HPROMAN8")];
    char stringpool_str1350[sizeof("TDS565")];
    char stringpool_str1353[sizeof("CSISO159JISX02121990")];
    char stringpool_str1357[sizeof("LATIN8")];
    char stringpool_str1358[sizeof("1157")];
    char stringpool_str1367[sizeof("1147")];
    char stringpool_str1368[sizeof("IBM1132")];
    char stringpool_str1369[sizeof("IBM871")];
    char stringpool_str1371[sizeof("CSIBM880")];
    char stringpool_str1374[sizeof("IBM1123")];
    char stringpool_str1376[sizeof("PCK")];
    char stringpool_str1377[sizeof("GB18030")];
    char stringpool_str1378[sizeof("ISO2022KR")];
    char stringpool_str1379[sizeof("UNICODEBIG")];
    char stringpool_str1380[sizeof("CSIBMTHAI")];
    char stringpool_str1381[sizeof("IBM870")];
    char stringpool_str1384[sizeof("38598")];
    char stringpool_str1388[sizeof("KSC56011989")];
    char stringpool_str1389[sizeof("CSISOLATIN1")];
    char stringpool_str1390[sizeof("TACTIS")];
    char stringpool_str1393[sizeof("CSISOLATIN10")];
    char stringpool_str1394[sizeof("CSISOLATINARABIC")];
    char stringpool_str1395[sizeof("CSISOLATIN5")];
    char stringpool_str1396[sizeof("CSISOLATINCYRILLIC")];
    char stringpool_str1398[sizeof("ATARI")];
    char stringpool_str1399[sizeof("CSIBM861")];
    char stringpool_str1400[sizeof("IBM1161")];
    char stringpool_str1401[sizeof("CSISO14JISC6220RO")];
    char stringpool_str1402[sizeof("ISO88596")];
    char stringpool_str1403[sizeof("ISO885916")];
    char stringpool_str1404[sizeof("CSISOLATIN4")];
    char stringpool_str1405[sizeof("CSIBM860")];
    char stringpool_str1406[sizeof("IBM1160")];
    char stringpool_str1407[sizeof("4971")];
    char stringpool_str1411[sizeof("CSIBM865")];
    char stringpool_str1412[sizeof("IBM1165")];
    char stringpool_str1415[sizeof("367")];
    char stringpool_str1421[sizeof("CP38598")];
    char stringpool_str1423[sizeof("CSISOLATIN2")];
    char stringpool_str1425[sizeof("UCS4INTERNAL")];
    char stringpool_str1429[sizeof("CSIBM864")];
    char stringpool_str1430[sizeof("IBM1164")];
    char stringpool_str1431[sizeof("JISX0201")];
    char stringpool_str1435[sizeof("CSIBM858")];
    char stringpool_str1437[sizeof("TIS620.25331")];
    char stringpool_str1439[sizeof("UTF16LE")];
    char stringpool_str1440[sizeof("TIS620.25330")];
    char stringpool_str1444[sizeof("UCS2INTERNAL")];
    char stringpool_str1446[sizeof("IBM905")];
    char stringpool_str1447[sizeof("KZ1048")];
    char stringpool_str1460[sizeof("MACARABIC")];
    char stringpool_str1462[sizeof("U16BE")];
    char stringpool_str1463[sizeof("IBM01149")];
    char stringpool_str1466[sizeof("277")];
    char stringpool_str1468[sizeof("IBM1162")];
    char stringpool_str1470[sizeof("XMACCE")];
    char stringpool_str1477[sizeof("UNICODE11UTF7")];
    char stringpool_str1482[sizeof("MSTURK")];
    char stringpool_str1483[sizeof("MACTURKISH")];
    char stringpool_str1487[sizeof("CSISOLATIN6")];
    char stringpool_str1488[sizeof("IBM932")];
    char stringpool_str1493[sizeof("CSUNICODE11")];
    char stringpool_str1496[sizeof("JISX0212")];
    char stringpool_str1501[sizeof("SHIFTJIS")];
    char stringpool_str1502[sizeof("IBM1149")];
    char stringpool_str1507[sizeof("CP037")];
    char stringpool_str1508[sizeof("EUCJP")];
    char stringpool_str1509[sizeof("CCSID00924")];
    char stringpool_str1511[sizeof("CSKSC56011987")];
    char stringpool_str1513[sizeof("MACGREEK")];
    char stringpool_str1514[sizeof("MSGREEK")];
    char stringpool_str1515[sizeof("JISX0212.19900")];
    char stringpool_str1519[sizeof("CP437")];
    char stringpool_str1526[sizeof("IBM921CP28603")];
    char stringpool_str1528[sizeof("IBM1168")];
    char stringpool_str1529[sizeof("C99")];
    char stringpool_str1534[sizeof("BIG5HKSCS")];
    char stringpool_str1536[sizeof("IBM1129")];
    char stringpool_str1537[sizeof("ISO646.IRV:1991")];
    char stringpool_str1539[sizeof("KOI8T")];
    char stringpool_str1542[sizeof("BIG52003")];
    char stringpool_str1543[sizeof("CSMACINTOSH")];
    char stringpool_str1550[sizeof("28593")];
    char stringpool_str1551[sizeof("CP1157")];
    char stringpool_str1557[sizeof("SHIFTJIS2004")];
    char stringpool_str1559[sizeof("JISX0208")];
    char stringpool_str1560[sizeof("CP1147")];
    char stringpool_str1562[sizeof("CNGBISOIR165")];
    char stringpool_str1563[sizeof("CP1047")];
    char stringpool_str1565[sizeof("CSIBM1047")];
    char stringpool_str1567[sizeof("IBM856")];
    char stringpool_str1569[sizeof("IBMCP1133")];
    char stringpool_str1572[sizeof("CSIBM01147")];
    char stringpool_str1575[sizeof("CSGB18030")];
    char stringpool_str1576[sizeof("ISOIR199")];
    char stringpool_str1585[sizeof("CP1257")];
    char stringpool_str1587[sizeof("CP28593")];
    char stringpool_str1590[sizeof("LATIN9")];
    char stringpool_str1591[sizeof("KSC56011987")];
    char stringpool_str1593[sizeof("MULELAO1")];
    char stringpool_str1595[sizeof("CSIBM866")];
    char stringpool_str1596[sizeof("IBM1166")];
    char stringpool_str1602[sizeof("CP367")];
    char stringpool_str1608[sizeof("IBM423")];
    char stringpool_str1612[sizeof("1137")];
    char stringpool_str1613[sizeof("ASMO708")];
    char stringpool_str1614[sizeof("CSIBM273")];
    char stringpool_str1615[sizeof("CSPC8CODEPAGE1144")];
    char stringpool_str1617[sizeof("IBM1153")];
    char stringpool_str1619[sizeof("CP297")];
    char stringpool_str1621[sizeof("DECHANZI")];
    char stringpool_str1629[sizeof("IBM853")];
    char stringpool_str1631[sizeof("CSEUCTW")];
    char stringpool_str1632[sizeof("IBM00924")];
    char stringpool_str1635[sizeof("UTF32LE")];
    char stringpool_str1636[sizeof("CCSID01143")];
    char stringpool_str1637[sizeof("DECHANYU")];
    char stringpool_str1641[sizeof("737")];
    char stringpool_str1647[sizeof("ISOIR157")];
    char stringpool_str1649[sizeof("CSISOLATIN3")];
    char stringpool_str1652[sizeof("HEBREW")];
    char stringpool_str1653[sizeof("GEORGIANACADEMY")];
    char stringpool_str1658[sizeof("MACCROATIAN")];
    char stringpool_str1659[sizeof("IBM866")];
    char stringpool_str1661[sizeof("CSWINDOWS1251")];
    char stringpool_str1664[sizeof("CSWINDOWS1250")];
    char stringpool_str1667[sizeof("CSWINDOWS1255")];
    char stringpool_str1672[sizeof("CSISO885915CP28605")];
    char stringpool_str1675[sizeof("ISOIR127")];
    char stringpool_str1676[sizeof("CSWINDOWS1254")];
    char stringpool_str1681[sizeof("EUCKR")];
    char stringpool_str1685[sizeof("IBMTHAI")];
    char stringpool_str1686[sizeof("UNICODELITTLE")];
    char stringpool_str1690[sizeof("CP10079")];
    char stringpool_str1695[sizeof("CSWINDOWS1252")];
    char stringpool_str1696[sizeof("TIS620.2533")];
    char stringpool_str1698[sizeof("CSPC8CODEPAGE1146")];
    char stringpool_str1699[sizeof("857")];
    char stringpool_str1701[sizeof("ISO2022JP3")];
    char stringpool_str1703[sizeof("IBM12712")];
    char stringpool_str1710[sizeof("IBM875")];
    char stringpool_str1712[sizeof("28599")];
    char stringpool_str1721[sizeof("IBM863")];
    char stringpool_str1723[sizeof("ELOT928")];
    char stringpool_str1724[sizeof("ROMAN8")];
    char stringpool_str1725[sizeof("CSWINDOWS1258")];
    char stringpool_str1726[sizeof("ISO88593")];
    char stringpool_str1727[sizeof("ISO885913")];
    char stringpool_str1731[sizeof("IBMEUCJP")];
    char stringpool_str1737[sizeof("IBM16804")];
    char stringpool_str1738[sizeof("IBM858")];
    char stringpool_str1739[sizeof("CSWINDOWS874")];
    char stringpool_str1745[sizeof("UTF7")];
    char stringpool_str1746[sizeof("IBM00858")];
    char stringpool_str1749[sizeof("CP28599")];
    char stringpool_str1758[sizeof("CSKOI8U")];
    char stringpool_str1759[sizeof("CSWINDOWS1256")];
    char stringpool_str1776[sizeof("GBK")];
    char stringpool_str1779[sizeof("ISOIR179")];
    char stringpool_str1791[sizeof("CSSHIFTJIS")];
    char stringpool_str1792[sizeof("ISO646JP")];
    char stringpool_str1795[sizeof("ANSIX3.41968")];
    char stringpool_str1796[sizeof("CSISO57GB1988")];
    char stringpool_str1798[sizeof("CCSID01149")];
    char stringpool_str1799[sizeof("KOREAN")];
    char stringpool_str1805[sizeof("CP1137")];
    char stringpool_str1810[sizeof("JISX02121990")];
    char stringpool_str1811[sizeof("CP0037")];
    char stringpool_str1815[sizeof("CSIBM037")];
    char stringpool_str1819[sizeof("CSUNICODE")];
    char stringpool_str1822[sizeof("CP277")];
    char stringpool_str1827[sizeof("CSIBM853")];
    char stringpool_str1829[sizeof("ANSIX3.41986")];
    char stringpool_str1832[sizeof("LATIN7")];
    char stringpool_str1835[sizeof("JAVA")];
    char stringpool_str1838[sizeof("TCVN57121")];
    char stringpool_str1843[sizeof("JISX02081990")];
    char stringpool_str1845[sizeof("CSIBM871")];
    char stringpool_str1851[sizeof("CSIBM870")];
    char stringpool_str1852[sizeof("XMACROMANIAN")];
    char stringpool_str1864[sizeof("EBCDICCPIS")];
    char stringpool_str1866[sizeof("EBCDICCPUS")];
    char stringpool_str1869[sizeof("IBM01147")];
    char stringpool_str1871[sizeof("TCVN5712")];
    char stringpool_str1874[sizeof("JISX02011976")];
    char stringpool_str1881[sizeof("EBCDICCPNL")];
    char stringpool_str1882[sizeof("EBCDICCPYU")];
    char stringpool_str1883[sizeof("UTF16BE")];
    char stringpool_str1888[sizeof("ISO88599")];
    char stringpool_str1889[sizeof("CP1097")];
    char stringpool_str1893[sizeof("ISO885910:1992")];
    char stringpool_str1902[sizeof("MACUKRAINE")];
    char stringpool_str1903[sizeof("CSISOLATINGREEK")];
    char stringpool_str1904[sizeof("IBMEUCKR")];
    char stringpool_str1908[sizeof("IBM1147")];
    char stringpool_str1910[sizeof("CSKOI8RU")];
    char stringpool_str1911[sizeof("IBM1047")];
    char stringpool_str1915[sizeof("IBM943")];
    char stringpool_str1919[sizeof("CSIBM863")];
    char stringpool_str1920[sizeof("IBM1163")];
    char stringpool_str1921[sizeof("CSWINDOWS1253")];
    char stringpool_str1925[sizeof("ISO88595:1988")];
    char stringpool_str1926[sizeof("ISO885915:1998")];
    char stringpool_str1930[sizeof("CSISOLATINHEBREW")];
    char stringpool_str1932[sizeof("MACCENTRALEUROPE")];
    char stringpool_str1934[sizeof("ISO88594:1988")];
    char stringpool_str1935[sizeof("ISO885914:1998")];
    char stringpool_str1936[sizeof("ARABIC")];
    char stringpool_str1954[sizeof("ISO885916:2001")];
    char stringpool_str1956[sizeof("IBM4971")];
    char stringpool_str1965[sizeof("IBM819")];
    char stringpool_str1969[sizeof("297")];
    char stringpool_str1975[sizeof("ISOIR57")];
    char stringpool_str1979[sizeof("CSIBM297")];
    char stringpool_str1983[sizeof("ISO88598:1988")];
    char stringpool_str1989[sizeof("SHIFTJISX0213")];
    char stringpool_str1992[sizeof("IBM838")];
    char stringpool_str2008[sizeof("EBCDICCYRILLIC")];
    char stringpool_str2020[sizeof("UCS4SWAPPED")];
    char stringpool_str2026[sizeof("XMACICELANDIC")];
    char stringpool_str2039[sizeof("UCS2SWAPPED")];
    char stringpool_str2040[sizeof("JISC62261983")];
    char stringpool_str2041[sizeof("CSUNICODE11UTF7")];
    char stringpool_str2048[sizeof("CP737")];
    char stringpool_str2051[sizeof("MACICELAND")];
    char stringpool_str2056[sizeof("CSKOI8R")];
    char stringpool_str2063[sizeof("IBM869")];
    char stringpool_str2066[sizeof("GB18030:2005")];
    char stringpool_str2069[sizeof("EUCJIS2004")];
    char stringpool_str2073[sizeof("JISC62201969RO")];
    char stringpool_str2079[sizeof("UTF32BE")];
    char stringpool_str2081[sizeof("CSIBM869")];
    char stringpool_str2082[sizeof("IBM1169")];
    char stringpool_str2085[sizeof("GB198880")];
    char stringpool_str2090[sizeof("BIGFIVE")];
    char stringpool_str2094[sizeof("GB18030:2022")];
    char stringpool_str2100[sizeof("JISX02081983")];
    char stringpool_str2101[sizeof("XMACTHAI")];
    char stringpool_str2110[sizeof("GREEK")];
    char stringpool_str2118[sizeof("28597")];
    char stringpool_str2127[sizeof("CHINESE")];
    char stringpool_str2130[sizeof("MSARAB")];
    char stringpool_str2137[sizeof("IBM273")];
    char stringpool_str2143[sizeof("CSPC8CODEPAGE437")];
    char stringpool_str2155[sizeof("CP28597")];
    char stringpool_str2171[sizeof("EBCDICCPGR")];
    char stringpool_str2179[sizeof("ISO88593:1988")];
    char stringpool_str2182[sizeof("CSIBM277")];
    char stringpool_str2183[sizeof("BIG5HKSCS:2001")];
    char stringpool_str2185[sizeof("IBM1157")];
    char stringpool_str2190[sizeof("IBM775")];
    char stringpool_str2192[sizeof("EBCDICCPES")];
    char stringpool_str2198[sizeof("BIG5HKSCS:2004")];
    char stringpool_str2204[sizeof("CCSID01147")];
    char stringpool_str2205[sizeof("CSWINDOWS1257")];
    char stringpool_str2213[sizeof("IBM857")];
    char stringpool_str2218[sizeof("EBCDICCPCH")];
    char stringpool_str2219[sizeof("IBM1257")];
    char stringpool_str2240[sizeof("XMACUKRAINIAN")];
    char stringpool_str2244[sizeof("SDECKANJI")];
    char stringpool_str2246[sizeof("IBM278")];
    char stringpool_str2247[sizeof("BIG5HKSCS:2008")];
    char stringpool_str2250[sizeof("WINDOWS1251")];
    char stringpool_str2253[sizeof("WINDOWS1250")];
    char stringpool_str2256[sizeof("WINDOWS1255")];
    char stringpool_str2261[sizeof("MACROMANIA")];
    char stringpool_str2265[sizeof("WINDOWS1254")];
    char stringpool_str2280[sizeof("CSPC862LATINHEBREW")];
    char stringpool_str2284[sizeof("WINDOWS1252")];
    char stringpool_str2294[sizeof("ISO88597")];
    char stringpool_str2295[sizeof("JOHAB")];
    char stringpool_str2314[sizeof("WINDOWS1258")];
    char stringpool_str2333[sizeof("EBCDICCPFI")];
    char stringpool_str2348[sizeof("WINDOWS1256")];
    char stringpool_str2365[sizeof("EUCTW")];
    char stringpool_str2388[sizeof("IBM1137")];
    char stringpool_str2395[sizeof("CSIBM857")];
    char stringpool_str2399[sizeof("ISO88591:1987")];
    char stringpool_str2406[sizeof("IBM037")];
    char stringpool_str2408[sizeof("CSPC775BALTIC")];
    char stringpool_str2418[sizeof("IBM437")];
    char stringpool_str2423[sizeof("XMACTURKISH")];
    char stringpool_str2433[sizeof("ISO88592:1987")];
    char stringpool_str2449[sizeof("CSISO87JISX0208")];
    char stringpool_str2459[sizeof("CCSID853")];
    char stringpool_str2483[sizeof("ISOIR87")];
    char stringpool_str2497[sizeof("ISO88596:1987")];
    char stringpool_str2501[sizeof("IBM367")];
    char stringpool_str2502[sizeof("KOKR.JOHAP92")];
    char stringpool_str2510[sizeof("WINDOWS1253")];
    char stringpool_str2514[sizeof("GREEK8")];
    char stringpool_str2517[sizeof("EUCJISX0213")];
    char stringpool_str2518[sizeof("IBM297")];
    char stringpool_str2520[sizeof("EBCDICCPSE")];
    char stringpool_str2524[sizeof("BIG5HKSCS:1999")];
    char stringpool_str2535[sizeof("MACHEBREW")];
    char stringpool_str2537[sizeof("ISO88599:1989")];
    char stringpool_str2541[sizeof("DECKANJI")];
    char stringpool_str2552[sizeof("RISCOSLATIN1")];
    char stringpool_str2562[sizeof("WINDOWS950")];
    char stringpool_str2588[sizeof("IBMEUCTW")];
    char stringpool_str2590[sizeof("EBCDICCPTR")];
    char stringpool_str2635[sizeof("EBCDICCPFR")];
    char stringpool_str2640[sizeof("WINBALTRIM")];
    char stringpool_str2647[sizeof("EBCDICCPNO")];
    char stringpool_str2652[sizeof("IBM1097")];
    char stringpool_str2657[sizeof("EBCDICES284+EURO")];
    char stringpool_str2681[sizeof("XMACCROATIAN")];
    char stringpool_str2693[sizeof("ISO88597:2003")];
    char stringpool_str2697[sizeof("EBCDICCPHE")];
    char stringpool_str2712[sizeof("EBCDICCPIT")];
    char stringpool_str2720[sizeof("DECKOREAN")];
    char stringpool_str2721[sizeof("IBM277")];
    char stringpool_str2726[sizeof("EXTENDEDUNIXCODEPACKEDFORMATFORJAPANESE")];
    char stringpool_str2732[sizeof("EBCDICCPROECE")];
    char stringpool_str2747[sizeof("TCVN57121:1993")];
    char stringpool_str2751[sizeof("EBCDICCPGB")];
    char stringpool_str2753[sizeof("EBCDICIT280+EURO")];
    char stringpool_str2775[sizeof("EBCDICGB285+EURO")];
    char stringpool_str2784[sizeof("ATARIST")];
    char stringpool_str2794[sizeof("WINDOWS1257")];
    char stringpool_str2829[sizeof("XMACARABIC")];
    char stringpool_str2831[sizeof("CSEUCPKDFMTJAPANESE")];
    char stringpool_str2839[sizeof("EBCDICIS871+EURO")];
    char stringpool_str2847[sizeof("WINDOWS874")];
    char stringpool_str2924[sizeof("EBCDICCPCA")];
    char stringpool_str2943[sizeof("ISO88597:1987")];
    char stringpool_str2947[sizeof("IBM737")];
    char stringpool_str2961[sizeof("EBCDICCPBE")];
    char stringpool_str3005[sizeof("EBCDICINTERNATIONAL500+EURO")];
    char stringpool_str3006[sizeof("WINDOWS936")];
    char stringpool_str3008[sizeof("XMACGREEK")];
    char stringpool_str3036[sizeof("EBCDICUS37+EURO")];
    char stringpool_str3137[sizeof("EBCDICSE278+EURO")];
    char stringpool_str3162[sizeof("EBCDICGREEK")];
    char stringpool_str3188[sizeof("EBCDICLATIN9EURO")];
    char stringpool_str3206[sizeof("EBCDICNO277+EURO")];
    char stringpool_str3226[sizeof("EBCDICFR297+EURO")];
    char stringpool_str3248[sizeof("EBCDICCPWT")];
    char stringpool_str3278[sizeof("EBCDICFI278+EURO")];
    char stringpool_str3315[sizeof("XMACHEBREW")];
    char stringpool_str3558[sizeof("CSHALFWIDTHKATAKANA")];
    char stringpool_str3632[sizeof("EBCDICCPDK")];
    char stringpool_str3885[sizeof("EBCDICDE273+EURO")];
    char stringpool_str4067[sizeof("EBCDICDK277+EURO")];
  };
static const struct stringpool_t stringpool_contents =
  {
    "MAC",
    "US",
    "SJIS",
    "1201",
    "1251",
    "12001",
    "1200",
    "1250",
    "12000",
    "1255",
    "CN",
    "425",
    "10010",
    "500",
    "10000",
    "L2",
    "1254",
    "10005",
    "424",
    "10004",
    "10021",
    "5601",
    "U32",
    "1025",
    "CSUCS4",
    "1252",
    "10081",
    "1361",
    "50221",
    "L4",
    "50225",
    "861",
    "860",
    "865",
    "1258",
    "CPIS",
    "864",
    "16804",
    "L6",
    "CP500",
    "CP1051",
    "10082",
    "CP10010",
    "CP1141",
    "HZ",
    "CP10000",
    "CP1140",
    "CP10005",
    "CP154",
    "CYRILLIC",
    "CSVISCII",
    "862",
    "CP1201",
    "838",
    "MSCYRL",
    "CP1251",
    "CP10004",
    "CP12001",
    "CP1200",
    "MACCYRILLIC",
    "CP1250",
    "CP12000",
    "CP425",
    "1256",
    "CP01141",
    "CP01140",
    "CP850",
    "CP424",
    "CP01145",
    "CP855",
    "10006",
    "CP1154",
    "PT154",
    "1046",
    "CP1144",
    "CP01144",
    "CP280",
    "CP1161",
    "CP10021",
    "L1",
    "CP285",
    "1026",
    "CP1124",
    "L3",
    "L10",
    "CP1160",
    "CP1254",
    "1141",
    "CP65001",
    "1155",
    "CP284",
    "1140",
    "CP65000",
    "CP1112",
    "CP880",
    "1145",
    "CP01142",
    "CP852",
    "X0201",
    "CP50221",
    "1154",
    "CP1142",
    "1144",
    "1125",
    "CP50225",
    "CP861",
    "CP282",
    "CP1122",
    "CP860",
    "866",
    "1124",
    "CP1252",
    "CP865",
    "1112",
    "CP1164",
    "1142",
    "CP864",
    "CP01148",
    "CP858",
    "X0212",
    "1161",
    "UCS4",
    "CP16804",
    "1122",
    "1160",
    "1165",
    "CP10006",
    "CP862",
    "CP1162",
    "924",
    "1164",
    "646",
    "1158",
    "UCS2",
    "1148",
    "871",
    "870",
    "932",
    "875",
    "CP01146",
    "CP856",
    "CP1131",
    "X0208",
    "922",
    "1162",
    "20866",
    "CP866U",
    "CP1130",
    "874",
    "LATIN1",
    "LATIN10",
    "U16",
    "CPGR",
    "CSPC850MULTILINGUAL",
    "CP-GR",
    "1156",
    "1146",
    "CSIBM01141",
    "CSIBM01140",
    "CSIBM01145",
    "HP15CN",
    "CSIBM1125",
    "278",
    "CP950",
    "CP1155",
    "CP866",
    "CP1145",
    "CP1361",
    "LATIN4",
    "1131",
    "1130",
    "ASCII",
    "CP1125",
    "CSASCII",
    "CP1025",
    "USASCII",
    "CP1255",
    "1253",
    "936",
    "CP1132",
    "MSANSI",
    "CSIBM01142",
    "423",
    "L5",
    "ISOIR101",
    "CSIBM1161",
    "1166",
    "ISOIR110",
    "CP924",
    "ISOIR100",
    "LATIN2",
    "154",
    "CSISO2022CN",
    "CSIBM424",
    "ISOIR14",
    "ISO2022CN",
    "1132",
    "UHC",
    "ISOIR144",
    "CP922",
    "CP1165",
    "CP838",
    "PTCP154",
    "CSIBM01148",
    "850",
    "CSIBM280",
    "855",
    "51950",
    "CSIBM1162",
    "CSIBM285",
    "12712",
    "CP00924",
    "KSC5601",
    "CSIBM284",
    "MS874",
    "863",
    "65001",
    "21866",
    "65000",
    "ISOIR165",
    "ANSI1251",
    "852",
    "CSKZ1048",
    "UCS4LE",
    "280",
    "CSIBM1026",
    "285",
    "RUSCII",
    "KOI8U",
    "ISOIR148",
    "CP00858",
    "VISCII",
    "UCS2LE",
    "U32LE",
    "284",
    "U8",
    "L8",
    "880",
    "CP423",
    "858",
    "CYRILLICASIAN",
    "CYRIILLICASIAN",
    "CP01143",
    "CP853",
    "VISCII1.11",
    "282",
    "10029",
    "CP871",
    "JP",
    "CP870",
    "CP875",
    "IBM01141",
    "IBM500",
    "ISOIR126",
    "UTF8",
    "IBM01140",
    "1153",
    "LATIN5",
    "IBM01145",
    "CP874",
    "28605",
    "1143",
    "CSBIG5",
    "CSIBM500",
    "MS936",
    "856",
    "CP12712",
    "IBM01144",
    "869",
    "1123",
    "IBM1141",
    "52936",
    "CNBIG5",
    "CP932",
    "IBM1140",
    "IBM1112",
    "IBM1145",
    "CP863",
    "IBM850",
    "ISOIR166",
    "IBM01142",
    "IBM1144",
    "CP51950",
    "UTF16",
    "KOI8RU",
    "R8",
    "CP278",
    "IBM1125",
    "IBM1025",
    "IBM280",
    "ISOIR226",
    "CSIBM00924",
    "1163",
    "IBM424",
    "IBM1124",
    "IBM1142",
    "U7",
    "L7",
    "EUCCN",
    "950",
    "273",
    "775",
    "IBM880",
    "CP819",
    "CP1156",
    "54936",
    "CP01149",
    "IBM01148",
    "ISOIR230",
    "CP1146",
    "CNGB",
    "CP1046",
    "CSPTCP154",
    "IBM1122",
    "IBM861",
    "UNICODE11",
    "SYSTEM1125",
    "IBM284",
    "IBM860",
    "CP1026",
    "MACTHAI",
    "CP1256",
    "51932",
    "ISOIR138",
    "CP10029",
    "IBM1148",
    "CP936",
    "IBM852",
    "TCVN",
    "1149",
    "943",
    "CP1153",
    "BIG5",
    "CP1143",
    "IBM01146",
    "1129",
    "MACINTOSH",
    "CSPCP852",
    "IBM282",
    "UTF32",
    "MSEE",
    "KOI8R",
    "CP1123",
    "IBM864",
    "CP1166",
    "CP869",
    "CP1253",
    "CSIBM01143",
    "819",
    "CP10081",
    "ISOIR58",
    "IBM1146",
    "IBM1046",
    "STRK10482002",
    "U16LE",
    "CSEUCKR",
    "28591",
    "CP943",
    "CSHPROMAN8",
    "28595",
    "1133",
    "IBM862",
    "IBM1026",
    "CP1163",
    "28594",
    "CP4971",
    "CP28591",
    "CSIBM423",
    "MSKANJI",
    "CP1158",
    "CSIBM1163",
    "CP28595",
    "CP10082",
    "CP1148",
    "RK1048",
    "TIS620",
    "ARMSCII8",
    "TIS6200",
    "CP21866",
    "CP28594",
    "28592",
    "CP20866",
    "CSGB2312",
    "IBM1155",
    "CP1258",
    "437",
    "1257",
    "IBMEUCCN",
    "CCSID01141",
    "CP51932",
    "UCS4BE",
    "CCSID01140",
    "949",
    "IBM1154",
    "CCSID01145",
    "GEORGIANPS",
    "10017",
    "853",
    "10007",
    "CP28592",
    "IBM1250",
    "UCS2BE",
    "1047",
    "IBM1255",
    "U32BE",
    "CCSID01144",
    "IBM425",
    "ISO646US",
    "28598",
    "DOS862",
    "IBM1254",
    "CSIBM01149",
    "ISOIR203",
    "IBM855",
    "ISOCELTIC",
    "ISO646CN",
    "ISO10646UCS4",
    "ISO2022JP1",
    "CSISO2022JP",
    "ISO2022JPMS",
    "CCSID01142",
    "GB2312",
    "LATIN6",
    "L9",
    "CSISO2022JP2",
    "CP949",
    "CP28598",
    "ISO10646UCS2",
    "IBM1252",
    "IBM285",
    "ISO2022JP",
    "ISO88591",
    "ISO885911",
    "IBM924",
    "MACROMAN",
    "TIS620.25291",
    "CNS11643",
    "ISO885910",
    "ISO88595",
    "ISO885915",
    "CP1133",
    "CSIBM278",
    "GB231280",
    "IBM1158",
    "28596",
    "CSISO2022KR",
    "ECMA114",
    "ISO2022JP2004",
    "ISO88594",
    "ISO885914",
    "ISOIR109",
    "ISOIR159",
    "CCSID01148",
    "LATIN3",
    "ISO2022JP2",
    "ISOIR149",
    "CP51949",
    "CP273",
    "CP775",
    "CP10017",
    "IBM1258",
    "CP54936",
    "IBM922",
    "CP28596",
    "IBM865",
    "NEXTSTEP",
    "CP10007",
    "10079",
    "CSIBM905",
    "ISO88592",
    "HZGB2312",
    "CP52936",
    "JIS0208",
    "ISOIR6",
    "MSHEBR",
    "CSISO58GB231280",
    "IBM1156",
    "IBM1131",
    "IBM01143",
    "CCSID00858",
    "28603",
    "XMACCYRILLIC",
    "IBM1130",
    "51949",
    "CCSID01146",
    "CP01147",
    "CP857",
    "CP1149",
    "CSIBM855",
    "IBM1256",
    "ECMA118",
    "ISO2022CNEXT",
    "ISO88598",
    "CP1129",
    "IBM1143",
    "HPROMAN8",
    "TDS565",
    "CSISO159JISX02121990",
    "LATIN8",
    "1157",
    "1147",
    "IBM1132",
    "IBM871",
    "CSIBM880",
    "IBM1123",
    "PCK",
    "GB18030",
    "ISO2022KR",
    "UNICODEBIG",
    "CSIBMTHAI",
    "IBM870",
    "38598",
    "KSC56011989",
    "CSISOLATIN1",
    "TACTIS",
    "CSISOLATIN10",
    "CSISOLATINARABIC",
    "CSISOLATIN5",
    "CSISOLATINCYRILLIC",
    "ATARI",
    "CSIBM861",
    "IBM1161",
    "CSISO14JISC6220RO",
    "ISO88596",
    "ISO885916",
    "CSISOLATIN4",
    "CSIBM860",
    "IBM1160",
    "4971",
    "CSIBM865",
    "IBM1165",
    "367",
    "CP38598",
    "CSISOLATIN2",
    "UCS4INTERNAL",
    "CSIBM864",
    "IBM1164",
    "JISX0201",
    "CSIBM858",
    "TIS620.25331",
    "UTF16LE",
    "TIS620.25330",
    "UCS2INTERNAL",
    "IBM905",
    "KZ1048",
    "MACARABIC",
    "U16BE",
    "IBM01149",
    "277",
    "IBM1162",
    "XMACCE",
    "UNICODE11UTF7",
    "MSTURK",
    "MACTURKISH",
    "CSISOLATIN6",
    "IBM932",
    "CSUNICODE11",
    "JISX0212",
    "SHIFTJIS",
    "IBM1149",
    "CP037",
    "EUCJP",
    "CCSID00924",
    "CSKSC56011987",
    "MACGREEK",
    "MSGREEK",
    "JISX0212.19900",
    "CP437",
    "IBM921CP28603",
    "IBM1168",
    "C99",
    "BIG5HKSCS",
    "IBM1129",
    "ISO646.IRV:1991",
    "KOI8T",
    "BIG52003",
    "CSMACINTOSH",
    "28593",
    "CP1157",
    "SHIFTJIS2004",
    "JISX0208",
    "CP1147",
    "CNGBISOIR165",
    "CP1047",
    "CSIBM1047",
    "IBM856",
    "IBMCP1133",
    "CSIBM01147",
    "CSGB18030",
    "ISOIR199",
    "CP1257",
    "CP28593",
    "LATIN9",
    "KSC56011987",
    "MULELAO1",
    "CSIBM866",
    "IBM1166",
    "CP367",
    "IBM423",
    "1137",
    "ASMO708",
    "CSIBM273",
    "CSPC8CODEPAGE1144",
    "IBM1153",
    "CP297",
    "DECHANZI",
    "IBM853",
    "CSEUCTW",
    "IBM00924",
    "UTF32LE",
    "CCSID01143",
    "DECHANYU",
    "737",
    "ISOIR157",
    "CSISOLATIN3",
    "HEBREW",
    "GEORGIANACADEMY",
    "MACCROATIAN",
    "IBM866",
    "CSWINDOWS1251",
    "CSWINDOWS1250",
    "CSWINDOWS1255",
    "CSISO885915CP28605",
    "ISOIR127",
    "CSWINDOWS1254",
    "EUCKR",
    "IBMTHAI",
    "UNICODELITTLE",
    "CP10079",
    "CSWINDOWS1252",
    "TIS620.2533",
    "CSPC8CODEPAGE1146",
    "857",
    "ISO2022JP3",
    "IBM12712",
    "IBM875",
    "28599",
    "IBM863",
    "ELOT928",
    "ROMAN8",
    "CSWINDOWS1258",
    "ISO88593",
    "ISO885913",
    "IBMEUCJP",
    "IBM16804",
    "IBM858",
    "CSWINDOWS874",
    "UTF7",
    "IBM00858",
    "CP28599",
    "CSKOI8U",
    "CSWINDOWS1256",
    "GBK",
    "ISOIR179",
    "CSSHIFTJIS",
    "ISO646JP",
    "ANSIX3.41968",
    "CSISO57GB1988",
    "CCSID01149",
    "KOREAN",
    "CP1137",
    "JISX02121990",
    "CP0037",
    "CSIBM037",
    "CSUNICODE",
    "CP277",
    "CSIBM853",
    "ANSIX3.41986",
    "LATIN7",
    "JAVA",
    "TCVN57121",
    "JISX02081990",
    "CSIBM871",
    "CSIBM870",
    "XMACROMANIAN",
    "EBCDICCPIS",
    "EBCDICCPUS",
    "IBM01147",
    "TCVN5712",
    "JISX02011976",
    "EBCDICCPNL",
    "EBCDICCPYU",
    "UTF16BE",
    "ISO88599",
    "CP1097",
    "ISO885910:1992",
    "MACUKRAINE",
    "CSISOLATINGREEK",
    "IBMEUCKR",
    "IBM1147",
    "CSKOI8RU",
    "IBM1047",
    "IBM943",
    "CSIBM863",
    "IBM1163",
    "CSWINDOWS1253",
    "ISO88595:1988",
    "ISO885915:1998",
    "CSISOLATINHEBREW",
    "MACCENTRALEUROPE",
    "ISO88594:1988",
    "ISO885914:1998",
    "ARABIC",
    "ISO885916:2001",
    "IBM4971",
    "IBM819",
    "297",
    "ISOIR57",
    "CSIBM297",
    "ISO88598:1988",
    "SHIFTJISX0213",
    "IBM838",
    "EBCDICCYRILLIC",
    "UCS4SWAPPED",
    "XMACICELANDIC",
    "UCS2SWAPPED",
    "JISC62261983",
    "CSUNICODE11UTF7",
    "CP737",
    "MACICELAND",
    "CSKOI8R",
    "IBM869",
    "GB18030:2005",
    "EUCJIS2004",
    "JISC62201969RO",
    "UTF32BE",
    "CSIBM869",
    "IBM1169",
    "GB198880",
    "BIGFIVE",
    "GB18030:2022",
    "JISX02081983",
    "XMACTHAI",
    "GREEK",
    "28597",
    "CHINESE",
    "MSARAB",
    "IBM273",
    "CSPC8CODEPAGE437",
    "CP28597",
    "EBCDICCPGR",
    "ISO88593:1988",
    "CSIBM277",
    "BIG5HKSCS:2001",
    "IBM1157",
    "IBM775",
    "EBCDICCPES",
    "BIG5HKSCS:2004",
    "CCSID01147",
    "CSWINDOWS1257",
    "IBM857",
    "EBCDICCPCH",
    "IBM1257",
    "XMACUKRAINIAN",
    "SDECKANJI",
    "IBM278",
    "BIG5HKSCS:2008",
    "WINDOWS1251",
    "WINDOWS1250",
    "WINDOWS1255",
    "MACROMANIA",
    "WINDOWS1254",
    "CSPC862LATINHEBREW",
    "WINDOWS1252",
    "ISO88597",
    "JOHAB",
    "WINDOWS1258",
    "EBCDICCPFI",
    "WINDOWS1256",
    "EUCTW",
    "IBM1137",
    "CSIBM857",
    "ISO88591:1987",
    "IBM037",
    "CSPC775BALTIC",
    "IBM437",
    "XMACTURKISH",
    "ISO88592:1987",
    "CSISO87JISX0208",
    "CCSID853",
    "ISOIR87",
    "ISO88596:1987",
    "IBM367",
    "KOKR.JOHAP92",
    "WINDOWS1253",
    "GREEK8",
    "EUCJISX0213",
    "IBM297",
    "EBCDICCPSE",
    "BIG5HKSCS:1999",
    "MACHEBREW",
    "ISO88599:1989",
    "DECKANJI",
    "RISCOSLATIN1",
    "WINDOWS950",
    "IBMEUCTW",
    "EBCDICCPTR",
    "EBCDICCPFR",
    "WINBALTRIM",
    "EBCDICCPNO",
    "IBM1097",
    "EBCDICES284+EURO",
    "XMACCROATIAN",
    "ISO88597:2003",
    "EBCDICCPHE",
    "EBCDICCPIT",
    "DECKOREAN",
    "IBM277",
    "EXTENDEDUNIXCODEPACKEDFORMATFORJAPANESE",
    "EBCDICCPROECE",
    "TCVN57121:1993",
    "EBCDICCPGB",
    "EBCDICIT280+EURO",
    "EBCDICGB285+EURO",
    "ATARIST",
    "WINDOWS1257",
    "XMACARABIC",
    "CSEUCPKDFMTJAPANESE",
    "EBCDICIS871+EURO",
    "WINDOWS874",
    "EBCDICCPCA",
    "ISO88597:1987",
    "IBM737",
    "EBCDICCPBE",
    "EBCDICINTERNATIONAL500+EURO",
    "WINDOWS936",
    "XMACGREEK",
    "EBCDICUS37+EURO",
    "EBCDICSE278+EURO",
    "EBCDICGREEK",
    "EBCDICLATIN9EURO",
    "EBCDICNO277+EURO",
    "EBCDICFR297+EURO",
    "EBCDICCPWT",
    "EBCDICFI278+EURO",
    "XMACHEBREW",
    "CSHALFWIDTHKATAKANA",
    "EBCDICCPDK",
    "EBCDICDE273+EURO",
    "EBCDICDK277+EURO"
  };
#define stringpool ((const char *) &stringpool_contents)

static const struct alias aliases[] =
  {
    {-1}, {-1}, {-1}, {-1},
#line 355 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str4, ei_mac_roman},
    {-1},
#line 21 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str6, ei_ascii},
#line 84 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str7, ei_sjis},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 38 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str22, ei_ucs2be},
    {-1}, {-1},
#line 296 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str25, ei_cp1251},
#line 47 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str26, ei_ucs4be},
    {-1},
#line 42 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str28, ei_ucs2le},
    {-1}, {-1},
#line 290 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str31, ei_cp1250},
#line 51 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str32, ei_ucs4le},
    {-1}, {-1}, {-1}, {-1},
#line 319 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str37, ei_cp1255},
#line 475 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str38, ei_iso646_cn},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 646 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str45, ei_ebcdic425},
    {-1}, {-1},
#line 374 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str48, ei_mac_romania},
#line 652 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str49, ei_ebcdic500},
    {-1},
#line 358 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str51, ei_mac_roman},
    {-1}, {-1},
#line 178 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str54, ei_iso8859_2},
#line 313 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str55, ei_cp1254},
    {-1},
#line 394 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str57, ei_mac_hebrew},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 643 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str63, ei_ebcdic424},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 398 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str75, ei_mac_arabic},
#line 402 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str76, ei_mac_thai},
#line 147 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str77, ei_euc_kr},
    {-1},
#line 59 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str79, ei_utf32},
    {-1}, {-1}, {-1}, {-1},
#line 691 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str84, ei_ebcdic1025},
    {-1}, {-1}, {-1}, {-1},
#line 45 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str89, ei_ucs4},
    {-1}, {-1}, {-1},
#line 302 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str93, ei_cp1252},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 390 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str106, ei_mac_turkish},
    {-1},
#line 156 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str108, ei_johab},
    {-1}, {-1}, {-1}, {-1},
#line 98 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str113, ei_iso2022_jpms},
    {-1}, {-1}, {-1}, {-1},
#line 194 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str118, ei_iso8859_4},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 160 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str125, ei_iso2022_kr},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 558 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str131, ei_cp861},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 554 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str137, ei_cp860},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 571 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str143, ei_cp865},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 336 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str153, ei_cp1258},
    {-1},
#line 560 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str155, ei_cp861},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 569 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str161, ei_cp864},
    {-1}, {-1}, {-1}, {-1},
#line 840 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str166, ei_ebcdic16804},
#line 246 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str167, ei_iso8859_10},
    {-1}, {-1}, {-1},
#line 651 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str171, ei_ebcdic500},
#line 407 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str172, ei_hp_roman8},
    {-1},
#line 370 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str174, ei_mac_croatian},
    {-1},
#line 373 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str176, ei_mac_romania},
    {-1},
#line 734 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str178, ei_ebcdic1141},
    {-1}, {-1},
#line 121 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str181, ei_hz},
    {-1}, {-1}, {-1},
#line 357 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str185, ei_mac_roman},
    {-1}, {-1}, {-1}, {-1},
#line 726 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str190, ei_ebcdic1140},
#line 393 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str191, ei_mac_hebrew},
#line 419 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str192, ei_pt154},
    {-1}, {-1},
#line 201 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str195, ei_iso8859_5},
    {-1},
#line 444 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str197, ei_viscii},
    {-1},
#line 342 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str199, ei_cp862},
#line 37 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str200, ei_ucs2be},
#line 657 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str201, ei_ebcdic838},
#line 293 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str202, ei_cp1251},
#line 295 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str203, ei_cp1251},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 397 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str209, ei_mac_arabic},
#line 48 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str210, ei_ucs4be},
    {-1},
#line 41 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str212, ei_ucs2le},
    {-1},
#line 375 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str214, ei_mac_cyrillic},
#line 285 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str215, ei_cp1250},
#line 50 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str216, ei_ucs4le},
#line 645 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str217, ei_ebcdic425},
    {-1}, {-1}, {-1},
#line 325 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str221, ei_cp1256},
    {-1}, {-1}, {-1},
#line 731 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str225, ei_ebcdic1141},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 723 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str231, ei_ebcdic1140},
#line 340 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str232, ei_cp850},
    {-1}, {-1},
#line 642 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str235, ei_ebcdic424},
    {-1},
#line 765 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str237, ei_ebcdic1145},
#line 541 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str238, ei_cp855},
    {-1}, {-1},
#line 386 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str241, ei_mac_greek},
#line 806 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str242, ei_ebcdic1154},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 413 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str248, ei_pt154},
#line 499 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str249, ei_cp1046},
    {-1},
#line 760 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str251, ei_ebcdic1144},
    {-1}, {-1}, {-1},
#line 757 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str255, ei_ebcdic1144},
    {-1}, {-1}, {-1}, {-1},
#line 614 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str260, ei_ebcdic280},
#line 508 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str261, ei_cp1161},
#line 401 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str262, ei_mac_thai},
    {-1}, {-1},
#line 168 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str265, ei_iso8859_1},
#line 625 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str266, ei_ebcdic285},
    {-1},
#line 695 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str268, ei_ebcdic1026},
    {-1},
#line 501 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str270, ei_cp1124},
#line 186 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str271, ei_iso8859_3},
#line 272 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str272, ei_iso8859_16},
#line 821 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str273, ei_ebcdic1160},
    {-1}, {-1},
#line 312 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str276, ei_cp1254},
    {-1}, {-1},
#line 735 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str279, ei_ebcdic1141},
#line 28 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str280, ei_utf8},
    {-1},
#line 810 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str282, ei_ebcdic1155},
    {-1},
#line 622 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str284, ei_ebcdic284},
#line 727 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str285, ei_ebcdic1140},
#line 68 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str286, ei_utf7},
    {-1}, {-1},
#line 703 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str289, ei_ebcdic1112},
#line 676 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str290, ei_ebcdic880},
#line 769 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str291, ei_ebcdic1145},
    {-1},
#line 739 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str293, ei_ebcdic1142},
#line 532 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str294, ei_cp852},
    {-1},
#line 456 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str296, ei_jisx0201},
    {-1}, {-1},
#line 97 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str299, ei_iso2022_jpms},
#line 807 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str300, ei_ebcdic1154},
    {-1}, {-1}, {-1},
#line 743 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str304, ei_ebcdic1142},
    {-1}, {-1}, {-1}, {-1},
#line 761 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str309, ei_ebcdic1144},
#line 581 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str310, ei_cp1125},
#line 159 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str311, ei_iso2022_kr},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 559 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str318, ei_cp861},
    {-1}, {-1}, {-1},
#line 618 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str322, ei_ebcdic282},
#line 706 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str323, ei_ebcdic1122},
#line 556 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str324, ei_cp860},
    {-1}, {-1},
#line 347 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str327, ei_cp866},
#line 502 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str328, ei_cp1124},
#line 301 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str329, ei_cp1252},
#line 573 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str330, ei_cp865},
    {-1},
#line 704 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str332, ei_ebcdic1112},
    {-1},
#line 824 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str334, ei_ebcdic1164},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 744 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str347, ei_ebcdic1142},
#line 568 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str348, ei_cp864},
    {-1}, {-1}, {-1}, {-1},
#line 789 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str353, ei_ebcdic1148},
#line 549 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str354, ei_cp858},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 469 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str361, ei_jisx0212},
#line 509 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str362, ei_cp1161},
    {-1},
#line 43 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str364, ei_ucs4},
#line 839 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str365, ei_ebcdic16804},
#line 707 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str366, ei_ebcdic1122},
    {-1},
#line 822 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str368, ei_ebcdic1160},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 828 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str374, ei_ebcdic1165},
#line 385 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str375, ei_mac_greek},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 345 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str386, ei_cp862},
#line 512 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str387, ei_cp1162},
    {-1},
#line 688 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str389, ei_ebcdic924},
    {-1}, {-1},
#line 825 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str392, ei_ebcdic1164},
    {-1}, {-1},
#line 25 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str395, ei_ascii},
    {-1}, {-1},
#line 819 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str398, ei_ebcdic1158},
    {-1}, {-1}, {-1},
#line 30 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str402, ei_ucs2},
    {-1}, {-1}, {-1}, {-1},
#line 793 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str407, ei_ebcdic1148},
#line 668 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str408, ei_ebcdic871},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 663 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str414, ei_ebcdic870},
    {-1}, {-1}, {-1},
#line 90 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str418, ei_cp932},
    {-1},
#line 672 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str420, ei_ebcdic875},
#line 773 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str421, ei_ebcdic1146},
#line 489 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str422, ei_cp856},
#line 351 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str423, ei_cp1131},
#line 462 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str424, ei_jisx0208},
    {-1}, {-1},
#line 493 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str427, ei_cp922},
    {-1}, {-1},
#line 513 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str430, ei_cp1162},
#line 277 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str431, ei_koi8_r},
    {-1},
#line 585 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str433, ei_cp1125},
    {-1},
#line 712 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str435, ei_ebcdic1130},
    {-1}, {-1},
#line 441 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str438, ei_cp874},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 167 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str450, ei_iso8859_1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 271 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str457, ei_iso8859_16},
    {-1}, {-1}, {-1},
#line 53 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str461, ei_utf16},
#line 576 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str462, ei_cp869},
#line 339 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str463, ei_cp850},
#line 579 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str464, ei_cp869},
    {-1},
#line 813 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str466, ei_ebcdic1156},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 777 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str475, ei_ebcdic1146},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 733 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str484, ei_ebcdic1141},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 725 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str490, ei_ebcdic1140},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 767 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str496, ei_ebcdic1145},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 105 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str502, ei_euc_cn},
    {-1}, {-1},
#line 583 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str505, ei_cp1125},
#line 610 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str506, ei_ebcdic278},
    {-1}, {-1},
#line 136 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str509, ei_cp950},
#line 809 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str510, ei_ebcdic1155},
    {-1}, {-1}, {-1},
#line 349 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str514, ei_cp866},
    {-1}, {-1}, {-1}, {-1},
#line 768 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str519, ei_ebcdic1145},
    {-1},
#line 155 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str521, ei_johab},
    {-1},
#line 193 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str523, ei_iso8859_4},
#line 352 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str524, ei_cp1131},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 713 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str530, ei_ebcdic1130},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 14 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str537, ei_ascii},
#line 586 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str538, ei_cp1125},
    {-1},
#line 22 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str540, ei_ascii},
#line 690 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str541, ei_ebcdic1025},
#line 13 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str542, ei_ascii},
    {-1},
#line 318 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str544, ei_cp1255},
#line 307 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str545, ei_cp1253},
#line 111 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str546, ei_cp936},
    {-1}, {-1},
#line 715 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str549, ei_ebcdic1132},
    {-1},
#line 300 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str551, ei_cp1252},
#line 742 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str552, ei_ebcdic1142},
#line 638 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str553, ei_ebcdic423},
    {-1},
#line 238 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str555, ei_iso8859_9},
#line 176 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str556, ei_iso8859_2},
#line 507 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str557, ei_cp1161},
#line 831 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str558, ei_ebcdic1166},
#line 192 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str559, ei_iso8859_4},
    {-1},
#line 687 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str561, ei_ebcdic924},
#line 165 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str562, ei_iso8859_1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 177 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str576, ei_iso8859_2},
#line 420 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str577, ei_pt154},
    {-1},
#line 119 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str579, ei_iso2022_cn},
#line 641 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str580, ei_ebcdic424},
    {-1},
#line 451 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str582, ei_iso646_jp},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 118 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str588, ei_iso2022_cn},
    {-1}, {-1}, {-1},
#line 716 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str592, ei_ebcdic1132},
    {-1},
#line 150 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str594, ei_cp949},
    {-1}, {-1}, {-1},
#line 200 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str598, ei_iso8859_5},
#line 492 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str599, ei_cp922},
    {-1}, {-1},
#line 827 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str602, ei_ebcdic1165},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 656 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str608, ei_ebcdic838},
    {-1},
#line 414 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str610, ei_pt154},
    {-1},
#line 791 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str612, ei_ebcdic1148},
    {-1}, {-1}, {-1}, {-1},
#line 338 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str617, ei_cp850},
    {-1}, {-1},
#line 613 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str620, ei_ebcdic280},
    {-1}, {-1},
#line 539 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str623, ei_cp855},
#line 130 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str624, ei_euc_tw},
#line 511 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str625, ei_cp1162},
#line 627 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str626, ei_ebcdic285},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 837 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str632, ei_ebcdic12712},
#line 684 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str633, ei_ebcdic924},
    {-1}, {-1}, {-1}, {-1},
#line 482 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str638, ei_ksc5601},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 621 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str644, ei_ebcdic284},
    {-1},
#line 439 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str646, ei_cp874},
    {-1}, {-1}, {-1}, {-1},
#line 563 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str651, ei_cp863},
    {-1},
#line 29 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str653, ei_utf8},
    {-1}, {-1}, {-1},
#line 284 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str657, ei_koi8_ru},
    {-1},
#line 69 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str659, ei_utf7},
    {-1}, {-1}, {-1},
#line 480 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str663, ei_isoir165},
    {-1}, {-1}, {-1},
#line 294 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str667, ei_cp1251},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 530 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str679, ei_cp852},
#line 424 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str680, ei_rk1048},
    {-1},
#line 49 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str682, ei_ucs4le},
    {-1}, {-1}, {-1}, {-1},
#line 615 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str687, ei_ebcdic280},
    {-1}, {-1}, {-1}, {-1},
#line 693 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str692, ei_ebcdic1026},
#line 628 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str693, ei_ebcdic285},
#line 584 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str694, ei_cp1125},
#line 278 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str695, ei_koi8_u},
#line 236 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str696, ei_iso8859_9},
#line 551 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str697, ei_cp858},
    {-1},
#line 442 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str699, ei_viscii},
    {-1},
#line 39 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str701, ei_ucs2le},
    {-1}, {-1}, {-1}, {-1},
#line 63 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str706, ei_utf32le},
    {-1}, {-1}, {-1}, {-1},
#line 623 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str711, ei_ebcdic284},
#line 27 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str712, ei_utf8},
#line 259 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str713, ei_iso8859_14},
    {-1}, {-1}, {-1},
#line 677 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str717, ei_ebcdic880},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 637 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str725, ei_ebcdic423},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 547 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str739, ei_cp858},
    {-1},
#line 415 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str741, ei_pt154},
#line 418 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str742, ei_pt154},
    {-1}, {-1},
#line 748 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str745, ei_ebcdic1143},
#line 537 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str746, ei_cp853},
#line 443 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str747, ei_viscii},
    {-1},
#line 617 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str749, ei_ebcdic282},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 362 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str758, ei_mac_centraleurope},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 667 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str764, ei_ebcdic871},
    {-1}, {-1},
#line 452 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str767, ei_iso646_jp},
    {-1}, {-1},
#line 659 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str770, ei_ebcdic870},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 671 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str776, ei_ebcdic875},
    {-1}, {-1}, {-1}, {-1},
#line 729 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str781, ei_ebcdic1141},
#line 647 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str782, ei_ebcdic500},
#line 217 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str783, ei_iso8859_7},
    {-1},
#line 26 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str785, ei_utf8},
    {-1},
#line 721 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str787, ei_ebcdic1140},
    {-1}, {-1},
#line 804 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str790, ei_ebcdic1153},
#line 237 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str791, ei_iso8859_9},
    {-1},
#line 763 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str793, ei_ebcdic1145},
#line 440 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str794, ei_cp874},
    {-1},
#line 267 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str796, ei_iso8859_15},
    {-1}, {-1},
#line 753 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str799, ei_ebcdic1143},
    {-1},
#line 134 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str801, ei_ces_big5},
#line 650 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str802, ei_ebcdic500},
    {-1}, {-1},
#line 108 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str805, ei_cp936},
    {-1},
#line 490 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str807, ei_cp856},
    {-1}, {-1},
#line 836 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str810, ei_ebcdic12712},
#line 755 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str811, ei_ebcdic1144},
    {-1},
#line 575 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str813, ei_cp869},
    {-1}, {-1}, {-1}, {-1},
#line 710 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str818, ei_ebcdic1123},
    {-1},
#line 728 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str820, ei_ebcdic1141},
    {-1}, {-1},
#line 124 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str823, ei_hz},
#line 133 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str824, ei_ces_big5},
#line 89 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str825, ei_cp932},
#line 720 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str826, ei_ebcdic1140},
    {-1}, {-1}, {-1},
#line 702 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str830, ei_ebcdic1112},
    {-1},
#line 762 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str832, ei_ebcdic1145},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 565 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str838, ei_cp863},
    {-1}, {-1}, {-1}, {-1},
#line 337 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str843, ei_cp850},
    {-1}, {-1}, {-1},
#line 434 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str847, ei_tis620},
    {-1},
#line 737 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str849, ei_ebcdic1142},
#line 754 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str850, ei_ebcdic1144},
    {-1},
#line 129 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str852, ei_euc_tw},
    {-1},
#line 52 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str854, ei_utf16},
    {-1}, {-1}, {-1}, {-1},
#line 280 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str859, ei_koi8_ru},
    {-1},
#line 405 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str861, ei_hp_roman8},
#line 609 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str862, ei_ebcdic278},
    {-1}, {-1}, {-1},
#line 580 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str866, ei_cp1125},
    {-1}, {-1},
#line 689 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str869, ei_ebcdic1025},
    {-1},
#line 611 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str871, ei_ebcdic280},
    {-1}, {-1}, {-1},
#line 270 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str875, ei_iso8859_16},
    {-1},
#line 686 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str877, ei_ebcdic924},
    {-1}, {-1}, {-1}, {-1},
#line 517 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str882, ei_cp1163},
#line 639 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str883, ei_ebcdic424},
#line 500 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str884, ei_cp1124},
    {-1}, {-1}, {-1},
#line 736 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str888, ei_ebcdic1142},
#line 67 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str889, ei_utf7},
#line 252 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str890, ei_iso8859_13},
#line 99 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str891, ei_euc_cn},
    {-1}, {-1},
#line 137 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str894, ei_cp950},
    {-1}, {-1}, {-1},
#line 598 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str898, ei_ebcdic273},
    {-1},
#line 528 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str900, ei_cp775},
#line 673 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str901, ei_ebcdic880},
#line 170 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str902, ei_iso8859_1},
    {-1}, {-1},
#line 812 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str905, ei_ebcdic1156},
#line 117 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str906, ei_gb18030_2022},
#line 797 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str907, ei_ebcdic1149},
    {-1},
#line 787 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str909, ei_ebcdic1148},
    {-1},
#line 849 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str911, ei_tds565},
    {-1}, {-1},
#line 776 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str914, ei_ebcdic1146},
    {-1},
#line 101 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str916, ei_euc_cn},
#line 498 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str917, ei_cp1046},
    {-1}, {-1},
#line 416 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str920, ei_pt154},
    {-1},
#line 705 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str922, ei_ebcdic1122},
#line 557 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str923, ei_cp861},
    {-1}, {-1}, {-1},
#line 35 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str927, ei_ucs2be},
#line 582 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str928, ei_cp1125},
    {-1}, {-1}, {-1},
#line 619 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str932, ei_ebcdic284},
    {-1}, {-1},
#line 553 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str935, ei_cp860},
#line 694 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str936, ei_ebcdic1026},
#line 399 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str937, ei_mac_thai},
    {-1},
#line 324 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str939, ei_cp1256},
#line 82 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str940, ei_euc_jp},
#line 227 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str941, ei_iso8859_8},
    {-1}, {-1},
#line 361 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str944, ei_mac_centraleurope},
    {-1}, {-1}, {-1},
#line 786 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str948, ei_ebcdic1148},
    {-1}, {-1}, {-1}, {-1},
#line 110 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str953, ei_cp936},
    {-1}, {-1}, {-1},
#line 529 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str957, ei_cp852},
    {-1}, {-1},
#line 445 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str960, ei_tcvn},
#line 801 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str961, ei_ebcdic1149},
#line 496 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str962, ei_cp943},
    {-1}, {-1}, {-1}, {-1},
#line 803 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str967, ei_ebcdic1153},
    {-1}, {-1}, {-1}, {-1},
#line 131 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str972, ei_ces_big5},
    {-1}, {-1}, {-1},
#line 752 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str976, ei_ebcdic1143},
#line 771 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str977, ei_ebcdic1146},
    {-1}, {-1},
#line 505 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str980, ei_cp1129},
#line 354 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str981, ei_mac_roman},
    {-1},
#line 531 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str983, ei_cp852},
    {-1},
#line 616 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str985, ei_ebcdic282},
#line 58 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str986, ei_utf32},
    {-1}, {-1}, {-1}, {-1},
#line 289 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str991, ei_cp1250},
    {-1},
#line 274 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str993, ei_koi8_r},
    {-1},
#line 709 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str995, ei_ebcdic1123},
#line 566 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str996, ei_cp864},
#line 830 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str997, ei_ebcdic1166},
    {-1}, {-1},
#line 578 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1000, ei_cp869},
#line 306 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1001, ei_cp1253},
    {-1}, {-1},
#line 751 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1004, ei_ebcdic1143},
    {-1}, {-1}, {-1}, {-1},
#line 171 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1009, ei_iso8859_1},
    {-1}, {-1}, {-1},
#line 389 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1013, ei_mac_turkish},
    {-1},
#line 478 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1015, ei_gb2312},
#line 770 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1016, ei_ebcdic1146},
    {-1}, {-1},
#line 497 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1019, ei_cp1046},
#line 422 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1020, ei_rk1048},
    {-1}, {-1}, {-1},
#line 57 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1024, ei_utf16le},
    {-1}, {-1},
#line 144 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1027, ei_euc_kr},
    {-1}, {-1},
#line 173 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1030, ei_iso8859_1},
    {-1},
#line 495 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1032, ei_cp943},
    {-1}, {-1},
#line 406 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1035, ei_hp_roman8},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 204 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1042, ei_iso8859_5},
    {-1},
#line 428 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1044, ei_cp1133},
    {-1}, {-1}, {-1}, {-1},
#line 341 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1049, ei_cp862},
    {-1}, {-1}, {-1},
#line 692 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1053, ei_ebcdic1026},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 516 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1059, ei_cp1163},
#line 197 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1060, ei_iso8859_4},
    {-1}, {-1},
#line 833 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1063, ei_ebcdic4971},
    {-1}, {-1}, {-1},
#line 172 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1067, ei_iso8859_1},
    {-1}, {-1},
#line 636 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1070, ei_ebcdic423},
    {-1},
#line 85 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1072, ei_sjis},
    {-1}, {-1}, {-1},
#line 818 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1076, ei_ebcdic1158},
#line 515 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1077, ei_cp1163},
    {-1},
#line 203 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1079, ei_iso8859_5},
    {-1},
#line 369 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1081, ei_mac_croatian},
    {-1}, {-1}, {-1},
#line 792 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1085, ei_ebcdic1148},
    {-1}, {-1}, {-1},
#line 421 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1089, ei_rk1048},
#line 429 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1090, ei_tis620},
    {-1},
#line 409 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1092, ei_armscii_8},
    {-1},
#line 430 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1094, ei_tis620},
    {-1},
#line 283 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1096, ei_koi8_ru},
#line 196 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1097, ei_iso8859_4},
#line 181 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1098, ei_iso8859_2},
#line 276 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1099, ei_koi8_r},
    {-1}, {-1},
#line 102 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1102, ei_euc_cn},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 808 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1109, ei_ebcdic1155},
#line 335 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1110, ei_cp1258},
    {-1},
#line 519 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1112, ei_cp437},
#line 331 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1113, ei_cp1257},
#line 104 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1114, ei_euc_cn},
    {-1},
#line 730 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1116, ei_ebcdic1141},
#line 81 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1117, ei_euc_jp},
    {-1}, {-1},
#line 46 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1120, ei_ucs4be},
    {-1},
#line 722 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1122, ei_ebcdic1140},
    {-1},
#line 152 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1124, ei_cp949},
    {-1}, {-1},
#line 805 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1127, ei_ebcdic1154},
#line 764 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1128, ei_ebcdic1145},
#line 411 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1129, ei_georgian_ps},
#line 382 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1130, ei_mac_ukraine},
#line 534 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1131, ei_cp853},
    {-1},
#line 378 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1133, ei_mac_cyrillic},
    {-1},
#line 180 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1135, ei_iso8859_2},
    {-1},
#line 288 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1137, ei_cp1250},
    {-1},
#line 33 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1139, ei_ucs2be},
    {-1},
#line 699 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1141, ei_ebcdic1047},
    {-1},
#line 317 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1143, ei_cp1255},
#line 61 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1144, ei_utf32be},
    {-1},
#line 756 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1146, ei_ebcdic1144},
    {-1}, {-1}, {-1}, {-1},
#line 644 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1151, ei_ebcdic425},
    {-1}, {-1}, {-1},
#line 15 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1155, ei_ascii},
    {-1}, {-1},
#line 231 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1158, ei_iso8859_8},
    {-1},
#line 344 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1160, ei_cp862},
#line 310 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1161, ei_cp1254},
    {-1}, {-1}, {-1}, {-1},
#line 799 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1166, ei_ebcdic1149},
    {-1},
#line 263 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1168, ei_iso8859_15},
    {-1}, {-1}, {-1},
#line 538 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1172, ei_cp855},
    {-1},
#line 260 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1174, ei_iso8859_14},
#line 473 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1175, ei_iso646_cn},
    {-1},
#line 44 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1177, ei_ucs4},
    {-1}, {-1}, {-1},
#line 93 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1181, ei_iso2022_jp1},
#line 92 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1182, ei_iso2022_jp},
#line 96 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1183, ei_iso2022_jpms},
#line 738 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1184, ei_ebcdic1142},
#line 100 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1185, ei_euc_cn},
#line 245 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1186, ei_iso8859_10},
    {-1}, {-1}, {-1},
#line 265 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1190, ei_iso8859_15},
    {-1},
#line 95 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1192, ei_iso2022_jp2},
    {-1},
#line 151 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1194, ei_cp949},
#line 230 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1195, ei_iso8859_8},
#line 31 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1196, ei_ucs2},
    {-1}, {-1},
#line 299 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1199, ei_cp1252},
#line 624 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1200, ei_ebcdic285},
    {-1}, {-1}, {-1}, {-1},
#line 91 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1205, ei_iso2022_jp},
#line 163 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1206, ei_iso8859_1},
#line 248 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1207, ei_iso8859_11},
    {-1},
#line 681 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1209, ei_ebcdic924},
#line 353 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1210, ei_mac_roman},
#line 431 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1211, ei_tis620},
#line 128 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1212, ei_euc_tw},
#line 242 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1213, ei_iso8859_10},
    {-1}, {-1}, {-1}, {-1},
#line 198 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1218, ei_iso8859_5},
#line 261 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1219, ei_iso8859_15},
    {-1},
#line 427 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1221, ei_cp1133},
#line 608 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1222, ei_ebcdic278},
#line 477 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1223, ei_gb2312},
    {-1},
#line 817 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1225, ei_ebcdic1158},
#line 213 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1226, ei_iso8859_6},
    {-1}, {-1},
#line 158 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1229, ei_iso2022_kr},
#line 208 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1230, ei_iso8859_6},
    {-1}, {-1},
#line 846 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1233, ei_iso2022_jp3},
    {-1}, {-1},
#line 190 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1236, ei_iso8859_4},
#line 255 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1237, ei_iso8859_14},
#line 184 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1238, ei_iso8859_3},
    {-1}, {-1},
#line 470 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1241, ei_jisx0212},
    {-1}, {-1},
#line 788 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1244, ei_ebcdic1148},
    {-1}, {-1}, {-1},
#line 185 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1248, ei_iso8859_3},
#line 94 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1249, ei_iso2022_jp2},
#line 485 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1250, ei_ksc5601},
#line 148 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1251, ei_euc_kr},
    {-1}, {-1},
#line 597 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1254, ei_ebcdic273},
    {-1},
#line 527 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1256, ei_cp775},
    {-1},
#line 381 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1258, ei_mac_ukraine},
#line 334 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1259, ei_cp1258},
#line 116 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1260, ei_gb18030_2022},
    {-1},
#line 491 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1262, ei_cp922},
#line 212 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1263, ei_iso8859_6},
#line 570 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1264, ei_cp865},
    {-1},
#line 408 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1266, ei_nextstep},
#line 377 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1267, ei_mac_cyrillic},
#line 366 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1268, ei_mac_iceland},
    {-1}, {-1}, {-1},
#line 680 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1272, ei_ebcdic905},
    {-1},
#line 174 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1274, ei_iso8859_2},
    {-1}, {-1},
#line 122 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1277, ei_hz},
    {-1},
#line 123 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1279, ei_hz},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 461 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1286, ei_jisx0208},
#line 17 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1287, ei_ascii},
#line 316 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1288, ei_cp1255},
    {-1}, {-1},
#line 479 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1291, ei_gb2312},
    {-1},
#line 811 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1293, ei_ebcdic1156},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 350 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1300, ei_cp1131},
#line 746 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1301, ei_ebcdic1143},
#line 550 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1302, ei_cp858},
    {-1},
#line 254 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1304, ei_iso8859_13},
#line 376 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1305, ei_mac_cyrillic},
#line 711 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1306, ei_ebcdic1130},
    {-1}, {-1},
#line 149 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1309, ei_euc_kr},
    {-1}, {-1},
#line 772 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1312, ei_ebcdic1146},
#line 781 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1313, ei_ebcdic1147},
#line 545 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1314, ei_cp857},
    {-1}, {-1}, {-1},
#line 800 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1318, ei_ebcdic1149},
#line 540 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1319, ei_cp855},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 322 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1327, ei_cp1256},
#line 218 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1328, ei_iso8859_7},
    {-1}, {-1}, {-1},
#line 120 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1332, ei_iso2022_cn_ext},
    {-1},
#line 225 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1334, ei_iso8859_8},
    {-1}, {-1},
#line 504 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1337, ei_cp1129},
    {-1}, {-1},
#line 745 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1340, ei_ebcdic1143},
#line 403 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1341, ei_hp_roman8},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 848 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1350, ei_tds565},
    {-1}, {-1},
#line 471 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1353, ei_jisx0212},
    {-1}, {-1}, {-1},
#line 258 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1357, ei_iso8859_14},
#line 816 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1358, ei_ebcdic1157},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 785 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1367, ei_ebcdic1147},
#line 714 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1368, ei_ebcdic1132},
#line 664 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1369, ei_ebcdic871},
    {-1},
#line 675 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1371, ei_ebcdic880},
    {-1}, {-1},
#line 708 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1374, ei_ebcdic1123},
    {-1},
#line 87 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1376, ei_sjis},
#line 113 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1377, ei_gb18030_2022},
#line 157 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1378, ei_iso2022_kr},
#line 34 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1379, ei_ucs2be},
#line 655 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1380, ei_ebcdic838},
#line 658 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1381, ei_ebcdic870},
    {-1}, {-1},
#line 233 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1384, ei_iso8859_8},
    {-1}, {-1}, {-1},
#line 484 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1388, ei_ksc5601},
#line 169 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1389, ei_iso8859_1},
#line 435 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1390, ei_tis620},
    {-1}, {-1},
#line 273 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1393, ei_iso8859_16},
#line 211 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1394, ei_iso8859_6},
#line 239 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1395, ei_iso8859_9},
#line 202 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1396, ei_iso8859_5},
    {-1},
#line 851 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1398, ei_atarist},
#line 561 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1399, ei_cp861},
#line 506 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1400, ei_cp1161},
#line 453 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1401, ei_iso646_jp},
#line 205 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1402, ei_iso8859_6},
#line 268 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1403, ei_iso8859_16},
#line 195 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1404, ei_iso8859_4},
#line 555 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1405, ei_cp860},
#line 820 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1406, ei_ebcdic1160},
#line 834 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1407, ei_ebcdic4971},
    {-1}, {-1}, {-1},
#line 572 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1411, ei_cp865},
#line 826 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1412, ei_ebcdic1165},
    {-1}, {-1},
#line 23 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1415, ei_ascii},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 232 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1421, ei_iso8859_8},
    {-1},
#line 179 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1423, ei_iso8859_2},
    {-1},
#line 72 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1425, ei_ucs4internal},
    {-1}, {-1}, {-1},
#line 567 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1429, ei_cp864},
#line 823 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1430, ei_ebcdic1164},
#line 454 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1431, ei_jisx0201},
    {-1}, {-1}, {-1},
#line 552 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1435, ei_cp858},
    {-1},
#line 433 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1437, ei_tis620},
    {-1},
#line 56 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1439, ei_utf16le},
#line 432 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1440, ei_tis620},
    {-1}, {-1}, {-1},
#line 70 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1444, ei_ucs2internal},
    {-1},
#line 678 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1446, ei_ebcdic905},
#line 423 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1447, ei_rk1048},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 395 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1460, ei_mac_arabic},
    {-1},
#line 55 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1462, ei_utf16be},
#line 795 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1463, ei_ebcdic1149},
    {-1}, {-1},
#line 604 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1466, ei_ebcdic277},
    {-1},
#line 510 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1468, ei_cp1162},
    {-1},
#line 360 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1470, ei_mac_centraleurope},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 65 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1477, ei_utf7},
    {-1}, {-1}, {-1}, {-1},
#line 311 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1482, ei_cp1254},
#line 387 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1483, ei_mac_turkish},
    {-1}, {-1}, {-1},
#line 247 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1487, ei_iso8859_10},
#line 88 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1488, ei_cp932},
    {-1}, {-1}, {-1}, {-1},
#line 36 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1493, ei_ucs2be},
    {-1}, {-1},
#line 466 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1496, ei_jisx0212},
    {-1}, {-1}, {-1}, {-1},
#line 83 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1501, ei_sjis},
#line 794 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1502, ei_ebcdic1149},
    {-1}, {-1}, {-1}, {-1},
#line 593 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1507, ei_ebcdic037},
#line 76 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1508, ei_euc_jp},
#line 683 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1509, ei_ebcdic924},
    {-1},
#line 486 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1511, ei_ksc5601},
    {-1},
#line 383 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1513, ei_mac_greek},
#line 305 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1514, ei_cp1253},
#line 467 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1515, ei_jisx0212},
    {-1}, {-1}, {-1},
#line 521 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1519, ei_cp437},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 253 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1526, ei_iso8859_13},
    {-1},
#line 282 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1528, ei_koi8_ru},
#line 74 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1529, ei_c99},
    {-1}, {-1}, {-1}, {-1},
#line 141 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1534, ei_big5hkscs2008},
    {-1},
#line 503 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1536, ei_cp1129},
#line 16 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1537, ei_ascii},
    {-1},
#line 412 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1539, ei_koi8_t},
    {-1}, {-1},
#line 847 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1542, ei_big5_2003},
#line 356 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1543, ei_mac_roman},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 189 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1550, ei_iso8859_3},
#line 815 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1551, ei_ebcdic1157},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 844 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1557, ei_shift_jisx0213},
    {-1},
#line 458 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1559, ei_jisx0208},
#line 784 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1560, ei_ebcdic1147},
    {-1},
#line 481 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1562, ei_isoir165},
#line 698 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1563, ei_ebcdic1047},
    {-1},
#line 697 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1565, ei_ebcdic1047},
    {-1},
#line 488 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1567, ei_cp856},
    {-1},
#line 426 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1569, ei_cp1133},
    {-1}, {-1},
#line 783 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1572, ei_ebcdic1147},
    {-1}, {-1},
#line 114 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1575, ei_gb18030_2022},
#line 257 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1576, ei_iso8859_14},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 330 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1585, ei_cp1257},
    {-1},
#line 188 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1587, ei_iso8859_3},
    {-1}, {-1},
#line 264 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1590, ei_iso8859_15},
#line 483 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1591, ei_ksc5601},
    {-1},
#line 425 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1593, ei_mulelao},
    {-1},
#line 348 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1595, ei_cp866},
#line 829 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1596, ei_ebcdic1166},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 24 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1602, ei_ascii},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 634 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1608, ei_ebcdic423},
    {-1}, {-1}, {-1},
#line 719 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1612, ei_ebcdic1137},
#line 209 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1613, ei_iso8859_6},
#line 596 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1614, ei_ebcdic273},
#line 759 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1615, ei_ebcdic1144},
    {-1},
#line 802 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1617, ei_ebcdic1153},
    {-1},
#line 632 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1619, ei_ebcdic297},
    {-1},
#line 106 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1621, ei_euc_cn},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 533 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1629, ei_cp853},
    {-1},
#line 126 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1631, ei_euc_tw},
#line 682 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1632, ei_ebcdic924},
    {-1}, {-1},
#line 62 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1635, ei_utf32le},
#line 747 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1636, ei_ebcdic1143},
#line 162 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1637, ei_dec_hanyu},
    {-1}, {-1}, {-1},
#line 524 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1641, ei_cp737},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 244 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1647, ei_iso8859_10},
    {-1},
#line 187 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1649, ei_iso8859_3},
    {-1}, {-1},
#line 228 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1652, ei_iso8859_8},
#line 410 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1653, ei_georgian_academy},
    {-1}, {-1}, {-1}, {-1},
#line 367 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1658, ei_mac_croatian},
#line 346 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1659, ei_cp866},
    {-1},
#line 292 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1661, ei_cp1251},
    {-1}, {-1},
#line 286 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1664, ei_cp1250},
    {-1}, {-1},
#line 315 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1667, ei_cp1255},
    {-1}, {-1}, {-1}, {-1},
#line 266 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1672, ei_iso8859_15},
    {-1}, {-1},
#line 207 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1675, ei_iso8859_6},
#line 309 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1676, ei_cp1254},
    {-1}, {-1}, {-1}, {-1},
#line 143 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1681, ei_euc_kr},
    {-1}, {-1}, {-1},
#line 654 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1685, ei_ebcdic838},
#line 40 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1686, ei_ucs2le},
    {-1}, {-1}, {-1},
#line 365 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1690, ei_mac_iceland},
    {-1}, {-1}, {-1}, {-1},
#line 298 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1695, ei_cp1252},
#line 436 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1696, ei_tis620},
    {-1},
#line 775 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1698, ei_ebcdic1146},
#line 543 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1699, ei_cp857},
    {-1},
#line 845 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1701, ei_iso2022_jp3},
    {-1},
#line 835 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1703, ei_ebcdic12712},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 669 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1710, ei_ebcdic875},
    {-1},
#line 241 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1712, ei_iso8859_9},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 562 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1721, ei_cp863},
    {-1},
#line 219 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1723, ei_iso8859_7},
#line 404 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1724, ei_hp_roman8},
#line 333 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1725, ei_cp1258},
#line 182 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1726, ei_iso8859_3},
#line 249 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1727, ei_iso8859_13},
    {-1}, {-1}, {-1},
#line 79 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1731, ei_euc_jp},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 838 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1737, ei_ebcdic16804},
#line 546 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1738, ei_cp858},
#line 438 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1739, ei_cp874},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 64 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1745, ei_utf7},
#line 548 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1746, ei_cp858},
    {-1}, {-1},
#line 240 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1749, ei_iso8859_9},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 279 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1758, ei_koi8_u},
#line 321 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1759, ei_cp1256},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 107 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1776, ei_ces_gbk},
    {-1}, {-1},
#line 250 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1779, ei_iso8859_13},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 86 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1791, ei_sjis},
#line 450 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1792, ei_iso646_jp},
    {-1}, {-1},
#line 18 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1795, ei_ascii},
#line 476 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1796, ei_iso646_cn},
    {-1},
#line 796 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1798, ei_ebcdic1149},
#line 487 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1799, ei_ksc5601},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 718 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1805, ei_ebcdic1137},
    {-1}, {-1}, {-1}, {-1},
#line 468 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1810, ei_jisx0212},
#line 594 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1811, ei_ebcdic037},
    {-1}, {-1}, {-1},
#line 592 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1815, ei_ebcdic037},
    {-1}, {-1}, {-1},
#line 32 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1819, ei_ucs2},
    {-1}, {-1},
#line 603 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1822, ei_ebcdic277},
    {-1}, {-1}, {-1}, {-1},
#line 536 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1827, ei_cp853},
    {-1},
#line 19 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1829, ei_ascii},
    {-1}, {-1},
#line 251 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1832, ei_iso8859_13},
    {-1}, {-1},
#line 75 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1835, ei_java},
    {-1}, {-1},
#line 447 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1838, ei_tcvn},
    {-1}, {-1}, {-1}, {-1},
#line 460 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1843, ei_jisx0208},
    {-1},
#line 666 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1845, ei_ebcdic871},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 662 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1851, ei_ebcdic870},
#line 372 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1852, ei_mac_romania},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 665 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1864, ei_ebcdic871},
    {-1},
#line 588 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1866, ei_ebcdic037},
    {-1}, {-1},
#line 779 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1869, ei_ebcdic1147},
    {-1},
#line 446 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1871, ei_tcvn},
    {-1}, {-1},
#line 455 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1874, ei_jisx0201},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 591 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1881, ei_ebcdic037},
#line 661 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1882, ei_ebcdic870},
#line 54 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1883, ei_utf16be},
    {-1}, {-1}, {-1}, {-1},
#line 234 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1888, ei_iso8859_9},
#line 701 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1889, ei_ebcdic1097},
    {-1}, {-1}, {-1},
#line 243 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1893, ei_iso8859_10},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 379 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1902, ei_mac_ukraine},
#line 222 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1903, ei_iso8859_7},
#line 145 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1904, ei_euc_kr},
    {-1}, {-1}, {-1},
#line 778 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1908, ei_ebcdic1147},
    {-1},
#line 281 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1910, ei_koi8_ru},
#line 696 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1911, ei_ebcdic1047},
    {-1}, {-1}, {-1},
#line 494 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1915, ei_cp943},
    {-1}, {-1}, {-1},
#line 564 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1919, ei_cp863},
#line 514 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1920, ei_cp1163},
#line 304 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1921, ei_cp1253},
    {-1}, {-1}, {-1},
#line 199 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1925, ei_iso8859_5},
#line 262 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1926, ei_iso8859_15},
    {-1}, {-1}, {-1},
#line 229 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1930, ei_iso8859_8},
    {-1},
#line 359 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1932, ei_mac_centraleurope},
    {-1},
#line 191 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1934, ei_iso8859_4},
#line 256 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1935, ei_iso8859_14},
#line 210 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1936, ei_iso8859_6},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 269 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1954, ei_iso8859_16},
    {-1},
#line 832 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1956, ei_ebcdic4971},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 166 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1965, ei_iso8859_1},
    {-1}, {-1}, {-1},
#line 633 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1969, ei_ebcdic297},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 474 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1975, ei_iso646_cn},
    {-1}, {-1}, {-1},
#line 631 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1979, ei_ebcdic297},
    {-1}, {-1}, {-1},
#line 226 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1983, ei_iso8859_8},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 843 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1989, ei_shift_jisx0213},
    {-1}, {-1},
#line 653 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1992, ei_ebcdic838},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 674 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2008, ei_ebcdic880},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 73 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2020, ei_ucs4swapped},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 364 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2026, ei_mac_iceland},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 71 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2039, ei_ucs2swapped},
#line 464 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2040, ei_jisx0208},
#line 66 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2041, ei_utf7},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 523 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2048, ei_cp737},
    {-1}, {-1},
#line 363 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2051, ei_mac_iceland},
    {-1}, {-1}, {-1}, {-1},
#line 275 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2056, ei_koi8_r},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 574 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2063, ei_cp869},
    {-1}, {-1},
#line 112 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2066, ei_gb18030_2005},
    {-1}, {-1},
#line 842 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2069, ei_euc_jisx0213},
    {-1}, {-1}, {-1},
#line 449 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2073, ei_iso646_jp},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 60 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2079, ei_utf32be},
    {-1},
#line 577 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2081, ei_cp869},
#line 417 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2082, ei_pt154},
    {-1}, {-1},
#line 472 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2085, ei_iso646_cn},
    {-1}, {-1}, {-1}, {-1},
#line 132 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2090, ei_ces_big5},
    {-1}, {-1}, {-1},
#line 115 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2094, ei_gb18030_2022},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 459 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2100, ei_jisx0208},
#line 400 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2101, ei_mac_thai},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 221 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2110, ei_iso8859_7},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 224 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2118, ei_iso8859_7},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 103 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2127, ei_euc_cn},
    {-1}, {-1},
#line 323 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2130, ei_cp1256},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 595 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2137, ei_ebcdic273},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 520 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2143, ei_cp437},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 223 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2155, ei_iso8859_7},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 635 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2171, ei_ebcdic423},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 183 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2179, ei_iso8859_3},
    {-1}, {-1},
#line 602 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2182, ei_ebcdic277},
#line 139 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2183, ei_big5hkscs2001},
    {-1},
#line 814 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2185, ei_ebcdic1157},
    {-1}, {-1}, {-1}, {-1},
#line 525 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2190, ei_cp775},
    {-1},
#line 620 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2192, ei_ebcdic284},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 140 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2198, ei_big5hkscs2004},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 780 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2204, ei_ebcdic1147},
#line 327 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2205, ei_cp1257},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 542 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2213, ei_cp857},
    {-1}, {-1}, {-1}, {-1},
#line 649 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2218, ei_ebcdic500},
#line 329 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2219, ei_cp1257},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 380 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2240, ei_mac_ukraine},
    {-1}, {-1}, {-1},
#line 80 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2244, ei_euc_jp},
    {-1},
#line 605 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2246, ei_ebcdic278},
#line 142 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2247, ei_big5hkscs2008},
    {-1}, {-1},
#line 291 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2250, ei_cp1251},
    {-1}, {-1},
#line 287 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2253, ei_cp1250},
    {-1}, {-1},
#line 314 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2256, ei_cp1255},
    {-1}, {-1}, {-1}, {-1},
#line 371 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2261, ei_mac_romania},
    {-1}, {-1}, {-1},
#line 308 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2265, ei_cp1254},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 343 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2280, ei_cp862},
    {-1}, {-1}, {-1},
#line 297 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2284, ei_cp1252},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 214 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2294, ei_iso8859_7},
#line 153 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2295, ei_johab},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 332 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2314, ei_cp1258},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 606 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2333, ei_ebcdic278},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 320 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2348, ei_cp1256},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 125 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2365, ei_euc_tw},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 717 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2388, ei_ebcdic1137},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 544 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2395, ei_cp857},
    {-1}, {-1}, {-1},
#line 164 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2399, ei_iso8859_1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 587 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2406, ei_ebcdic037},
    {-1},
#line 526 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2408, ei_cp775},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 518 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2418, ei_cp437},
    {-1}, {-1}, {-1}, {-1},
#line 388 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2423, ei_mac_turkish},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 175 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2433, ei_iso8859_2},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 465 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2449, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 535 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2459, ei_cp853},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 463 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2483, ei_jisx0208},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 206 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2497, ei_iso8859_6},
    {-1}, {-1}, {-1},
#line 20 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2501, ei_ascii},
#line 154 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2502, ei_johab},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 303 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2510, ei_cp1253},
    {-1}, {-1}, {-1},
#line 220 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2514, ei_iso8859_7},
    {-1}, {-1},
#line 841 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2517, ei_euc_jisx0213},
#line 629 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2518, ei_ebcdic297},
    {-1},
#line 607 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2520, ei_ebcdic278},
    {-1}, {-1}, {-1},
#line 138 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2524, ei_big5hkscs1999},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 391 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2535, ei_mac_hebrew},
    {-1},
#line 235 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2537, ei_iso8859_9},
    {-1}, {-1}, {-1},
#line 161 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2541, ei_dec_kanji},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 852 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2552, ei_riscos1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 135 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2562, ei_cp950},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 127 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2588, ei_euc_tw},
    {-1},
#line 679 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2590, ei_ebcdic905},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 630 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2635, ei_ebcdic297},
    {-1}, {-1}, {-1}, {-1},
#line 328 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2640, ei_cp1257},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 601 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2647, ei_ebcdic277},
    {-1}, {-1}, {-1}, {-1},
#line 700 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2652, ei_ebcdic1097},
    {-1}, {-1}, {-1}, {-1},
#line 766 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2657, ei_ebcdic1145},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 368 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2681, ei_mac_croatian},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 216 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2693, ei_iso8859_7},
    {-1}, {-1}, {-1},
#line 640 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2697, ei_ebcdic424},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 612 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2712, ei_ebcdic280},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 146 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2720, ei_euc_kr},
#line 599 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2721, ei_ebcdic277},
    {-1}, {-1}, {-1}, {-1},
#line 77 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2726, ei_euc_jp},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 660 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2732, ei_ebcdic870},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 448 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2747, ei_tcvn},
    {-1}, {-1}, {-1},
#line 626 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2751, ei_ebcdic285},
    {-1},
#line 758 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2753, ei_ebcdic1144},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 774 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2775, ei_ebcdic1146},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 850 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2784, ei_atarist},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 326 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2794, ei_cp1257},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 396 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2829, ei_mac_arabic},
    {-1},
#line 78 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2831, ei_euc_jp},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 798 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2839, ei_ebcdic1149},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 437 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2847, ei_cp874},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 589 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2924, ei_ebcdic037},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 215 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2943, ei_iso8859_7},
    {-1}, {-1}, {-1},
#line 522 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2947, ei_cp737},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 648 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2961, ei_ebcdic500},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 790 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str3005, ei_ebcdic1148},
#line 109 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str3006, ei_cp936},
    {-1},
#line 384 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str3008, ei_mac_greek},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 724 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str3036, ei_ebcdic1140},
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
    {-1},
#line 750 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str3137, ei_ebcdic1143},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 670 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str3162, ei_ebcdic875},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 685 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str3188, ei_ebcdic924},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 741 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str3206, ei_ebcdic1142},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 782 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str3226, ei_ebcdic1147},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1},
#line 590 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str3248, ei_ebcdic037},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 749 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str3278, ei_ebcdic1143},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 392 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str3315, ei_mac_hebrew},
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
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 457 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str3558, ei_jisx0201},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 600 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str3632, ei_ebcdic277},
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
#line 732 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str3885, ei_ebcdic1141},
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
    {-1},
#line 740 "lib/generated/aliases.gperf"
    {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str4067, ei_ebcdic1142}
  };

const struct alias *
aliases_lookup (register const char *str, register size_t len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = aliases_hash (str, len);

      if (key <= MAX_HASH_VALUE)
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

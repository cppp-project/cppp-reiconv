/*
 * IBM CP943
 */

/* This is essentially CP932, with many mappings missing in the AIX conversion
   table. We just pretend it were the same as CP932. */

#define cp943_mbtowc cp932_mbtowc
#define cp943_wctomb cp932_wctomb

@ECHO OFF
REM Simple check of transliteration facilities.
REM Usage: check-translit.bat SRCDIR FILE fromcode tocode

.\iconv -f %3 -t %4 < %1\%2.%3 > tmp
fc %1\%2.%4 tmp
del tmp

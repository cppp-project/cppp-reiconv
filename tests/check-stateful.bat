@ECHO OFF
REM Simple check of a stateful encoding.
REM Usage: check-stateful.bat SRCDIR CHARSET

if not exist %1\%2-snippet.alt goto ENDIF_1
  reiconv-test -f %2 -t UTF-8 %1\%2-snippet.alt tmp-snippet
  cmp %1\%2-snippet.UTF-8 tmp-snippet
:ENDIF_1

reiconv-test -f %2 -t UTF-8 %1\%2-snippet tmp-snippet
cmp %1\%2-snippet.UTF-8 tmp-snippet
reiconv-test -f UTF-8 -t %2 %1\%2-snippet.UTF-8 tmp-snippet
cmp %1\%2-snippet tmp-snippet
del tmp-snippet

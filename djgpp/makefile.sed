# Fixes for lib/Makefile.in
s|encodings\.def|encodings/&|g
s|encodings_aix\.def|encodings/aix.def|g
s|encodings_dos\.def|encodings/dos\.def|g
s|encodings_local\.def|encodings/local\.def|g
s|aliases\.h|aliases/&|g
s|aliases_aix\.h|aliases/aix.h|g
s|aliases_dos\.h|aliases/dos\.h|g
s|aliases_local\.h|aliases/local\.h|g


# Fixes for tests/Makefile.in
/^check[ 	]*:.*table-from[ 	]*table-to/,/^$/ s,^	\+\$(srcdir)/,	$(SHELL) $(srcdir)/,
s/check-stateless/stateless-check/g
s/check-stateful/stateful-check/g
s/check-translit/translit-check/g

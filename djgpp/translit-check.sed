# Sed script for tests/translit-check editing.

/\.\./ i\
# For systems with severe filename restrictions allow for\
# an alternate filename.\
UNAME=${UNAME-`uname 2>/dev/null`}\
case X$UNAME in\
  *-DOS) file=`echo "$file" | sed "s|TranslitFail1|Translit/Fail1|"` ;;\
  *)     file="$file" ;;\
esac

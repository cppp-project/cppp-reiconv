/*
 * Generates Unicode variants table from Koichi Yasuoka's UniVariants file.
 */

#include <stdio.h>
#include <stdlib.h>

#define ENTRIES  8176  /* number of lines in UniVariants file */
#define MAX_PER_ENTRY  10  /* max number of entries per line in file */

int main (int argc, char *argv[])
{
  int variants[MAX_PER_ENTRY*ENTRIES];
  int uni2index[0x10000];
  int index;

  if (argc != 1)
    exit(1);

  printf("\n");
  printf("/*\n");
  printf(" * CJK variants table\n");
  printf(" */\n");
  printf("\n");
  {
    int c;
    int j;
    for (j = 0; j < 0x10000; j++)
      uni2index[j] = -1;
    index = 0;
    for (;;) {
      c = getc(stdin);
      if (c == EOF)
        break;
      if (c == '#') {
        do { c = getc(stdin); } while (!(c == EOF || c == '\n'));
        continue;
      }
      ungetc(c,stdin);
      if (scanf("%x",&j) != 1)
        exit(1);
      c = getc(stdin);
      if (c != '\t')
        exit(1);
      uni2index[j] = index;
      for (;;) {
        int i;
        if (scanf("%x",&i) != 1)
          exit(1);
        if (!(i >= 0x3000 && i < 0x3000+0x8000))
          exit(1);
        variants[index++] = i-0x3000;
        c = getc(stdin);
        if (c != ' ')
          break;
      }
      variants[index-1] |= 0x8000; /* end of list marker */
      if (c != '\n')
        exit(1);
    }
  }
  printf("static const unsigned short cjk_variants[%d] = {",index);
  {
    int i;
    for (i = 0; i < index; i++) {
      if ((i % 8) == 0)
        printf("\n ");
      printf(" 0x%04x,",variants[i]);
    }
    printf("\n};\n");
  }
  printf("\n");
  printf("static const short cjk_variants_indx[0x5200] = {\n");
  {
    int j;
    for (j = 0x4e00; j < 0xa000; j++) {
      if ((j % 0x100) == 0)
        printf("  /* 0x%04x */\n", j);
      if ((j % 8) == 0)
        printf(" ");
      printf(" %5d,",uni2index[j]);
      if ((j % 8) == 7)
        printf("\n");
    }
    printf("};\n");
  }
  printf("\n");

  return 0;
}

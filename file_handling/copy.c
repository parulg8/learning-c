#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  FILE *fp1, *fp2;
  char c;
  fp1 = fopen(argv[1], "r");
  fp2 = fopen(argv[2], "w");
  while ((c = getc(fp1)) != EOF){
    putc(c, fp2);
  }
  printf("File copied successfully.\n");
  fclose(fp1);
  fclose(fp2);
  return 0;
}

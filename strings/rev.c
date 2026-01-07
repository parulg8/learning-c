#include <stdio.h>
#include <string.h>
int main()
{
  char str[100], rev[100];
  int len;
  printf("Enter elements: ");
  scanf("%s", str);
  len = strlen(str);
  
  int i, j;
  for (i=len-1, j=0; i>=0; i--, j++){
    rev[j]=str[i];
  }
  rev[j]='\0';
  printf("reverse is %s", rev);
  return 0;
}

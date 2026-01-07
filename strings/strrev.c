#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  printf("Enter string: ");
  scanf("%[^\n]", str);
  strrev(str);
  printf("Reversed string is %s", str);
  return 0;
}

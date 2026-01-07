#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  int length;
  printf("Enter elements: ");
  scanf("%s", str);
  length = strlen(str);
  printf("Length is %d", length);
}

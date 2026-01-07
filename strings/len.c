#include <stdio.h>
int main()
{
  char str[100];
  int i;
  printf("Enter the string: ");
  scanf("%s", str);
  while (str[i]!='\0'){
    i++;
  }
  printf("Length of string is %d", i);
}

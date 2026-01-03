#include <stdio.h>
int main()
{
  int a;
  printf("Enter the number to check divisibility of: ");
  scanf("%d", &a);
  if (a%6==0)
  {
    printf("Number is divisible by 6.");
  }
  else
  {
    printf("Number is not divisible by 6.");
  }
  return 0;
}

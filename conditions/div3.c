#include <stdio.h>
int main()
{
  int a;
  printf("Enter the number to check divisibility of: ");
  scanf("%d", &a);
  if ((a%6==0) && (a%4==0) && (a%2==0))
  {
    printf("Number is divisible by 6, 4 and 2.");
  }
  else
  {
    printf("Number is not divisible by 6, 4 and 2.");
  }
  return 0;
}

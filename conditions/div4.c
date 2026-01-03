#include <stdio.h>
int main()
{
  int a;
  printf("Enter the number to check divisibility of: ");
  scanf("%d", &a);
  if ((a%2==0) && (a%3==0) &&! (a%5==0))
  {
    printf("Number is divisible by 2 and 3 and not by 5.");
  }
  else
  {
    printf("Condition not satisfied.");
  }
  return 0;
}

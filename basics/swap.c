#include <stdio.h>
int main()
{
  int a, b, temp;
  printf("Enter the numbers to swap:");
  scanf("%d %d", &a, &b);
  temp=a;
  a=b;
  b=temp;
  printf("The numbers after swapping are: %d %d", a, b);
  return 0;
}

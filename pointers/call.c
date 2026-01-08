#include <stdio.h>
void callbyvalue(int a)
{
  a = a + 10;
  printf("Inside callbyvalue: a = %d\n", a);
}
void callbyreference(int *b)
{
  *b = *b + 10;
  printf("Inside callbyreference: b = %d\n", *b);
}
int main()
{
  int x=5, y=7;
  printf("Before callbyvalue: x = %d\n", x);
  callbyvalue(x);
  printf("After callbyvalue: x = %d\n", x);
  printf("Before callbyreference: y = %d\n", y);
  callbyreference(&y);
  printf("After callbyreference: y = %d\n", y);
  return 0;
}

#include <stdio.h>
int main()
{
  int a=10;
  int *p;
  p=&a;
  printf("value of a = %d\n", a);
  printf("address of a = %p\n", &a);
  printf("value of pointer p = %p\n", p);
  printf("address pointed by p = %d\n", *p);
  return 0;
}

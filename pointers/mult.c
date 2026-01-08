#include <stdio.h>
void calculate(int a, int b, int *sum, int *product)
{
  *sum = a + b;
  *product = a * b;
}
int main()
{
  int a=5, b=3, sum, product;
  calculate(a, b, &sum, &product);
  printf("Sum of %d and %d is: %d\n", a, b, sum);
  printf("Product of %d and %d is: %d", a, b, product);
  return 0;
}

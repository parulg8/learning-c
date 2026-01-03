#include <stdio.h>
int main()
{
  float c, f;
  printf("Enter the temp in celcius: ");
  scanf("%f", &c);
  f=(9*c/5)+32;
  printf("The temp in fahrenheit is: %f", f);
  return 0;
}

#include <stdio.h>
int main()
{
  float cm, feet, inch;
  printf("Enter the length in cm: ");
  scanf("%f", &cm);
  feet=cm/30.48;
  inch=cm/2.54;
  printf("The length in feet is: %f\nand in inch is: %f", feet, inch);
  return 0;
}

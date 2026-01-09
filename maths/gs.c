#include <stdio.h>
#include <math.h>
int main()
{
  int i, n;
  float a, r, term, sum=0;
  printf("Enter the first term (a): ");
  scanf("%d", &a);
  printf("Enter the common ratio (r): ");
  scanf("%d", &r);
  printf("Enter the number of terms (n): ");
  scanf("%d", &n);
  for (i=0; i<n; i++){
    term = a * pow(r, i);
    sum = sum + term;
  }
  printf("Sum of the Geometric Series = %.2f", sum);
  return 0;
}

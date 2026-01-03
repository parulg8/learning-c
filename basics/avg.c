#include <stdio.h>
#define N 10
int main()
{
  int count;
  float sum, avg, number;
  sum=0;
  count=0;
  while (count<N){
    printf("enter a number: ");
    scanf("%f", &number);
    sum=sum+number;
    count=count+1;
  }
  avg=sum/N;
  printf("The average is: %f", avg);
  return 0;
}

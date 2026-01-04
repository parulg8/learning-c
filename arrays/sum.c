#include <stdio.h>
int main()
{
  int arr[10], n, i, sum=0;
  printf("Enter no. of elements: ");
  scanf("%d", &n);
  printf("Enter %d elements: ", n);
  for (i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  for (i=0; i<n; i++){
    sum = sum + arr[i];
  }
  printf("sum of elements is: %d", sum);
  return 0;
}

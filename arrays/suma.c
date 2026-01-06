#include <stdio.h>
int main()
{
  int arr1[20], arr2[20], sum[20], n, i;
  printf("Enter no. of elements: ");
  scanf("%d", &n);
  printf("Enter %d elements for first array:\n", n);
  for (i=0; i<n; i++){
    scanf("%d", &arr1[i]);
  }
  printf("Enter %d elements for second array:\n", n);
 for (i=0; i<n; i++){
   scanf("%d", &arr2[i]);
 }
  for (i=0; i<n; i++){
    sum[i]=arr1[i]+arr2[i];
  }
  printf("Sum of two arrays is: ");
  for (i=0; i<n; i++){
    printf("%d ", sum[i]);
  }
  return 0;
}

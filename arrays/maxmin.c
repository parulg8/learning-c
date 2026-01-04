#include <stdio.h>
int main()
{
  int arr[10], n, i, max=0, min=1000;
  printf("Enter no. of elements: ");
  scanf("%d", &n);
  printf("Enter %d elements:\n", n);
  for (i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  for (i=0; i<n; i++){
    if (arr[i]>max){
      max = arr[i];
    }
  }
  for (i=0; i<n; i++){
    if (arr[i]<min){
      min = arr[i];
    }
  }
  printf("Max element: %d\n", max);
  printf("Min element: %d", min);
  return 0;
}

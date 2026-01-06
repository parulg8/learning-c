#include <stdio.h>
int main()
{
  int arr[20], arr1[20], n, i;
  printf("Enter no. of elements: ");
  scanf("%d", &n);
  printf("Enter %d elements:\n", n);
  for (i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  for (i=0; i<n; i++){
    arr1[i]=arr[i];
  }
  printf("Elements of new array are:\n");
  for (i=0; i<n; i++){
    printf("%d ", arr1[i]);
  }
  return 0;
}

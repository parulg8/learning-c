#include <stdio.h>
int main()
{
  int arr[20], n, i;
  printf("Enter no. of elements: ");
  scanf("%d", &n);
  printf("Enter %d elements:\n", n);
  for (i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  printf("Reverse of array is:\n");
  for (i=n-1; i>=0; i--){
    printf("%d ", arr[i]);
  }
  return 0;
}

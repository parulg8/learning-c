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
  printf("Negative elements are: ");
  for (i=0; i<n; i++){
    if (arr[i]<0)
    {
      printf("%d ", arr[i]);
    }
  }
  return 0;
}

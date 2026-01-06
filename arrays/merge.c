#include <stdio.h>
int main()
{
  int arr1[20], arr2[20], merged[40], n1, n2, i, k=0;
  printf("Enter no. of elements in first array: ");
  scanf("%d", &n1);
  printf("Enter %d elements for first array:\n", n1);
  for (i=0; i<n1; i++){
    scanf("%d", &arr1[i]);
  }
  printf("Enter no. of elements in second array: ");
  scanf("%d", &n2);
  printf("Enter %d elements for second array:\n", n2);
  for (i=0; i<n2; i++){
    scanf("%d", &arr2[i]);
  }
  for (i=0; i<n1; i++){
    merged[k]=arr1[i];
    k++;
  }
  for (i=0; i<n2; i++){
    merged[k]=arr2[i];
    k++;
  }
  printf("Merged array is: ");
  for (i=0; i<(n1+n2); i++){
    printf("%d ", merged[i]);
  }
  return 0;
}

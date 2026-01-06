#include <stdio.h>
int main()
{
  int arr[20], n, i, j, temp;
  printf("Enter no. of elements: ");
  scanf("%d", &n);
  printf("Enter %d elements:\n", n);
  for (i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  for (i=0; i<n; i++){
    for (j=i+1; j<n; j++){
      if (arr[i]>arr[j])
      {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  printf("\nArray in ascending order: ");
  for (i=0; i<n; i++){
    printf("%d ", arr[i]);
  }
  for (i=0; i<n; i++){
    for (j=i+1; j<n; j++){
      if (arr[i]<arr[j])
      {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  printf("\nArray in descending order: ");
  for (i=0; i<n; i++){
    printf("%d ", arr[i]);
  }
  return 0;
}

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
      if (arr[i]<arr[j])
      {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  printf("First largest no. is: %d\n", arr[0]);
  printf("Second largest no. is: %d\n", arr[1]);
  printf("Fifth largest no. is: %d", arr[4]);
  return 0;
}

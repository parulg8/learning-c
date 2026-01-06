#include <stdio.h>
int main()
{
  int arr[20], n, i, sum=0;
  printf("Enter no. of elements: ");
  scanf("%d", &n);
  printf("Enter %d elements:\n", n);
  for (i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  for (i=0; i<n; i++){
    if (arr[i]>0)
    {
      sum=sum+arr[i]);
    }
    else
    {
      break;
    }
  }
  printf("sum is: %d", sum);
  return 0;
}

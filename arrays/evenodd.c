#include <stdio.h>
int main()
{
  int arr[20], n, i, e=0, o=0;
  printf("Enter no. of elements: ");
  scanf("%d", &n);
  printf("Enter %d elements:\n", n);
  for (i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  for (i=0; i<n; i++){
    if (arr[i]%2==0)
    {
      e=e+1;
    }
    else
    {
      o=o+1;
    }
  }
  printf("No. of even elements is: %d\n", e);
  printf("No. of odd elements is: %d", o);
  return 0;
}

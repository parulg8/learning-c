#include <stdio.h>
int main()
{
  int arr[20], n, i, c, flag=0;
  printf("Enter no. of elements: ");
  scanf("%d", &n);
  printf("Enter %d elements:\n", n);
  for (i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  printf("Enter number to search: ");
  scanf("%d", &c);
  for (i=0; i<n; i++){
    if (arr[i]==c)
    {
      flag=1;
    }
  }
  if (flag==1)
  {
    printf("Element found.");
  }
  else
  {
    printf("Element not found.");
  }
  return 0;
}

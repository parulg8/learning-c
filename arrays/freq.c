#include <stdio.h>
int main()
{
  int arr[20], n, i, m, c=0;
  printf("Enter no. of elements: ");
  scanf("%d", &n);
  printf("Enter %d elements:\n", n);
  for (i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  printf("Enter no. to search: ");
  scanf("%d", &m);
  for (i=0; i<n; i++){
    if (arr[i]==m)
    {
      c=c+1;
    }
  }
  printf("Frequency of %d is: %d", m, c);
  return 0;
}

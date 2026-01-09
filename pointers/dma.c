#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n, i, *p;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  p = (int *)malloc(n * sizeof(int));
  if (p == NULL)
  {
    printf("Memory not allocated!\n");
    return 0;
  }
  printf("Enter %d elements:\n", n);
  for (i=0; i<n; i++){
    scanf("%d", &p[i]);
  }
  printf("Elements are:\n");
  for (i=0; i<n; i++){
    printf("%d ", p]i]);
  }
  free(p);
  return 0;
}

#include <stdio.h>
int main()
{
  int i, j;
  for (j=1; j<=5; j++){
    printf("Table of %d is:\n", j);
    for (i=1; i<=10; i++){
      printf("%d x %d = %d\n", j, i, j*i);
    }
  }
  return 0;
}

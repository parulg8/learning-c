#include <stdio.h>
int main()
{
  int a[10][10], b[10][10], result[10][10];
  int i, j, k, r1, r2, c1, c2, choice;
  do
  {
    printf("Choose from the following:\n");
    printf("1. Addition of two matrices.\n");
    printf("2. Subtraction of two matrices.\n");
    printf("3. Finding upper and lower triangular matrices.\n");
    printf("4. Transpose of matrix.\n");
    printf("5. Product of two matrices.\n");
    printf("6. Exit.\n");
    printf("Enter your choice(1-6): ");
    scanf("%d", &choice);
    
    if (choice==1)
    {
      printf("Enter order of matrices: ");
      scanf("%d%d", &r1, &c1);
      printf("Enter elements of first matrix:\n");
      for (i=0; i<r1; i++)
      {
        for (j=0; j<c1; j++)
        {
          scanf("%d", &a[i][j]);
        }
      }
      printf("Enter elements of second matrix:\n");
      for (i=0; i<r1; i++)
      {
        for (j=0; j<c1; j++)
        {
          scanf("%d", &b[i][j]);
        }
      }
      for (i=0; i<r1; i++)
      {
        for (j=0; j<c1; j++)
        {
          result[i][j] = a[i][j] + b[i][j];
        }
      }
      printf("Sum of matrices:\n");
      for (i=0; i<r1; i++)
      {
        for (j=0; j<c1; j++)
        {
          printf("%d ", result[i][j]);
        }
        printf("\n");
      }
    }
    
    else if (choice==2)
    {
      printf("Enter order of matrices: ");
      scanf("%d%d", &r1, &c1);
      printf("Enter elements of first matrix:\n");
      for (i=0; i<r1; i++)
      {
        for (j=0; j<c1; j++)
        {
          scanf("%d", &a[i][j]);
        }
      }
      printf("Enter elements of second matrix:\n");
      for (i=0; i<r1; i++)
      {
        for (j=0; j<c1; j++)
        {
          scanf("%d", &b[i][j]);
        }
      }
      for (i=0; i<r1; i++)
      {
        for (j=0; j<c1; j++)
        {
          result[i][j] = a[i][j] - b[i][j];
        }
      }
      printf("Difference of matrices:\n");
      for (i=0; i<r1; i++)
      {
        for (j=0; j<c1; j++)
        {
          printf("%d ", result[i][j]);
        }
        printf("\n");
      }
    }
    
    else if (choice==3)
    {
      printf("Enter order of square matrix: ");
      scanf("%d", &r1);
      printf("Enter elements of matrix:\n");
      for (i=0; i<r1; i++)
        {
          for (j=0; j<r1; j++)
            {
              scanf("%d", &a[i][j]);
            }
        }
      printf("Upper triangular matrix:\n");
      for (i=0; i<r1; i++)
      {
        for (j=0; j<r1; j++)
        {
          if (i<=j)
          {
            printf("%d ", a[i][j]);
          }
          else
          {
            printf("0 ");
          }
        }
        printf("\n");
      }
      printf("Lower traingular matrix:\n");
      for (i=0; i<r1; i++)
      {
        for (j=0; j<r1; j++)
        {
          if (i>=j)
          {
            printf("%d ", a[i][j]);
          }
          else
          {
            printf("0 ");
          }
        }
        printf("\n");
      }
    }
    
    else if (choice==4)
    {
      printf("Enter order of matrix: ");
      scanf("%d%d", &r1, &c1);
      printf("Enter elements of matrix:\n");
      for (i=0; i<r1; i++)
      {
        for (j=0; j<c1; j++)
        {
          scanf("%d", &a[i][j]);
        }
      }
      printf("Transpose of matrix:\n");
      for (i=0; i<c1; i++)
      {
        for (j=0; j<r1; j++)
        {
          printf("%d ", a[j][i]);
        }
        printf("\n");
      }
    }
    
    else if (choice==5)
    {
      printf("Enter order of first matrix: ");
      scanf("%d%d", &r1, &c1);
      printf("Enter order of second matrix: ");
      scanf("%d%d", &r2, &c2);
      if (c1!=r2)
      {
        printf("Matrix multiplication not possible.\n");
        break;
      }
      printf("Enter elements of first matrix:\n");
      for (i=0; i<r1; i++)
      {
        for (j=0; j<c1; j++)
        {
          scanf("%d", &a[i][j]);
        }
      }
      printf("Enter elements of second matrix:\n");
      for (i=0; i<r2; i++)
      {
        for (j=0; j<c2; j++)
        {
          scanf("%d", &b[i][j]);
        }
      }
      for (i=0; i<r1; i++)
      {
        for (j=0; j<c2; j++)
        {
          result[i][j]=0;
          for (k=0; k<c1; k++)
          {
            result[i][j] += a[i][k] * b [k][j];
          }
        }
      }
      printf("Product of matrices:\n");
      for (i=0; i<r1; i++)
      {
        for (j=0; j<c2; j++)
        {
          printf("%d ", result[i][j]);
        }
        printf("\n");
      }
    }
    
    else if(choice==6)
    {
      printf("Exiting program...\n");
      break;
    }
    
    else
    {
      printf("Invalid choice. Please enter a no. from (1-6).\n");
    }
  }while (choice!=6);
  return 0;
}

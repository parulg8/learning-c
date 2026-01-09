#include <stdio.h>
#include <string.h>
struct employee
{
  char name[50];
  int id;
  float salary;
  char designation[20];
};
int main()
{
  struct employee e[20];
  int n, i;
  FILE *fman, *fwork;
  printf("Enter number of employees: ");
  scanf("%d", &n);
  for (i=0; i<n; i++){
    printf("Enter name: ");
    scanf("%s", e[i].name);
    printf("Enter ID: ");
    scanf("%d", &e[i].id);
    printf("Enter salary: ");
    scanf("%f", &e[i].salary);
    printf("Enter designation: ");
    scanf("%s", e[i].designation);
  }
  fman = fopen("manager.txt", "w");
  fwork = fopen("worker.txt", "w");
  for (i=0; i<n; i++){
    if (strcmp(e[i].designation, "Manager") == 0)
    {
      fprintf(fman, "Name: %s\nID: %d\nSalary: %.2f\nDesignation: %s\n\n"), e[i].name, e[i].id, e[i].salary, e[i].designation);
    }
  }
  fclose(fman);
  fclose(fwork);
  printf("\nData stored successfully.\n");
  return 0;
}

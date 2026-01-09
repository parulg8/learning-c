#include <stdio.h>
struct student
{
  int roll;
  char name[50];
  float marks;
};
int main()
{
  struct student s[3];
  int i;
  for (i=0; i<3; i++){
    printf("---Enter details---\n");
    printf("Roll no.: ");
    scanf("%d", &s[i].roll);
    printf("Name: ");
    scanf("%s", s[i].name);
    printf("Marks: ");
    scanf("%f", &s[i].marks);
  }
  printf("\n---Student details---\n");
  for (i=0; i<3; i++){
    printf("Roll no.: %d\t Name: %s\t Marks: $.2f\n", s[i].roll, s[i].name, s[i].marks);
  }
  return 0;
}

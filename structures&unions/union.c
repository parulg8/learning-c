#include <stdio.h>
union student
{
  int roll;
  char name[50];
  float marks;
};
int main()
{
  union student s[3];
  int i;
  for (i=0; i<3; i++){
    printf("Enter Roll no.: ");
    scanf("%d", &s[i].roll);
    printf("Stored roll no.: %d\n", s[i].roll);
    printf("Enter Name: ");
    scanf("%s", s[i].name);
    printf("Stored name: %s\n", s[i].name);
    printf("Enter Marks: ");
    scanf("%f", &s[i].marks);
    printf("Stored marks: %.2f\n", s[i].marks);
  }
  return 0;
}

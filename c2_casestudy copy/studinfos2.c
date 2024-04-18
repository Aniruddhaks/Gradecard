#include <stdio.h>
#include <string.h>
#include "studinfos2.h"
void studinfo()
{
  printf("Enter no of students");
  scanf("%d",&no);
  for (int i = 0; i <no; i++)
  {
    printf("Enter Roll.no: ");
    scanf("%d", &students[i].roll_no);
    printf("Enter name: ");
    scanf("%s", students[i].name);
    printf("Enter section: ");
    scanf("%s", students[i].section);
    printf("\n");
  }
  for (int i = 0; i < no; i++)
  {
    printf("Roll.no: %d\n", students[i].roll_no);
    printf("Name: %s\n", students[i].name);
    printf("section: %s\n", students[i].section);
    printf("\n");
  }
}


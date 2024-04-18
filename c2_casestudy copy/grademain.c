#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "studinfos2.h"
char subject[3][15] = {"c", "Mathematics", "Physics"};
char test[3][10] = {"ISA1", "ISA2", "ESA"};
struct student students[100];
int no;
int main()
{
  int option;

  while (1)
  {
    printf("Select an option\n");
    printf("MENU\n1.ENTER STUDENT INFO\n2.ENTER MARKS\n3.DISPLAY TOTAL MARKS\n4.DISPLAY RESULT FOR PARTICULAR STUDENT\n5.EXIT\n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
      studinfo();
      break;
    case 2:
      studmarks();
      break;
    case 3:
      calculate();
      break;
    case 4:
      search();
      break;
    case 5:
      exit(1);
    }
  }
}
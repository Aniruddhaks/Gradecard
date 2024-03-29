#include <stdio.h>
#include <stdlib.h>
#include "studinfos.h"
#include "studmarkss1.h"
#include "calculatee.h"

int main()
{
  int num_entries;
  printf("Enter no of students: ");
  scanf("%d", &num_entries);
  char names[num_entries][50];
  char sections[num_entries][5];
  int roll_numbers[num_entries];
  int marks[100][100][100];
  char subject[3][15] = {"c", "Mathematics", "Physics"};
  char test[3][10] = {"ISA1", "ISA2", "ESA"};
  int total[100];
  int option;
  int m;
  int sum = 0;
  while (1)
  {
    printf("Select an option\n");
    printf("MENU\n1.ENTER STUDENT INFO\n2.ENTER MARKS\n3.DISPLAY TOTAL MARKS\n4.EXIT\n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
      studinfo(num_entries, names, sections, roll_numbers);
      break;
    case 2:
      studmarks(num_entries, roll_numbers, subject, test, marks, m, names, sections);
      break;
    case 3:
      calculate(num_entries, roll_numbers, subject, test, marks, m, names, sections);
      break;
    case 4:
      exit(1);
    }
  }
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "studinfoss3.h"
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
        printf("MENU\n1.ENTER STUDENT INFO AND MARKS\n2.DISPLAY TOTAL PERCENTAGE\n3.DISPLAY RESULT FOR PARTICULAR STUDENT\n4.EXIT\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            studinfo();
            break;
        case 2:
            calculate();
            break;
        case 3:
            search();
            break;
        case 4:
            exit(1);
        }
    }
}
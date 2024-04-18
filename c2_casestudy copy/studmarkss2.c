#include <stdio.h>
#include "studinfos2.h"
void studmarks()
{
    char subject[3][15] = {"c", "Mathematics", "Physics"};
    char test[3][10] = {"ISA1", "ISA2", "ESA"};
    printf("Enter marks for students:(ISA1=marks/50,ISA2=marks/50,ISA3=marks/100)\n");
    for (int i = 0; i < no; i++)
    {
        printf("student name:%s\n", students[i].name);
        for (int j = 0; j < 3; j++)
        {
            printf("%s:\n", subject[j]);
            for (int k = 0; k < 3; k++)
            {
                printf("\t%s:\t\t\n", test[k]);
                scanf("%d", &students[i].marks[j][k]);
            }
        }
        for (int i = 0; i <no; i++)
        {
            printf("student name:%s", students[i].name);
            for (int j = 0; j < 3; j++)
            {
                printf("Subject:%s\n", subject[j]);
                printf("\n");
                for (int k = 0; k < 3; k++)
                {
                    printf("Test name %s:%d\n", test[k], students[i].marks[j][k]);
                    printf("\n");
                }
            }
        }
    }
}

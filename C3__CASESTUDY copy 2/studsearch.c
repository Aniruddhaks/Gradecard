#include <stdio.h>
#include "studinfoss3.h"
#include <string.h>
void search()
{
    char subject[3][15] = {"c", "Mathematics", "Physics"};
    char test[3][10] = {"ISA1", "ISA2", "ESA"};
    char *ptr_names[100];
    char input[10];
    FILE *fp;
    fp = fopen("tests.csv", "r");

    for (int i = 0; i < no; i++)
    {
        struct student std;
        if (fscanf(fp, "%d,%49[^,],%2[^,],%d,", &std.roll_no, std.name, std.section, &std.final_score) < 4)
        {
            no = i;
            break;
        }
        for (int j = 0; j < 3; j++)
        {
            struct marks mks;
            fscanf(fp, "%d,%d,%d,", &mks.ISA1, &mks.ISA2, &mks.ESA);
            std.markss[j] = mks;
        }
        students[i] = std;
    }
    fclose(fp);
    for (int i = 0; i < no; i++)
    {
        ptr_names[i] = students[i].name;
    }
    printf("Enter name : ");
    printf("\n");
    scanf("%s", input);

    for (int i = 0; i < no; i++)
    {
        if (strcmp(ptr_names[i], input) == 0)
        {
            printf("Roll No: %d  Name: %s  Section: %s\n", students[i].roll_no, students[i].name, students[i].section);
            printf("Total Percentage:%.2d%%\n", students[i].final_score);
            for (int j = 0; j < 3; j++)
            {
                printf("%s:\n ISA1=%d, ISA2=%d, ESA=%d\n", subject[j], students[i].markss[j].ISA1, students[i].markss[j].ISA2, students[i].markss[j].ESA);
            }
            printf("\n");
        }
    }
}

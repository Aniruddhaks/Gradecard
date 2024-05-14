#include <stdio.h>
#include "studinfoss3.h"
void calculate()
{
    char subject[3][15] = {"C", "Mathematics", "Physics"};
    char test[3][10] = {"ISA1", "ISA2", "ESA"};
    FILE *fp;
    fp = fopen("tests.csv", "r");

    for (int i = 0; i < 100; i++)
    {
        struct student std;
        if (fscanf(fp, "%d,%49[^,],%2[^,],%d,", &std.roll_no, std.name, std.section,&std.final_score)<4)
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

    printf("\nName\tRoll.no\tSection\tTotal Percentage\n");

    for (int i = 0; i < no; i++)
    {
        printf("%s\t%d\t%s\t%.2d%%\n", students[i].name, students[i].roll_no, students[i].section, students[i].final_score);
        printf("\n");
    }
    
}

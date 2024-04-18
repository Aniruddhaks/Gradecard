#include <stdio.h>
#include"studinfos2.h"
void calculate()
{
    char subject[3][15] = {"c", "Mathematics", "Physics"};
    char test[3][10] = {"ISA1", "ISA2", "ESA"};
    printf("\nName\tRoll.no\tSection\tTotal Percentage\n");

    for (int i = 0; i < no; i++)
    {
        float student_score = 0;
        for (int j = 0; j < 3; j++)
        {
            int subject_marks = 0;
            for (int k = 0; k < 3; k++)
            {

                subject_marks += students[i].marks[j][k];
            }
            float subject_score = subject_marks / 2;
            student_score += subject_score;
        }
        student_score /= 3;
        students[i].final_score = student_score;
        printf("%s\t%d\t%s\t%.2d%%\n", students[i].name, students[i].roll_no, students[i].section,students[i].final_score);
        printf("\n");
    }
}
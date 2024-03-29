#include <stdio.h>
#include "calculatee.h"
void calculate(int num_entries, int roll_numbers[], char subject[][15], char test[][10], int marks[100][100][100], int m, char names[][50], char sections[][5])
{
    printf("\nName\tRoll.no\tSection\tTotal Percentage\n");

    for (int i = 0; i < num_entries; i++)
    {
        float student_score = 0;
        for (int j = 0; j < 3; j++)
        {
            int subject_marks = 0;
            // printf("subject:%s  ",subject[j]);
            for (int k = 0; k < 3; k++)
            {

                subject_marks += marks[i][j][k];
            }
            float subject_score = subject_marks / 2;
            // printf("subject score=%.2f\n",subject_score);
            student_score += subject_score;
        }
        student_score /= 3;
        printf("%s\t%d\t%s\t%.2f\n", names[i], roll_numbers[i], sections[i], student_score);
        printf("\n");
        // printf("Total score is:%.2f\n\n",student_score);
    }
}

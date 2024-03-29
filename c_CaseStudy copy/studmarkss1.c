#include <stdio.h>
#include "studmarkss1.h"
void studmarks(int num_entries, int roll_numbers[], char subject[][15], char test[][10], int marks[100][100][100], int m, char names[][50], char sections[][5])

{
    printf("Enter marks for students:(ISA1=marks/50,ISA2=marks/50,ISA3=marks/100)\n");
    for (int i = 0; i < num_entries; i++)
    {
        printf("Name:%s Roll.no: %d Section:%s\n", names[i], roll_numbers[i], sections[i]);

        for (int j = 0; j < 3; j++)
        {
            printf("%s:\n", subject[j]);
            for (int k = 0; k < 3; k++)
            {
                printf("\t%s:\t\t\n", test[k]);
                scanf("%d", &m);
                marks[i][j][k] = m;
            }
        }
    }
    // printf("\nRoll.no,subject,score\n");
    for (int i = 0; i < num_entries; i++)
    {
        printf("Name:%s Roll.Ns: %d: Section:%s\n", names[i], roll_numbers[i], sections[i]);
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf("Subject:%s\n", subject[j]);
            printf("\n");
            for (int k = 0; k < 3; k++)
            {
                printf("Test name %s:%d\n", test[k], marks[i][j][k]);
                printf("\n");
            }
        }
    }
}
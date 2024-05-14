#include <stdio.h>
#include "studinfoss3.h"
void studinfo()
{
    int no;
    printf("Enter no of students:\n");
    scanf(" %d", &no);
    printf("\n");
    char subject[3][15] = {"C", "Mathematics", "Physics"};
    FILE *fp;
    fp = fopen("tests.csv", "w");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
    }
    for (int i = 0; i < no; i++)
    {   float student_score = 0;
        printf("Enter Roll.no:\n");
        scanf("%d", &students[i].roll_no);
        printf("Enter Name:\n");
        scanf("%s", students[i].name);
        printf("Enter section:\n");
        scanf("%s", students[i].section);
        printf("Enter marks separated by space:\n");
        for (int j = 0; j < 3; j++)
        {   
            printf("Enter %s marks for students:(ISA1=marks/50,ISA2=marks/50,ISA3=marks/100)\n",subject[j]);
            scanf("%d %d %d", &students[i].markss[j].ISA1, &students[i].markss[j].ISA2, &students[i].markss[j].ESA);
            int subject_marks = 0;

            subject_marks = (students[i].markss[j].ISA1 + students[i].markss[j].ISA2 + students[i].markss[j].ESA);

            float subject_score = subject_marks / 2;
            student_score += subject_score;
        }
        student_score /= 3;
        students[i].final_score = student_score;
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < no; i++)
    {
        fprintf(fp, "%d,%s,%s,%.2d,", students[i].roll_no, students[i].name, students[i].section,students[i].final_score);
        for (int j = 0; j < 3; j++)
        {
            fprintf(fp, "%d,%d,%d,", students[i].markss[j].ISA1, students[i].markss[j].ISA2, students[i].markss[j].ESA);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
    fp = fopen("tests.csv", "r");
    for (int i = 0; i < no; i++)
    { struct student std;
        fscanf(fp, "%d,%49[^,],%2[^,],%d,", &std.roll_no, std.name, std.section,&std.final_score);
        for (int j = 0; j < 3; j++)
        {struct marks mks;
            fscanf(fp, "%d,%d,%d,", &mks.ISA1, &mks.ISA2, &mks.ESA);
            std.markss[j]=mks;
        }
        students[i]=std;

    }
    fclose(fp);

 
    for (int i = 0; i < no; i++)
    {
        printf("Roll No: %d Name: %s Section: %s\n", students[i].roll_no, students[i].name, students[i].section);
        for (int j = 0; j < 3; j++)
        {
            printf("%s: ISA1=%d, ISA2=%d, ESA=%d\n", subject[j], students[i].markss[j].ISA1, students[i].markss[j].ISA2, students[i].markss[j].ESA);
        }
        printf("\n");
    }
}
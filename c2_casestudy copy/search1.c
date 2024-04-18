#include<stdio.h>
#include"studinfos2.h"
#include<string.h>
void search()
{   
    char subject[3][15] = {"c", "Mathematics", "Physics"};
    char test[3][10] = {"ISA1", "ISA2", "ESA"};
    char* ptr_names[100];
    char input[10];
    //int found=0;
    for(int i=0;i<no;i++)
    {
        ptr_names[i]=students[i].name;
    }
    printf("Enter name : ");
    printf("\n");
    scanf("%s",input);
    for(int i=0;i<no;i++)
    {
        if(strcmp(ptr_names[i],input)==0)
        {
            //found=1;
            
            printf("Student Name:%s\n", students[i].name);
            printf("Roll.no:%d\n",students[i].roll_no);
            printf("Section:%s\n",students[i].section);
            printf("Total percentage: %d%%\n",students[i].final_score);
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
            
    
    
    
}}
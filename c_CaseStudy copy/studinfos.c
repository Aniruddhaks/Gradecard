#include <stdio.h>
#include "studinfos.h"

void studinfo(int num_entries, char names[][50], char sections[][5], int roll_numbers[])
{

    printf("Enter Names,Sections and Roll.nos:\n");
    for (int i = 0; i < num_entries; i++)
    {
        printf("No%d:\n", i + 1);
        printf("Name: ");
        scanf("%s", names[i]);
        printf("Section: ");
        scanf("%s", sections[i]);
        printf("Roll Number: ");
        scanf("%d", &roll_numbers[i]);
    }

    printf("\nS.No\tName\tSection\tRoll.no:\n");
    for (int i = 0; i < num_entries; i++)
    {
        printf("%d\t %s\t  %s\t %d", i + 1, names[i], sections[i], roll_numbers[i]);
        printf("\n");
    }
}

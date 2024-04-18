struct student
{
    int roll_no;
    char name[50];
    char section[3];
    int marks[10][10];
    int final_score;
};
extern struct student students[100];
extern int no;
void studinfo();
void studmarks();
void calculate();
void search();
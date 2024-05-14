struct marks
{
    int ISA1;
    int ISA2;
    int ESA;
};
struct student
{
    int roll_no;
    char name[50];
    char section[3];
    int final_score;
    struct marks markss[3];
};
extern struct student students[100];
extern int no;
void studinfo();
void calculate();
void search();
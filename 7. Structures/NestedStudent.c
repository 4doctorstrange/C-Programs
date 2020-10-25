#include<stdio.h>
int main()
{
    typedef struct name
    {
        char fname[20];
        char mname[20];
        char lname[20];
    }NAME;
    struct Student
    {
        int roll_no;
        NAME n;
        float gpa;
    };
    struct Student stud;
    printf("***********ENTER THE DETAILS***********");
    printf("\nRoll Number: ");
    scanf("%d",&stud.roll_no);
    fflush(stdin);
    printf("First name: ");
    scanf("%s" ,stud.n.fname);
    printf("Middle name: ");
    scanf("%s" ,stud.n.mname);
    printf("Last name: ");
    scanf("%s" ,stud.n.lname);
    printf("GPA: ");
    scanf("%f",&stud.gpa);
    printf("****************************************\n");
    printf("***********STUDENT DETAILS**************\n");
    printf("|%-20s||%10s|\n","First name: ",stud.n.fname);
    printf("|%-20s||%10s|\n","Middle name: ",stud.n.mname);
    printf("|%-20s||%10s|\n","Last name: ",stud.n.lname);
    printf("|%-20s||%10d|\n","Roll Number: ",stud.roll_no);
    printf("|%-20s||%10.2f|\n","GPA: ",stud.gpa);
    return 0;
}
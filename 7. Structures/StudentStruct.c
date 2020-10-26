#include<stdio.h>
int main()
{
    struct Student
    {
        int roll_no;
        char name[50];
        float gpa;
    };
    struct Student stud;
    printf("***********ENTER THE DETAILS***********");
    printf("\nRoll Number: ");
    scanf("%d",&stud.roll_no);
    fflush(stdin);
    printf("Name: ");
    gets(stud.name);
    printf("GPA: ");
    scanf("%f",&stud.gpa);
    printf("****************************************\n");
    printf("***********STUDENT DETAILS**************\n");
    printf("|%-20s||%10s|\n","NAME: ",stud.name);
    printf("|%-20s||%10d|\n","Roll Number: ",stud.roll_no);
    printf("|%-20s||%10.2f|\n","GPA: ",stud.gpa);
    return 0;
}
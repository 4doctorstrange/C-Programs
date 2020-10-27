#include<stdio.h>
struct Student
{
    int roll_no;
    char name[50];
    float gpa;
};
void display(struct Student *);
int main()
{
    struct Student stud,*ptr=&stud;
    printf("***********ENTER THE DETAILS***********");
    printf("\nRoll Number: ");
    scanf("%d",&ptr->roll_no);
    fflush(stdin);
    printf("Name: ");
    gets(ptr->name);
    printf("GPA: ");
    scanf("%f",&ptr->gpa);
    display(ptr);
    return 0;
}
void display(struct Student *ptr)
{
    printf("\n****************************************\n");
    printf("***********STUDENT DETAILS**************\n");
    printf("|%-20s||%10s|\n","NAME: ",ptr->name);
    printf("|%-20s||%10d|\n","Roll Number: ",ptr->roll_no);
    printf("|%-20s||%10.2f|\n","GPA: ",ptr->gpa);
}
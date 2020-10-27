#include<stdio.h>
typedef struct
{
    int roll_no;
    char name[50];
    float gpa;
}STUDENT;
int main()
{
    STUDENT *ptr,stud;
    ptr = &stud;
    printf("Enter the details of student\n");
    printf("Roll Number: ");
    scanf("%d",&ptr->roll_no);
    fflush(stdin);
    printf("Name: ");
    gets(ptr->name);
    fflush(stdin);
    printf("GPA: ");
    scanf("%f",&ptr->gpa);
    fflush(stdin);
    printf("\n\nDetails of student\n");
    printf("Name: %s",ptr->name);
    printf("\nRoll Number: %d",ptr->roll_no);
    printf("\nGPA: %f",ptr->gpa);
    return 0;
}  
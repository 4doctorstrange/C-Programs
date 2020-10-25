#include<stdio.h>
#include<stdlib.h>
#define hr for(int i=0;i<72;i++) printf("-");
int main()
{
    typedef struct
    {
        int roll_number;
        char name[50];
        char dob[50];
    }STUDENT;
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    STUDENT *s = (STUDENT*)malloc(n*sizeof(STUDENT));
    printf("*******************************************************************************************");
    printf("\nENTER THE DETAILS OF STUDENTS\n");
    for(int i=0;i<n;i++)
    {
        printf("STUDENT %d\n",i+1);
        printf("Roll Number: ");
        scanf("%d",&s[i].roll_number);
        fflush(stdin);
        printf("Name: ");
        gets(s[i].name);
        fflush(stdin);
        printf("Date of Birth (dd/mm/yy): ");
        gets(s[i].dob);
        fflush(stdin);
    }
    printf("*******************************************************************************************");
    printf("\n*********************************DETAILS OF STUDENTS***************************************\n");
    printf("| %-20s |","Roll Number");
    printf("| %-20s |","Name");
    printf("| %-20s |","Date of Birth");
    printf("\n");
    hr;
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("| %-20d |",s[i].roll_number);
        printf("| %-20s |",s[i].name);
        printf("| %-20s |",s[i].dob);
        printf("\n");
        hr;
        printf("\n");
    }
    return 0;
}
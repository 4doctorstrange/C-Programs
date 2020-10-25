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
    char choice;
    fflush(stdin);
    printf("\nDo you want to edit details? (Y/n): ");
    scanf("%c",&choice);
    while(choice=='Y'||choice=='y')
    {
        int r;
        printf("Enter the roll number of student to edit his/her details: ");
        scanf("%d",&r);
        int index=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i].roll_number==r)
            {
                index = i;
                break;
            }
        }
        if(index!=-1)
        {
            printf("Enter the new details of student\n");
            printf("Roll Number: ");
            scanf("%d",&s[index].roll_number);
            fflush(stdin);
            printf("Name: ");
            gets(s[index].name);
            fflush(stdin);
            printf("Date of Birth (dd/mm/yy): ");
            gets(s[index].dob);
            fflush(stdin);
        }
        else
        {
            printf("Student not found!");
        }
        printf("\nDo you want to edit details? (Y/n): ");
        scanf("%c",&choice);        
    }
    printf("*******************************************************************************************");
    printf("\n*********************************DETAILS OF STUDENTS***************************************\n");
    printf("\n");
    hr;
    printf("\n");
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
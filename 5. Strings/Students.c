#include<stdio.h>
int main()
{
    char str[5][30];
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    fflush(stdin);
    printf("Enter the names of students:\n");
    for(i=0;i<n;i++)
    {
        printf("Student %d: ",i+1);
        gets(str[i]);
    }
    printf("Names of students are:\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",str[i]);
    }
    return 0;
}
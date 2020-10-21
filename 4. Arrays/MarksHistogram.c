#include<stdio.h>
int main()
{
    int marks[10],groups[10]={0},i,j;
    printf("Enter the marks of students\n");
    for(i=0;i<10;i++)
    {
        printf("Student %d: ",i+1);
        scanf("%d",&marks[i]);
        groups[(int)marks[i]/10]++;
    }
    printf("Marks Histogram:\n");
    for(i=0;i<10;i++)
    {
        printf("Group %d | ",i);
        for(j=1;j<=groups[i];j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
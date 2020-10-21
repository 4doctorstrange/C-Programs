#include<stdio.h>
int main()
{
    int sales[5][3],i,j,total;
    printf("Enter data\n");
    printf("*******************************");
    for(i=0;i<5;i++)
    {
        printf("\nEnter the sales of three items by salesman %d: ",i+1);
        for(j=0;j<3;j++)
            scanf("%d",&sales[i][j]);
    }
    printf("Giving Total Sales:\n");
    for(i=0;i<5;i++)
    {
        total = 0;
        for(j=0;j<3;j++)
            total+=sales[i][j];
        printf("\nTotal sales of salesmaan %d = %d",i+1,total);
    }
    printf("\nGiving sales of items:\n");
    for(j=0;j<3;j++)
    {
        total = 0;
        for(i=0;i<5;i++)
            total += sales[i][j];
        printf("Total sales of item %d = %d\n",i=j+1,total);
    }
    return 0;
}
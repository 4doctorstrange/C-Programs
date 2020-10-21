#include<stdio.h>
int main()
{
    int array[20][20],row,col,i,j;
    printf("Enter the number of rows in the array: ");
    scanf("%d",&row);
    printf("Enter the number of columns in the array: ");
    scanf("%d",&col);
    printf("Enter the elements of matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",&array[i][j]);
    }
    printf("Matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            printf("%d ",array[i][j]);
        printf("\n");
    }
    return 0;
}
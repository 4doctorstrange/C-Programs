#include<stdio.h>
int main()
{
    int array[20][20],transpose[20][20],row,col,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d",&col);
    printf("Enter the matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",&array[i][j]);
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            transpose[j][i] = array[i][j];
    }
    printf("Your matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            printf("%d ",array[i][j]);
        printf("\n");
    }
    printf("Transpose:\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
            printf("%d ",transpose[i][j]);
        printf("\n");
    }
    return 0;

}
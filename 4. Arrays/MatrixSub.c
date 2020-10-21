#include<stdio.h>
int main()
{
    int array1[20][20],array2[20][20],array3[20][20],row,col,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d",&col);
    printf("Enter the first matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",&array1[i][j]);
    }
    printf("Enter the second matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",&array2[i][j]);
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            array3[i][j] = array1[i][j]-array2[i][j];
    }
    printf("Resultant matrux:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            printf("%d ",array3[i][j]);
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **array, rows,cols,i,j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&rows,&cols);
    array = (int**)malloc(rows * sizeof(int*));
    for(i=0;i<rows;i++)
    {
        array[i] = (int*)malloc(cols*sizeof(int));
    }
    printf("Enter the the matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
            scanf("%d",&array[i][j]);
    }
    printf("\nMatrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
            printf("%d ",array[i][j]);
        printf("\n");
    }
    return 0;
}
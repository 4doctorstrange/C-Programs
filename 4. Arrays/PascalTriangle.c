#include<stdio.h>
int main()
{
    int array[7][7] = {0};
    int row=2,col,i,j;
    array[0][0] = array[1][0] = array[1][1] = 1;
    while(row<7)
    {
        array[row][0] = 1;
        for(col=1;col<=row;col++)
            array[row][col] = array[row-1][col]+array[row-1][col-1];
        row++;
    }
    for(i=0;i<7;i++)
    {
        for(j=0;j<=i;j++)
            printf("\t %d",array[i][j]);
        printf("\n");
    }
    return 0;
}
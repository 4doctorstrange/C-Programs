#include<stdio.h>
int main()
{
    int mat1[20][20],mat2[20][20],r1,c1,r2,c2,i,j,k,mat3[20][20]={0};
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter the matrix: ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            scanf("%d",&mat1[i][j]);
    }
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d",&r2,&c2);
    printf("Enter the matrix: ");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<r2;k++)
            {
                mat3[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    printf("Product Matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
            printf("%d ",mat3[i][j]);
        printf("\n");
    }
}
#include<stdio.h>
int main()
{
    int array1[100],array2[100],array3[100],i,index=0,size1,size2,size3;
    printf("Enter the size of first array: ");
    scanf("%d",&size1);
    printf("Enter the elements of first array\n");
    for(i=0;i<size1;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&array1[i]);
    }
    printf("Enter the size of second array: ");
    scanf("%d",&size2);
    printf("Enter the elements of second array\n");
    for(i=0;i<size2;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&array2[i]);
    }
    size3 = size1+size2;
    for(i=0;i<size1;i++)
    {
        array3[index++] = array1[i];
    }
    for(i=0;i<size2;i++)
    {
        array3[index++] = array2[i];
    }
    printf("Merged array:\n");
    for(i=0;i<size3;i++)
    {
        printf("%d ",array3[i]);
    }
    return 0;
}
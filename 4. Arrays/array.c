#include<stdio.h>
int main()
{
    int size,array[100],i;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter the elements of array:\n");
    for(i=0;i<size;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("Elements of array are:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
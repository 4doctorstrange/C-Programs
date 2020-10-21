#include<stdio.h>
int main()
{
    int array[100],size,i,pos;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter the elements of array\n");
    for(i=0;i<size;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("Elements of array:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\nEnter the position of element to be deleted: ");
    scanf("%d",&pos);
    pos--;
    for(i=pos;i<size;i++)
    {
        array[i] = array[i+1];
    }
    size--;
    printf("Array after deletion:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
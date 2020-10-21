#include<stdio.h>
int main()
{
    int size,array[100],i,small_index=0,large_index=0;
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
    for ( i = 1; i < size; i++)
    {
        if(array[i]<array[small_index])
            small_index = i;
        if(array[i]>array[large_index])
            large_index = i;
    }
    int temp = array[small_index];
    array[small_index] = array[large_index];
    array[large_index] = temp;
    printf("\nElements of array after intervhange:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
    
}
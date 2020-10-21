#include<stdio.h>
int main()
{
    int size,array[100],i,index;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter the elements of array:\n");
    for(i=0;i<size;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    index = 0;
    for(i=1;i<size;i++)
    {
        if(array[i]<array[index])
            index = i;
    }
    printf("Smallest element of array: %d\n",array[index]);
    printf("Index of smallest element = %d",index);
    return 0;
}
#include<stdio.h>
int main()
{
    int size,array[100],largest_pos=0,slargest_pos=0,i;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter the elements of array\n");
    for(i=0;i<size;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    for(i=1;i<size;i++)
    {
        if(array[i]>array[largest_pos])
            largest_pos = i;
    }
    slargest_pos = size-largest_pos-1;
    for(i=0;i<size;i++)
    {
        if(i!=largest_pos)
        {
            if(array[i]>array[slargest_pos])
                slargest_pos = i;
        }
    }
    printf("Second largest element = %d",array[slargest_pos]);
    return 0;
}
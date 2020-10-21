#include<stdio.h>
int main()
{
    int array[100],size,i,j,element,flag=1;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter the elements of array in sorted order\n");
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
    printf("\nEnter the element to be inserted: ");
    scanf("%d",&element);
    for(i=0;i<size;i++)
    {
        if(array[i]>element)
        {
            flag = 0;
            for(j=size-1;j>=i;j--)
            {
                array[j+1] = array[j];
            }
            array[i] = element;
            break;
        }
    }
    if(flag)
        array[size] = element;
    size++;
    printf("After insertion array is:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
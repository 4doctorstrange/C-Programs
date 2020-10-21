#include<stdio.h>
int main()
{
    int array[100],size,i,pos=-1,element;
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
    printf("\nEnter the element to search: ");
    scanf("%d",&element);
    for(i=0;i<size;i++)
    {
        if(array[i]==element)
        {
            pos = i;
            break;
        }
    }
    if(pos==-1)
        printf("%d not found in array!",element);
    else
        printf("%d found at index %d",element,pos);
    return 0;
}
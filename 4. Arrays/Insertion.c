#include<stdio.h>
int main()
{
    int array[100],size,i,pos,element;
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
    printf("\nEnter the element to be inserted: ");
    scanf("%d",&element);
    printf("Enter the position of element: ");
    scanf("%d",&pos);
    pos--;
    for(i=size-1;i>=pos;i--)
        array[i+1] = array[i];
    array[pos] = element;
    size++;
    printf("Elements of array after insertion:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
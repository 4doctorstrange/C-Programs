#include<stdio.h>
void read(int[], int);
void write(int[], int);
int main()
{
    int array[100],size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    read(array,size);
    write(array,size);
    return 0;
}
void read(int array[], int size)
{
    int i;
    printf("\nEnter the elements of array\n");
    for(i=0;i<size;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&array[i]);
    }
}
void write(int array[], int size)
{
    int i;
    printf("\nElements of array:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
}
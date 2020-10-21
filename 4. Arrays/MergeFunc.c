#include<stdio.h>
void read(int[], int);
void write(int[], int);
void merge(int[], int, int[], int, int[]);
void reverse(int[], int);
int main()
{
    int array1[100],size1,array2[100],size2,array3[100],size3;
    printf("Enter the size of first array: ");
    scanf("%d",&size1);
    read(array1,size1);
    write(array1,size1);
    printf("\nEnter the size of second array: ");
    scanf("%d",&size2);
    read(array2,size2);
    write(array2,size2);
    size3 = size1+size2;
    merge(array1,size1,array2,size2,array3);
    reverse(array3,size3);
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
void merge(int array1[], int size1, int array2[], int size2, int array3[])
{
    int index = 0,i;
    for(i=0;i<size1;i++)
        array3[index++] = array1[i];
    for(i=0;i<size2;i++)
        array3[index++] = array2[i];
}
void reverse(int array[],int size)
{
    printf("\nArray in reverse order:\n");
    for(int i=size-1;i>=0;i--)
        printf("%d ",array[i]);
}
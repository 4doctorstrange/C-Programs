#include<stdio.h>
void read(int*,int);
void write(int*,int);
void smallest(int*,int,int*,int*);
int main()
{
    int array[100],n,small,pos;
    printf("Enter the number of elements of the array: ");
    scanf("%d",&n);
    read(array,n);
    write(array,n);
    smallest(array,n,&small,&pos);
    printf("\nSmallest element = %d",small);
    printf("\nPosition = %d",pos);
    return 0;
}
void read(int *array,int n)
{
    int i;
    printf("\nEnter the elements of array\n");
    for(i=0;i<n;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",(array+i));
    }
}
void write(int *array,int n)
{
    int i;
    printf("\nElements of array:\n");
    for(i=0;i<n;i++)
        printf("%d ",*(array+i));
}
void smallest(int *array,int n,int *small,int *pos)
{
    int i;
    *pos = 0;
    *small = *array;
    for(i=1;i<n;i++)
    {
        if(*small>*(array+i))
        {
            *small = *(array+i);
            *pos = i;
        }
    }
}
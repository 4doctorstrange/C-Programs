#include<stdio.h>
int main()
{
    int array[100],i,n;
    printf("Enter the number of elements of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        printf("Elmenet %d: ",i+1);
        scanf("%d",(array+i));
    }
    printf("Elements of array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(array+i));
    }
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *array, n,i;
    printf("Enter the number of array elements: ");
    scanf("%d",&n);
    array = (int*)malloc(n*sizeof(int));
    if(array==NULL)
    {
        printf("Memory overrun!");
        return 0;
    }
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",array+i);
    }
    printf("Elements of array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(array+i));
    }
    printf("\nEnter new size: ");
    scanf("%d",&n);
    array = (int*)realloc(array,n);
    printf("Enter additional elements\n");
    for(;i<n;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",array+i);
    }
    printf("Elements of array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(array+i));
    }
    free(array);
    return 0;
}
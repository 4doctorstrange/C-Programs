#include<stdio.h>
int main()
{
    int array[100],n,i,pos;
    int *p = &pos;
    printf("Enter the number of elements of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",(array+i));
    }
    *p = 0;
    for(i=1;i<n;i++)
    {
        if(*(array+*p)<*(array+i))
            *p = i;
    }
    printf("Largest element = %d",array[pos]);
    printf("\nPosition = %d",pos+1);
    return 0;
}
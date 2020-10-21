#include<stdio.h>
int main()
{
    int size,array[100],i,j,flag=1;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter the elements of array\n");
    for(i=0;i<size;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(array[i]==array[j])
            {
                printf("The array containes duplicates!");
                flag = 0;
                break;
            }
        }
        if(!flag)
            break;
    }
    if(flag)
        printf("The array doesn't contain duplicates");
    return 0;
}
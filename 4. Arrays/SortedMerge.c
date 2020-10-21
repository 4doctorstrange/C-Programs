#include<stdio.h>
int main()
{
    int array1[100],array2[100],array3[100],i,size1,size2,size3,index=0,index1=0,index2=0;
    printf("Enter the size of first array: ");
    scanf("%d",&size1);
    printf("Enter the elements of first array\n");
    for(i=0;i<size1;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&array1[i]);
    }
    printf("Enter the size of second array: ");
    scanf("%d",&size2);
    printf("Enter the elements of second array\n");
    for(i=0;i<size2;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&array2[i]);
    }
    size3 = size1+size2;
    while(index1<size1&&index2<size2)
    {
        if(array1[index1]<array2[index2])
            array3[index++] = array1[index1++];
        else
            array3[index++] = array2[index2++];
    }
    if(index1==size1)
    {
        while(index2<size2)
            array3[index++] = array2[index2++];
    }
    else
    {
        while(index1<size1)
            array3[index++] = array1[index1++];
    }
    printf("Merged array:\n");
    for(i=0;i<size3;i++)
    {
        printf("%d ",array3[i]);
    }
    return 0;
}
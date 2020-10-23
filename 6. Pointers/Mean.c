#include<stdio.h>
int main()
{
    int num,array[100],sum=0,i;
    float mean;
    printf("Enter the number of elements: ");
    scanf("%d",&num);
    printf("Enter the elements: ");
    for(i=0;i<num;i++)
        scanf("%d",*(array+i));
    printf("The elements you entered are:\n");
    for(i=0;i<num;i++)
        printf("%d ",*(array+i));
    
}
#include<stdio.h>
int main()
{
    int num1,num2,num3,largest;
    int *n1=&num1,*n2=&num2,*n3=&num3,*l=&largest;
    printf("Enter the three numbers: ");
    scanf("%d %d %d",n1,n2,n3);
    *l = *n1;
    if(*l<*n2)
        *l = *n2;
    if(*l<*n3)
        *l = *n3;
    printf("Largest = %d",largest);
    return 0;
}
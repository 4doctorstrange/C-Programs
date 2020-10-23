#include<stdio.h>
int main()
{
    float num1,num2,sum;
    float *pnum1 = &num1,*pnum2 = &num2,*psum = &sum;
    printf("Enter first number: ");
    scanf("%f",pnum1);
    fflush(stdin);
    printf("Enter second number: ");
    scanf("%f",pnum2);
    *psum = *pnum1 + *pnum2;
    printf("Sum = %.2f",*psum);
    return 0;
}
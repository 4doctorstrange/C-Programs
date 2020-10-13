#include<stdio.h>
int GCD(int a,int b);
int main()
{
    int num1,num2,result;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    result = GCD(num1,num2);
    printf("GCD of %d and %d = %d",num1,num2,result);
    return 0;
}
int GCD(int a, int b)
{
    if(b==0)
        return a;
    else
        return GCD(b,a%b);
}
#include<stdio.h>
int main()
{
    int m,n,remainder;
    printf("Enter first number: ");
    scanf("%d",&m);
    printf("Enter second number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        remainder = m%n;
        m = n;
        n = remainder;
    }
    printf("GCD of the two numbers = %d",m);
    return 0;
}
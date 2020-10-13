#include<stdio.h>
long long int fib(int n);
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("%dth term of fibonacci series = %lld",n,fib(n));
    return 0;
}
long long int fib(int n)
{
    if(n<=1)
        return n;
    else
        return fib(n-1)+fib(n-2);
}
#include<stdio.h>
int fact(int n);
int main()
{
    float sum=0;
    int n,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum + 1.0/fact(i); 
    }
    printf("Sum of series = %.2f",sum);
    return 0;
}
int fact(int n)
{
    int result = 1,i;
    for(i=1;i<=n;i++)
    {
        result*=i;
    }
    return result;
}
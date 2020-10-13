#include<stdio.h>
int fact(int n);
float combination(int n,int r);
int main()
{
    int n,r;
    float comb;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);
    comb = combination(n,r);
    printf("C(%d/%d)= %.2f",n,r,comb);
    return 0;
}
float combination(int n,int r)
{
    return (float)fact(n)/(fact(n-r)*fact(r));
}
int fact(int n)
{
    int result=1,i;
    for(i=1;i<=n;i++)
    result*=i;
    return result;
}

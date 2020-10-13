#include<stdio.h>
float permutations(int n,int r);
int fact(int n);
int main()
{
    int n,r;
    float perm;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);
    perm = permutations(n,r);
    printf("P(%d/%d) = %.2f",n,r,perm);
    return 0;
}
float permutations(int n, int r)
{
    //printf("%f\n",(float)fact(n)/fact(r));
    return (float)fact(n)/fact(r);
}
int fact(int n)
{
    int result = 1,i;
    for(i=1;i<=n;i++)
        result*=i;
    return result;
}
#include<stdio.h>
#include<math.h>
int fact(int n);
int main()
{
    int n,i;
    float sum = 0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum += (float)pow(i,i)/fact(i);
    }
    printf("Sum of the series: %.2f",sum);
    return 0;
}
int fact(int n)
{
    int result = 1,i;
    for(i=1;i<=n;i++)
    result*=i;
    return result;
}
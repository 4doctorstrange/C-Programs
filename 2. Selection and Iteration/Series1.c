#include<stdio.h>
int main()
{
    float sum = 0;
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=1.0/i;
    }
    printf("Sum of series = %f",sum);
    return 0;
}
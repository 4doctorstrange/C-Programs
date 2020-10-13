#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    float avg;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    avg = (float)sum/n;
    printf("Average of first %d natural numbers = %f",n,avg);
    return 0;
}
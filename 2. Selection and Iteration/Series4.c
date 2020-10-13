#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    float sum = 0.0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=(float)pow(i,i)/i;
    }
    printf("Sum of series = %f",sum);
    return 0;
}
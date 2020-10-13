#include<stdio.h>
int main()
{
    int m,n,i;
    printf("Enter lower limit of range: ");
    scanf("%d",&m);
    printf("Enter upper limit of range: ");
    scanf("%d",&n);
    printf("Odd numbers between %d and %d are:\n",m,n);
    for(i=m;i<=n;i++)
    {
        if(i%2==1)
            printf("%d\n",i);
    }
    return 0;
}
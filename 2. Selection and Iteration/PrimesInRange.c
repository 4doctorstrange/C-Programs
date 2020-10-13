#include<stdio.h>
int main()
{
    int l,u,i,j,flag;
    printf("Enter lower limit of range: ");
    scanf("%d",&l);
    printf("Enter upper limit of range: ");
    scanf("%d",&u);
    printf("Prime numbers in the range %d to %d:\n",l,u);
    if(l<=1)
        l=2;
    for(i=l;i<=u;i++)
    {
        flag = 1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
            printf("%d\n",i);
    }
    return 0;
}
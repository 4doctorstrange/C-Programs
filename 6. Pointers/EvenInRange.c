#include<stdio.h>
int main()
{
    int m,n, *pm = &m, *pn = &n,i;
    printf("Enter the lower limit: ");
    scanf("%d",pm);
    printf("Enter the upper limit: ");
    scanf("%d",pn);
    for(i=m;i<=n;i++)
    {
        if(i%2==0)
            printf("%d ",i);
    }
    return 0;
}
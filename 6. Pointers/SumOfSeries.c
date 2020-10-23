#include<stdio.h>
int main()
{
    int n,m,sum,i;
    int *pn = &n,*pm = &m,*psum = &sum;
    *psum = 0;
    float avg, *pavg = &avg;
    printf("Enter the lower limit: ");
    scanf("%d",pn);
    printf("Enter upper limit: ");
    scanf("%d",pm);
    for(i=*pn;i<=*pm;i++)
    {
        (*psum)+=i;
    }
    *pavg = (float)(*psum)/(*pm-*pn);
    printf("Sum = %d",*psum);
    printf("\nAverage = %.2f",*pavg);
    return 0;
}
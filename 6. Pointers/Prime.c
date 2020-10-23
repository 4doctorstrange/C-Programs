#include<stdio.h>
int main()
{
    int num, *pnum = &num,i,flag;
    printf("*******Enter -1 to exit*****");
    printf("\nEnter a number: ");
    scanf("%d",pnum);
    while(*pnum!=-1)
    {
        flag = 1;
        for(i=2;i<=*pnum/2;i++)
        {
            if(*pnum%i==0)
            {
                flag = 0;
                break;
            }
        }
        if(flag&&*pnum!=1)
            printf("%d is prime number\n",*pnum);
        else
            printf("%d is not a prime number\n",*pnum);
        printf("\nEnter a number: ");
        scanf("%d",pnum);
    }
    return 0;
}
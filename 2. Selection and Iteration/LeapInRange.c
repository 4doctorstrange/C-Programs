#include<stdio.h>
int main()
{
    int y1,y2,y;
    printf("Enter first year: ");
    scanf("%d",&y1);
    printf("Enter last year: ");
    scanf("%d",&y2);
    y = y1;
    while(y<=y2)
    {
        if(y%400==0)
            printf("%d is a leap year\n",y);
        else if(y%4==0&&y%100!=0)
            printf("%d is a leap year\n",y);
        y++;
    }
    return 0;
}
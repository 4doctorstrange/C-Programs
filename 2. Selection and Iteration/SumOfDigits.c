#include<stdio.h>
int main()
{
    int n,sum=0,temp,digit;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp = n;
    while(temp>0)
    {
        digit = temp%10;
        sum+=digit;
        temp = temp/10;
    }
    printf("Sum of digits = %d",sum);
    return 0;
}
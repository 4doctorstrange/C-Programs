#include<stdio.h>
#include<math.h>
int main()
{
    int n,digit,sum=0,temp;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp  = n;
    while(temp>0)
    {
        digit = temp%10;
        sum+=pow(digit,3);
        temp = temp/10;
    }
    if(n==sum)
        printf("%d is a Armstrong Number",n);
    else
    {
        printf("%d is not an Armstrong Number",n);
    }
    return 0; 
}
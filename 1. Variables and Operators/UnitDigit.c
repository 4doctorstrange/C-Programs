#include<stdio.h>
int main()
{
    int num,digit;
    printf("Enter the number: ");
    scanf("%d",&num);
    digit = num%10;
    printf("Digit at unit place of %d = %d",num,digit);
    return 0;
}
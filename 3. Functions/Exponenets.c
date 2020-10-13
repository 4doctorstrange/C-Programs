#include<stdio.h>
int exponents(int base,int power);
int main()
{
    int base,power;
    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter power: ");
    scanf("%d",&power);
    printf("Result = %d",exponents(base,power));
    return 0;
}
int exponents(int base,int power)
{
    if(power==0)
        return 1;
    else
        return base*exponents(base,power-1);
}
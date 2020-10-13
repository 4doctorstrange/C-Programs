#include<stdio.h>
#include<math.h>
int main()
{
    int decimal,octal=0,temp,remainder,i=0;
    printf("Enter the number in decimal form: ");
    scanf("%d",&decimal);
    temp = decimal;
    while(temp>0)
    {
        remainder = temp%8;
        octal += remainder*pow(10,i);
        temp = temp/8;
        i++;
    }
    printf("Octal Form = %d",octal);
    return 0;
}
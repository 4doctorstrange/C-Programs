#include<stdio.h>
#include<math.h>
int main()
{
    int octal,decimal=0,oct,temp,i=0;
    printf("Enter the octal number: ");
    scanf("%d",&octal);
    temp = octal;
    while(temp>0)
    {
        oct = temp%10;
        decimal += oct*pow(8,i);
        temp = temp/10;
        i++;
    }
    printf("Decimal form: %d",decimal);
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    int bin,decimal=0,temp,bit,i=0;
    printf("Enter the binary number: ");
    scanf("%d",&bin);
    temp = bin;
    while(temp>0)
    {
        bit =  temp%10;
        decimal += bit*pow(2,i);
        temp = temp/10;
        i++;
    }
    printf("Decimal Form: %d",decimal);
    return 0;
}
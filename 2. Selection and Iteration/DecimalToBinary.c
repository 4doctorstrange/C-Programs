#include<stdio.h>
#include<math.h>
int main()
{
    int decimal,bin=0,temp,remainder,i=0;
    printf("Enter the decimal number: ");
    scanf("%d",&decimal);
    temp = decimal;
    while(temp>0)
    {
        remainder = temp%2;
        bin = bin+remainder*pow(10,i);
        temp = temp/2;
        i++;
    }
    printf("Binary form if %d = %d",decimal,bin);
    return 0;
}
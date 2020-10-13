#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter temperature in degree fahrenheit: ");
    scanf("%f",&f);
    c = (5.0/9.0)*(f-32);
    printf("Temperature in degree celsius: %f",c);
    return 0;
}
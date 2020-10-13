#include<stdio.h>
#define PI 3.14159
int main()
{
    double radius,area;
    printf("Enter the radius of the circle: ");
    scanf("%lf",&radius);
    area = PI*radius*radius;
    printf("Area of circle = %.7lf",area);
    return 0;
}
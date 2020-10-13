#include<stdio.h>
#define PI 3.14159
float area(float radius);
int main()
{
    float radius;
    printf("Enter the radius of circle: ");
    scanf("%f",&radius);
    printf("Area of circle = %f",area(radius));
    return 0;
}
float area(float radius)
{
    float a = PI*radius*radius;
    return a;
}
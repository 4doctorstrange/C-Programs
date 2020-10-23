#include<stdio.h>
#define PI 3.14159
int main()
{
    double radius,area;
    double *r = &radius,*a=&area;
    printf("Enter the radius of circle: ");
    scanf("%lf",r);
    *a = PI*(*r)*(*r);
    printf("Area = %.2lf",*a);
    return 0;
}
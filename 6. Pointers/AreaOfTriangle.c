#include<stdio.h>
void read(float*,float*);
void area_calc(float*,float*,float*);
int main()
{
    float base,height,area;
    area_calc(&base,&height,&area);
    printf("\nArea = %.2f",area);
    return 0;
}
void area_calc(float *base,float *height,float *area)
{
    read(base,height);
    *area = 0.5*(*base)*(*height);
}
void read(float *base, float *height)
{
    printf("Enter the base of triangle: ");
    scanf("%f",base);
    printf("Enter the height of triangle: ");
    scanf("%f",height);
}
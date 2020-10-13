#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,disc;
    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    printf("Enter the value of c: ");
    scanf("%f",&c);
    disc = b*b-4*a*c;
    if(disc<0)
    printf("Roots are imaginary!");
    else if(disc==0)
    {
        printf("Roots are real and equal.\n");
        float root = -b/(2*a);
        printf("Root = %f",root);
    } 
    else
    {
        printf("Roots are real and distinct.\n");
        float r1,r2;
        r1 = (-b-sqrt(disc))/(2*a);
        r2 = (-b+sqrt(disc))/(2*a);
        printf("Root1 = %f\tRoot2 = %f",r1,r2);
    }
    return 0;
}
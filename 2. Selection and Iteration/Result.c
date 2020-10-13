#include<stdio.h>
int main()
{
    float per;
    printf("Enter your percentage: ");
    scanf("%f",&per);
    if(per>=75)
        printf("Distinction");
    else if(per>=60)
        printf("First divison");
    else if(per>=50)
        printf("Second divison");
    else if(per>=40)
        printf("Third divison");
    else 
        printf("Fail");
    return 0;
}
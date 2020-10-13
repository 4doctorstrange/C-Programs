#include<stdio.h>
int largest(int a, int b, int c);
int main()
{
    int num1,num2,num3,large;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Enter third number: ");
    scanf("%d",&num3);
    large = largest(num1,num2,num3);
    printf("Largest of three numbers is %d",large);
    return 0;
}
int largest(int x, int y, int z)
{
    int max = x;
    if(max<y)
        max = y;
    if(max<z)
        max = z;
    return max;
}
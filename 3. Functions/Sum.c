#include<stdio.h>
int sum(int a, int b);
int main()
{
    int num1,num2;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    int result = sum(num1,num2);
    printf("Result = %d",result);
    return 0;
}
int sum(int x, int y)
{
    int result;
    result = x+y;
    return result;
}
#include<stdio.h>
void swapv(int a, int b);
void swapr(int* a, int* b);
int main()
{
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Before calling any function, num1 = %d   num2 = %d\n",num1,num2);
    swapv(num1,num2);
    printf("After calling swap by value, num1 = %d   num2 = %d\n",num1,num2);
    swapr(&num1,&num2);
    printf("After calling swap by reference, num1 = %d   num2 = %d\n",num1,num2);
    return 0;
}
void swapv(int x,int y)
{
    int temp = x;
    x = y;
    y = x;
}
void swapr(int* x,int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
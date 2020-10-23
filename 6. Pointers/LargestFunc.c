#include<stdio.h>
void largest(int*,int*,int*,int*);
int main()
{
    int a,b,c,large;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%D",&b);
    printf("Enter third number: ");
    scanf("%d",&c);
    largest(&a,&b,&c,&large);
    printf("Largest number: %d",large);
    return 0;
}
void largest(int *a,int *b,int *c,int *large)
{
    *large = *a;
    if(*large<*b)
        *large = *b;
    if(*large<*c)
        *large = *c;
}
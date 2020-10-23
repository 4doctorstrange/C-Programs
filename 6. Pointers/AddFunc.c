#include<stdio.h>
void add(int*,int*,int*);
int main()
{
    int a,b,sum;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the secod number: ");
    scanf("%d",&b);
    add(&a,&b,&sum);
    printf("Sum = %d",sum);
    return 0;
}
void add(int *a, int *b, int *sum)
{
    *sum = *a + *b;
}
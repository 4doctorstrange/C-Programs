#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Multiplication table of %d\n");
    for(i=1;i<=10;i++)
        printf("%d X %d = %d\n",n,i,n*i);
    return 0;
}
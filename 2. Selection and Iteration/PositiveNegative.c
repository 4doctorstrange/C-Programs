#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num==0)
        printf("You entered 0");
    else if(num>0)
        printf("You entered a positive number");
    else
        printf("You entered a negative number");
    return 0;
}
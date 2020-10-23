#include<stdio.h>
int main()
{
    int num;
    int *pnum = &num;
    printf("Enter the number: ");
    scanf("%d",pnum);
    if(*pnum==0)
        printf("You entered zero!");
    else if(*pnum>0)
        printf("You entered a positive number!");
    else
        printf("You entered a negative number!");
    return 0;
}
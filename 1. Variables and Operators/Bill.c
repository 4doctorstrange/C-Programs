#include<stdio.h>
int main()
{
    int qty;
    float value,amount,tax=0.18,discount=0.1,total;
    printf("Enter the quantity of item: ");
    scanf("%d",&qty);
    printf("Enter the price of item: ");
    scanf("%f",&value);
    amount = qty*value;
    tax = tax*amount;
    discount = discount*amount;
    total = amount+tax-discount;
    printf("***********************************************");
    printf("\nAmount:  \t\t\t%f",amount);
    printf("\nTax:     \t\t\t%f",tax);
    printf("\nDiscount:\t\t\t%f",discount);
    printf("\n***********************************************");
    printf("\nTotal:    \t\t\t%f",total);
    return 0;
}
#include<stdio.h>
int main()
{
    float salary,bonus,net;
    char sex;
    printf("Enter your gender(M/F): ");
    scanf("%c",&sex);
    printf("Enter your salary: ");
    scanf("%f",&salary);
    if(sex=='M')
        bonus = 0.05*salary;
    else
    {
        bonus = 0.1*salary;
    }
    if(salary<=10000)
        bonus+=salary*0.02;
    printf("Congratulations! You bonus is Rs %f",bonus);
    net = salary+bonus;
    printf("\nNet amount: %f",net);
    return 0;    
}
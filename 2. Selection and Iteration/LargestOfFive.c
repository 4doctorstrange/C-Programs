#include<stdio.h>
int main()
{
    int n,largest,i=2;
    printf("Enter the number: ");
    scanf("%d",&n);
    largest = n;
    while(i<=5)
    {
        printf("Enter the number: ");
        scanf("%d",&n);
        if(n>largest)
            largest = n;
        i++;
    }
    printf("Largest = %d",largest);

}
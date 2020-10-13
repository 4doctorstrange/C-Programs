#include<stdio.h>
int main()
{
    int n,pos=0,neg=0,zero=0;
    printf("Enter numbers(-1 to stop): ");
    scanf("%d",&n);
    while(n!=-1)
    {
        if(n==0)
        zero++;
        else if(n>0)
        pos++;
        else
        neg++;
        printf("Enter numbers(-1 to stop): ");
        scanf("%d",&n);        
    }
    printf("Number of positives = %d\n",pos);
    printf("Number of negatives = %d\n",neg);
    printf("Number of zeroes = %d",zero);
    return 0;
}
#include<stdio.h>
void TOI(int n, char source, char dest, char spare);
int main()
{
    int n;
    printf("Enter the number of rings: ");
    scanf("%d",&n);
    TOI(n,'A','C','B');
    return 0;
}
void TOI(int n, char source, char dest, char spare)
{
    if(n==1)
        printf("\nMove from %c to %c\n",source,dest);
    else
    {
        TOI(n-1,source,spare,dest);
        TOI(1,source,dest,spare);
        TOI(n-1,spare,dest,source);
    }
} 
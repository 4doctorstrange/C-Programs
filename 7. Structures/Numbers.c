#include<stdio.h>
int main()
{
    struct numbers
    {
        int a,b,c;
        int largest;
    };
    struct numbers n;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&n.a,&n.b,&n.c);
    n.largest = n.a;
    if(n.b>n.largest)
        n.largest = n.b;
    if(n.c>n.largest)
        n.largest = n.c;
    printf("Largest: %d",n.largest);
    return 0;
}
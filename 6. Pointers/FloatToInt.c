#include<stdio.h>
int main()
{
    float fnum, *fn=&fnum;
    int inum, *in=&inum;
    printf("Enter the floating point number: ");
    scanf("%f",&fnum);
    *in = (int)*fn;
    printf("Integer number: %d",inum);
    return 0;
}
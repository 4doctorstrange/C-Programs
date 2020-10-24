#include<stdio.h>
int main()
{
    char str[100],copy_str[100], *ptr = str, *cptr = copy_str;
    int m,n;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the starting position: ");
    scanf("%d",&m);
    printf("Enter the number of characters: ");
    scanf("%d",&n);
    ptr+=m;
    while(*ptr!='\0'&&n>0)
    {
        *cptr = *ptr;
        ptr++;
        cptr++;
        n--;
    }
    *cptr = '\0';
    printf("Copied string: %s",copy_str);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],copy_str[100],*pstr = str, *cpstr = copy_str;
    int n;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the number of characters: ");
    scanf("%d",&n);
    pstr+=(strlen(str)-n);
    while(*pstr!='\0')
    {
        *cpstr = *pstr;
        pstr++;
        cpstr++;
    }
    *cpstr = '\0';
    printf("Copied text: %s",copy_str);
    return 0;
}
#include<stdio.h>
int main()
{
    char str[100],copy_str[100];
    char *pstr = str, *cstr = copy_str;
    printf("Enter a string: ");
    gets(str);
    while(*pstr!='\0')
    {
        *cstr = *pstr;
        pstr++;
        cstr++;
    }
    *cstr = '\0';
    printf("Copied text: %s",copy_str);
    return 0;
}
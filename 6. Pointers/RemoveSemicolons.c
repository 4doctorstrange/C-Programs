#include<stdio.h>
int main()
{
    char str[100],copy_str[100];
    char *pstr = str, *cpstr = copy_str;
    printf("Enter the string: ");
    gets(str);
    while(*pstr!= '\0')
    {
        if(*pstr==';')
            pstr++;
        else if(*pstr=='.')
        {
            *cpstr = ',';
            cpstr++;
            pstr++;
        }
        else
        {
            *cpstr = *pstr;
            cpstr++;
            pstr++;
        }
    }
    printf("New string: %s",copy_str);
    return 0;

}
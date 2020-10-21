#include<stdio.h>
int main()
{
    char str[100],upper_str[100],i;
    printf("Enter the string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&&str[i]<='z')
            upper_str[i] = str[i]-32;
        else
            upper_str[i] = str[i];
    }
    upper_str[i] = '\0';
    printf("Uppercase = %s",upper_str);
    return 0;
}
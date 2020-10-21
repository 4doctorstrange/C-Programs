#include<stdio.h>
int main()
{
    char str[100],lower_str[100],i;
    printf("Enter the string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
            lower_str[i] = str[i]+32;
        else
            lower_str[i] = str[i];        
    }
    lower_str[i] = '\0';
    printf("Lowercase = %s",lower_str);
    return 0;
}
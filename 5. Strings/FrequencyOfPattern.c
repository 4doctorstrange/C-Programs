#include<stdio.h>
int main()
{
    char str[100],pattern[100];
    int count = 0,i=0,j;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the pattern: ");
    gets(pattern);
    while(str[i]!= '\0')
    {
        j = 0;
        while(pattern[j]==str[i+j]&&pattern[j]!='\0')
        {
            j++;
        }
        if(pattern[j]=='\0')
            count++;
        i++;
    }
    printf("\"%s\" appears %d times in \"%s\"",pattern,count,str);
    return 0;
}
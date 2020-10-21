#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],i,j;
    printf("Enter the string: ");
    gets(str);
    for(i=0,j=strlen(str)-1;i<j;i++,j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("Reverse: %s",str);
    return 0;
}
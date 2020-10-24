#include<stdio.h>
int main()
{
    char str[100],temp;
    char *start=str,*end=str;
    printf("Enter the string: ");
    gets(str);
    while(*end!='\0')
    {
        end++;
    }
    end--;
    while(start<end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--; 
    }
    printf("Reverse: %s",str);
    return 0;
}
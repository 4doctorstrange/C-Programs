#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int length,i,j;
    printf("Enter the string: ");
    gets(str);
    length = strlen(str);
    for(i=0,j=length-1;i<j;i++,j--)
    {
        if(str[i]!=str[j])
            break;
    }
    if(i>=j)
        printf("Given string is a palindrome");
    else
        printf("Given string is not a palindrome");
    return 0;
}
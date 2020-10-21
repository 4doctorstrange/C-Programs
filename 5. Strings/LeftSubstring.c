#include<stdio.h>
int main()
{
    char str[100],substr[100];
    int n,i;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the number of characters you want to extract: ");
    scanf("%d",&n);
    for(i=0;i<n&&str[i]!='\0';i++)
        substr[i] = str[i];
    substr[i] = '\0';
    printf("Left Substring: %s",substr);
    return 0;
}
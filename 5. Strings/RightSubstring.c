#include<stdio.h>
#include<string.h>
#include<string.h>
int main()
{
    char str[100],substr[100];
    int n,i,j;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the number of characters you want to extract: ");
    scanf("%d",&n);
    for(i=0,j=strlen(str)-n;str[j]!='\0';i++,j++)
        substr[i] = str[j];
    substr[i] = '\0';
    printf("Right substring: %s",substr);
    return 0;
}
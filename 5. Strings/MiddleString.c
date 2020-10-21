#include<stdio.h>
int main()
{
    char str[100],substr[100];
    int pos,n,i,j;
    printf("Enter the string: ");
    gets(str);   
    printf("Enter the starting position: ");
    scanf("%d",&pos); 
    printf("Enter the number of characters: ");
    scanf("%d",&n);
    for(i=0,j=pos;n>0&&str[j]!='\0';i++,j++,n--)
        substr[i]= str[j];
    substr[i] = '\0';
    printf("Extracted substring: %s",substr);
    return 0;
}
#include<stdio.h>
int main()
{
    char str1[100],str2[100],str3[200],i,j=0;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    for(i=0;str1[i]!='\0';i++)
        str3[j++] = str1[i];
    for(i=0;str2[i]!='\0';i++)
        str3[j++] = str2[i];
    str3[j] = '\0';
    printf("Concatenated string: %s",str3);
    return 0;
}
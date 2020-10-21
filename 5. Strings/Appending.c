#include<stdio.h>
int main()
{
    char str1[100],str2[100],str3[200],i,j=0;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    while(str1[j]!='\0')
        j++;
    for(i=0;str2[i]!='\0';i++)
        str1[j++] = str2[i];
    str1[j] = '\0';
    printf("Appended string: %s",str1);
    return 0;
}
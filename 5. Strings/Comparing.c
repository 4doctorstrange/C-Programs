#include<stdio.h>
int main()
{
    char str1[100],str2[100],i=0,flag=1;
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    while(str1[i]!='\0'&&str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            flag = 0;
            break;
        }
        i++;
    }
    if(flag)
    {
        if(str1[i]==str2[i])
            printf("Both the strings are equal!");
        else if(str1[i]>str2[i])
            printf("String1 > String2");
        else
            printf("String1 < String2");
    }
    else
    {
        if(str1[i]<str2[i])
            printf("String1 < String2");
        else
            printf("String 1 > String2");
    }
    return 0;
}
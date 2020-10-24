#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    char *ptr1 = str1, *ptr2 = str2;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    while(*ptr1!= '\0')
        ptr1++;
    while(*ptr2!= '\0')
    {
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }
    *ptr1 = '\0';
    printf("Concatenated string: %s",str1);
    return 0;
}
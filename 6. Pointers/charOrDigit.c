#include<stdio.h>
int main()
{
    char ch, *c = &ch;
    printf("Enter a character: ");
    scanf("%c",c);
    if(*c>='A'&&*c<='Z')
        printf("Uppercase letter is entered");
    else if(*c>='a'&&*c<='z')
        printf("Lowercase letter is entered");
    else if(*c>='0'&&*c<='9')
        printf("Digit is entered");
    return 0;

}
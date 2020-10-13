#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a letter: ");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    {
        printf("You entered an uppercase letter");
        printf("\nEquivalent lowercase: %c",ch+32);
    }
    else if(ch>='a'&&ch<='z')
    {
        printf("You entered a lowercase letter");
        printf("\nEquivalent uppercase: %c",ch-32);
    }
    return 0;
}
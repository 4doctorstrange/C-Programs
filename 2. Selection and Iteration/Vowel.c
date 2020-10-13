#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a letter: ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U': printf("You entered a vowel.");
                  break;
        default : printf("You entered a consonant") ;
    }
    return 0;
}
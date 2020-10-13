#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    if(isalnum(ch))
    {
        printf("You entered an alphanumeric character\n");
        if(isalpha(ch))
        {
            printf("You entered an alphabet\n");
            if(isupper(ch))
                printf("You entered an uppercase alphabet\n");
            if(islower(ch))
                printf("You entered a lowercase alphabet\n");
        }
        if(isdigit(ch))
            printf("You entered a digit\n");
    }
    if(isprint(ch))
        printf("You entered a printable character\n");
    if(isspace(ch))
        printf("You entered a space\n");
    return 0;
}
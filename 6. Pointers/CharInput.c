#include<stdio.h>
int main()
{
    char ch, *c = &ch;
    int upper = 0, lower = 0;
    printf("Enter a character(* to stop): ");
    scanf("%c",c);
    fflush(stdin);
    while(*c!='*')
    {
        if(ch>='A'&&ch<='A')
        {
            upper++;
            printf("%c\n",*c+32);
        }
        else if(*c>='a'&&*c<='z')
        {
            lower++;
            printf("%c\n",*c-32);
        }
        printf("Enter a character(* to stop): ");
        scanf("%c",c);
        fflush(stdin);
    }
    printf("\nNumber of uppercase = %d",upper);
    printf("\nNumber of lowercase = %d",lower);
    return 0;
}
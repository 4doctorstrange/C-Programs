#include<stdio.h>
int main()
{
    char ch;
    int upper=0,lower=0,digit=0;
    do
    {
        printf("Enter character (* to stop): ");
        scanf(" %c",&ch);
        if(ch>='A'&&ch<='Z')
        upper++;
        else if(ch>='a'&&ch<='z')
        lower++;
        else if(ch>= '0'&&ch<='9')
        digit++;
    }while(ch!='*');
    printf("Number of uppercase letters: %d\n",upper);
    printf("Number of lowercase letters: %d\n",lower);
    printf("Number of digits: %d",digit);
    return 0;
}
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character in uppercase: ");
    scanf("%c",&ch);
    printf("Equivalent of character in lowercase is: %c",ch+32);
    return 0;
}
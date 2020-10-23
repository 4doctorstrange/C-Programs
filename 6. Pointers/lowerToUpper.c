#include<stdio.h>
int main()
{
    char ch, *c = &ch;
    printf("Enter a lowercase character: ");
    scanf("%c",c);
    printf("Entered character: %c",*c);
    printf("\nASCII value: %d",*c);
    printf("\nUppercase: %c",*c-32);
    return 0;
}
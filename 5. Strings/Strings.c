#include<stdio.h>
int main()
{
    char name[50],state[50]; 
    printf("Enter your name: ");
    scanf("%[^\n]",name);
    fflush(stdin);
    printf("Hello %s!",name);
    printf("\nHow are you?\n");
    gets(state);
    puts(state);
    return 0;
}
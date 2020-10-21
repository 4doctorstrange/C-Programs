#include<stdio.h>
int main()
{
    char str[100];
    int count=0;
    printf("Enter the string (* to stop): ");
    scanf("%c",&str[count]);
    while(str[count]!= '*')
    {
        count++;
        scanf("%c",&str[count]);
    }
    printf("Number of characters: %d",count);
    return 0;
}
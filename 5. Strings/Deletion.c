#include<stdio.h>
int main()
{
    char text[100],pattern[100],result[100];
    int i=0,j,k=0;
    printf("Enter the main string: ");
    gets(text);
    printf("Enter the pattern to be deleted: ");
    gets(pattern);
    while(text[i]!='\0')
    {
        j=0;
        while(text[i+j]==pattern[j]&&pattern[j]!='\0')
        {
            j++;
        }
        if(pattern[j]=='\0')
            i+=j;
        result[k++] = text[i];
        i++;
    }
    result[k] = '\0';
    printf("Result: %s",result);
    return 0;
}
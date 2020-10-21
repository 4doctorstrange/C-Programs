#include<stdio.h>
int main()
{
    char str[100],pattern1[100],pattern2[100],result[100];
    int i=0,j,k=0,l=0;
    printf("Enter the main string: ");
    gets(str);
    printf("Enter the pattern to be replaced: ");
    gets(pattern1);
    printf("Enter the pattern to be inserted: ");
    gets(pattern2);
    while(str[i]!='\0')
    {
        j = 0;
        while(str[i+j]==pattern1[j]&&pattern1[j]!='\0')
            j++;
        if(pattern1[j]=='\0')
        {
            while(pattern2[l]!='\0')
                result[k++] = pattern2[l++];
            i+=j;
        }
        result[k++] = str[i];
        i++;
    }
    result[k] = '\0';
    printf("Result: %s",result);
    return 0; 
}
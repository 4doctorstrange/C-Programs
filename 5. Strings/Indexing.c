#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],pattern[100];
    int max,i,j,index=-1,flag;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the pattern: ");
    gets(pattern);
    max = strlen(str)-strlen(pattern)+1;
    for(i=0;i<max;i++)
    {
        flag = 1;
        for(j=0;j<strlen(pattern);j++)
        {
            if(str[i+j]!=pattern[j])
            {
                flag = 0;
                break;
            }
        }
        if(flag)
            index = i;
    }
    if(index==-1)
        printf("Pattern not found!");
    else 
        printf("Pattern found at index %d",index);
}
#include<stdio.h>
int main()
{
    char str[100],substr[100],result[200];
    int pos,i,j,k;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the substring: ");
    gets(substr);
    printf("Enter the position: ");
    scanf("%d",&pos);
    for(i=0,j=0;str[i]!='\0';i++)
    {
        if(i==pos-1)
        {
            for(k=0;substr[k]!='\0';k++)
                result[j++] = substr[k];
        }
        result[j++] = str[i];
    }
    result[j] = '\0';
    printf("Result: %s",result);
    return 0;
}
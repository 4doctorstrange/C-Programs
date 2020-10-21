#include<stdio.h>
int main()
{
    char sentence[100];
    int count = 0,i;
    printf("Enter the sentence: ");
    gets(sentence);
    for(i=0;sentence[i]!='\0';i++)
    {
        if(sentence[i]==' '&&sentence[i+1]!=' ')
            count++;
        
    }
    printf("Total number of words in the sentence is = %d",count+1);
    return 0;
}
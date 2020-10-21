#include<stdio.h>
#include<string.h>
int main()
{
    char sentence[200],words[50][15],*temp;
    int i = 0,j=0;
    printf("Enter the sentence: ");
    gets(sentence);
    temp = strtok(sentence," ");
    while(temp!=NULL)
    {
        strcpy(words[i++],temp);
        temp = strtok(NULL," ");
    }
    printf("Total Number of words = %d\n",i);
    printf("Printing the words:\n");
    while(j<i)
    {
        printf("%s\n",words[j++]);
    }
    return 0;
}
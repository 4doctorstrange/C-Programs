#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char filename[50],ch;
    int characters=0,lines=1;
    printf("Enter filename: ");
    gets(filename);
    if(strstr(filename,".txt")==NULL)
    {
        strcat(filename,".txt");
    }
    fp = fopen(filename,"r");
    ch = fgetc(fp);
    while(ch!=EOF)
    {
        if(ch=='\n')
            lines++;
        else
            characters++;
        ch = fgetc(fp);
    }
    printf("Number of characters = %d\n",characters);
    printf("Number of lines = %d",lines);
    return 0;
}
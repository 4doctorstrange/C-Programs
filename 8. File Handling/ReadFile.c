#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char filename[50],ch;
    printf("Enter the filename: ");
    gets(filename);
    if(strstr(filename,".txt")==NULL)
    {
        strcat(filename,".txt");
    }
    fp = fopen(filename,"r");
    if(fp==NULL)
    {
        printf("Could not open the file");
        return 0;
    }
    printf("\nContents of %s:\n\n",filename);
    ch = fgetc(fp);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch = fgetc(fp);
    }
    return 0;
}
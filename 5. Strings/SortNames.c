#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][30],temp[30];
    int n,i,j;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    fflush(stdin);
    printf("Enter the names of students:\n");
    for(i=0;i<n;i++)
    {
        printf("Student %d: ",i+1);
        gets(str[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(str[j],str[j+1])>0)
            {
               strcpy(temp,str[j]);
               strcpy(str[j],str[j+1]);
               strcpy(str[j+1],temp);
            }
        }
    }
    printf("Names of students are:\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",str[i]);
    }
    return 0;
}
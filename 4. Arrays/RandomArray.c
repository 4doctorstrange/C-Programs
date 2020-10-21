#include<stdio.h>
#include<stdlib.h>
int main()
{
    int array[10],random_num,i;
    for(i=0;i<10;i++)
    {
        random_num = rand()%10;
        array[i] = random_num;
    }
    printf("Random numbers:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
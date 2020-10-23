#include<stdio.h>
int main()
{
    int array[] = {1,2,3,4,5};
    int *ptr1 = array;
    int *ptr2 = &array[4];
    while(ptr1<=ptr2)
    {
        printf("%d ",*ptr1);
        ptr1++;
    }
    return 0;
}
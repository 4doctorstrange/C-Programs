#include <stdio.h>
#include <string.h>
int main() {
    int n;
    scanf("%d", &n);
    int sum=0,t=0;

    while(n>0){
        t=n%10;
        sum=sum+t;
        n=n/10;
    }
    printf("Sum of digits of the number is : %d ",sum);
    return 0;
}
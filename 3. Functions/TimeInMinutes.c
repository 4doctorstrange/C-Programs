#include<stdio.h>
int to_minutes(int hours, int minutes);
int main()
{
    int hours,minutes;
    printf("Enter hours and minutes: ");
    scanf("%d %d",&hours,&minutes);
    minutes = to_minutes(hours,minutes);
    printf("Time in minutes: %d",minutes);
    return 0;
}
int to_minutes(int hours,int minutes)
{
    int result = hours*60+minutes;
    return result;
}
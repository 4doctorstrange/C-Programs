#include<stdio.h>
#define hr for(int i=0;i<72;i++) printf("-");
typedef struct 
{   
    int hours;
    int minutes;
}TIME;
TIME add(TIME,TIME);
TIME sub(TIME,TIME);
void display(TIME,char name[]);
int main()
{
    int option = 0;
    TIME t1,t2,sum,diff;
    do
    {
        printf("\n**********************MAIN MENU***********************\n");
        printf("1. Read the times\n");
        printf("2. Display the times\n");
        printf("3. Add the times\n");
        printf("4. Subtract the times\n");
        printf("5. Exit\n");
        printf("Enter the option: ");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
            printf("Enter the first time in hours and minutes: ");
            scanf("%d %d",&t1.hours,&t1.minutes);
            printf("Enter the second time in hours and minutes: ");
            scanf("%d %d",&t2.hours,&t2.minutes);
            break;
            case 2:
            display(t1,"T1");
            display(t2,"T2");
            break;
            case 3:
            sum = add(t1,t2);
            display(sum,"SUM");
            break;
            case 4:
            diff = sub(t1,t2);
            display(diff,"DIFFERENCE");
            break;
        }
    } while (option!=5);
    return 0;
}
TIME add(TIME t1, TIME t2)
{
    TIME sum;
    sum.minutes = t1.minutes+t2.minutes;
    sum.hours = t1.hours+t2.hours;
    if(sum.minutes>60)
    {
        sum.minutes = sum.minutes%60;
        sum.hours+=1;
    }
    return sum;
}
TIME sub(TIME t1, TIME t2)
{
    TIME diff;
    if(t1.hours>t2.hours)
    {
        diff.hours = t1.hours-t2.hours;
        diff.minutes = t1.minutes - t2.minutes;
    }
    else
    {
        diff.hours = t2.hours-t1.hours;
        diff.minutes = t2.minutes -t1.minutes;
    }
    if(diff.minutes<0)
    {
        diff.minutes+=60;
        diff.hours-=1;
    }
    return diff;
}
void display(TIME t,char name[])
{
    printf("\n");
    hr;
    printf("\n");
    printf("| %-20s |","NAME");
    printf("| %-20s |","HOURS");
    printf("| %-20s |","MINUTES");
    printf("\n");
    hr;
    printf("\n");
    printf("| %-20s |",name);
    printf("| %-20d |",t.hours);
    printf("| %-20d |",t.minutes);
    printf("\n");
    hr;
    printf("\n");

}
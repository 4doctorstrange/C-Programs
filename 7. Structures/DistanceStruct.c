#include<stdio.h>
#define hr for(int i=0;i<72;i++) printf("-");
typedef struct 
{   
    int metres;
    int kilometres;
}DISTANCE;
DISTANCE add(DISTANCE,DISTANCE);
DISTANCE sub(DISTANCE,DISTANCE);
void display(DISTANCE,char name[]);
int main()
{
    int option = 0;
    DISTANCE d1,d2,sum,diff;
    do
    {
        printf("\n**********************MAIN MENU***********************\n");
        printf("1. Read the distances\n");
        printf("2. Display the distances\n");
        printf("3. Add the distances\n");
        printf("4. Subtract the distances\n");
        printf("5. Exit\n");
        printf("Enter the option: ");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
            printf("Enter the first distance in kilometres and metres: ");
            scanf("%d %d",&d1.kilometres,&d1.metres);
            printf("Enter the second distance in kilometres and metres: ");
            scanf("%d %d",&d2.kilometres,&d2.metres);
            break;
            case 2:
            display(d1,"D1");
            display(d2,"D2");
            break;
            case 3:
            sum = add(d1,d2);
            display(sum,"SUM");
            break;
            case 4:
            diff = sub(d1,d2);
            display(diff,"DIFFERENCE");
            break;
        }
    } while (option!=5);
    return 0;
}
DISTANCE add(DISTANCE d1, DISTANCE d2)
{
    DISTANCE sum;
    sum.metres = d1.metres+d2.metres;
    sum.kilometres = d1.kilometres+d2.kilometres;
    if(sum.metres>1000)
    {
        sum.metres = sum.metres%1000;
        sum.kilometres+=1;
    }
    return sum;
}
DISTANCE sub(DISTANCE d1, DISTANCE d2)
{
    DISTANCE diff;
    if(d1.kilometres>d2.kilometres)
    {
        diff.kilometres = d1.kilometres-d2.kilometres;
        diff.metres = d1.metres - d2.metres;
    }
    else
    {
        diff.kilometres = d2.kilometres-d1.kilometres;
        diff.metres = d2.metres -d1.metres;
    }
    if(diff.metres<0)
    {
        diff.metres+=1000;
        diff.kilometres-=1;
    }
    return diff;
}
void display(DISTANCE d,char name[])
{
    printf("\n");
    hr;
    printf("\n");
    printf("| %-20s |","NAME");
    printf("| %-20s |","KILOMETRES");
    printf("| %-20s |","METRES");
    printf("\n");
    hr;
    printf("\n");
    printf("| %-20s |",name);
    printf("| %-20d |",d.kilometres);
    printf("| %-20d |",d.metres);
    printf("\n");
    hr;
    printf("\n");

}
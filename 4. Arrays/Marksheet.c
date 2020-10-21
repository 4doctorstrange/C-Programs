#include<stdio.h>
int main()
{
    int marks[5][3],i,j,total_marks[5] = {0},highest[3] = {0};
    float avg[5],class_avg = 0.0;
    printf("Enter data\n");
    printf("******************************");
    for(i=0;i<5;i++)
    {
        printf("\nEnter the marks obtained by student %d in:\n",i+1);
        for(j=0;j<3;j++)
        {
            printf("Subject %d: ",j+1);
            scanf("%d",&marks[i][j]);
            total_marks[i]+=marks[i][j];
        }
    }
    for(i=0;i<5;i++)
    {
        avg[i] = (float)total_marks[i]/3;
        class_avg += avg[i]; 
    }
    class_avg /= 5;
    printf("Results:\n");
    for(i=0;i<5;i++)
    {
        printf("\nStudent %d\n",i+1);
        for(j=0;j<3;j++)
        {
            printf("Marks in subject %d = %d\n",j+1,marks[i][j]);
        }
        printf("\nTotal Marks = %d\n",total_marks[i]);
        printf("\nAverage marks = %f\n",avg[i]);
    }
    printf("\nClass Average = %f\n",class_avg);
    for(j=0;j<3;j++)
    {
        highest[j] = marks[0][j];
        for(i=1;i<5;i++)
        {
            if(marks[i][j]>highest[j])
                highest[j] = marks[i][j];
        }
    }
    for(j=0;j<3;j++)
    {
        printf("\nHight marks in subject %d = %d",j+1,highest[j]);
    }
    return 0;
}
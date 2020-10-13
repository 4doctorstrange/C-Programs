#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2;
    printf("Enter coordinates of first point: ");
    scanf("%d %d",&x1,&y1);
    printf("Enter coordinates of second point: ");
    scanf("%d %d",&x2,&y2);
    float distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("Distance between (%d,%d) and (%d,%d) is %f units",x1,y1,x2,y2,distance);
    return 0;
}
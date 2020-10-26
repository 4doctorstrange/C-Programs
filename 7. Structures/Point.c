#include<stdio.h>
#include<math.h>
int main()
{
    typedef struct point
    {
        float x,y;
    }POINT;
    POINT p1,p2;
    printf("Enter the coordinates of first point: ");
    scanf("%f %f",&p1.x,&p2.y);
    printf("Enter the coordinates of second point: ");
    scanf("%f %f",&p2.x,&p1.y);
    float distance = sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
    printf("Distance: %.2f",distance);
    return 0; 
}
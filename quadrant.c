#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter point1 \n");
    scanf("%f",&x);
    printf("Enter point2 \n");
    scanf("%f",&y);
    if(x==0 && y==0)
        printf("points lies on origin");
    else if(x>0 && y>0)
        printf("1st Quadrant");
    else if(x<0 && y>0)
        printf("2nd Quadrant");
    else if(x<0 && y<0 )
        printf("3rd Quadrant");
    else if(x>0 &&y<0)
        printf("4th quadrant");
    else if(x==0)
        printf("point on y-axis");
    else
        printf("point on x-axis");
}
#include<stdio.h>
int main()
{
    float radius,area,circum;
    printf("Enter radius of circle \n");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    circum=2*3.14*radius;
    printf("Area of circle :%.2f \n",area);
    printf("Circumference of circle :%.2f",circum);
    return 0;
}
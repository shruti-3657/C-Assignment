#include<stdio.h>
int main()
{
    float h,r,surface,volume;
    printf("Enter radius of cylinder\n");
    scanf("%f",&r);
    printf("Enter height of cylinder\n");
    scanf("%f",&h);
    surface=(2*3.14*r*r)+(2*3.14*r*h);
    volume=3.14*r*r*h;
    printf("Surface area of cylinder :%.2f \n",surface);
    printf("Volume of cylinder :%.2f \n",volume);
    return 0;


}
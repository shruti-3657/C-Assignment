#include<stdio.h>
int main()
{
    float l,b,h,surface,volume;
    printf("Enter length of cuboid \n");
    scanf("%f",&l);
    printf("Enter breadth of cuboid \n");
    scanf("%f",&b);
    printf("Enter height of cuboid \n");
    scanf("%f",&h);
    surface=2*((l*b)+(l*h)+(b*h));
    volume=l*b*h;
    printf("Surafce area of cuboid:%2.f\n",surface);
    printf("volume of cuboid:%.2f",volume);
    return 0;
}
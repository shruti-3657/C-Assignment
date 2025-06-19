#include<stdio.h>
int main()
{
    float r,area,circum,volume;
    int option;
    printf("Enter radius \n");
    scanf("%f",&r);
    printf("\n 1.Area of circle");
    printf("\n 2. circumference of circle");
    printf("\n 3. Volume of sphere");
    printf("\nEnter option\n");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
        area=3.14*r*r;
        printf("Area of circle:%.2f",area);
        break;
        case 2:
        circum=2*3.14*r;
        printf("Circumference of circle:%2.f",circum);
        break;
        case 3:
        volume=(4/3)*3.14*r*r*r;
        printf("Volume of sphere :%.2f",volume);
        break;
    }
    return 0;
    
}
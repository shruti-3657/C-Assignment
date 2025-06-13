#include<stdio.h>
int main()
{
    float h,w,l;
    float dw,dh;
    float ww,wh;
    float walla,doora,windowa,painta,roofa;
    printf("enter length of room\n");
    scanf("%f",&l);
    printf("enter width of room\n");
    scanf("%f",&w);
    printf("enter height of room\n");
    scanf("%f",&h);
    printf("enter  height of door\n");
    scanf("%f",&dh);
    printf("enter  width of door\n");
    scanf("%f",&dw);
    printf("enter  height of window\n");
    scanf("%f",&wh);
    printf("enter  width of window\n");
    scanf("%f",&ww);
    walla=2*(l+w)*h;
    doora=dh*dw;
    windowa=2*(wh*ww);
    painta=walla-doora-windowa;
    roofa=l*w;
    printf("Area of to be painted:%.2f \n",painta);
    printf("Area to be whitewashed(roof):%.2f",roofa);
    return 0;

}
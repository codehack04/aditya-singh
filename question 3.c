#include<stdio.h>
int main()
{
    int r,d,circumference,area;
    printf("enter the radius of the circle\n");
    scanf("%d",&r);
    d=r*2;
    circumference=2*3.14*r;
    area=3.14*r*r;
    printf("diameter=%d",&d);
    printf("circumference=%d",&circumference);
    printf("area=%d",&area);
    return 0;
    
}
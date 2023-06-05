#include<stdio.h>
#define areacircle(a) (3.14*a*a)
void main()
{
    float r,area;
    printf("enter the radius:");
    scanf("%f",&r);
area=areacircle(r);
printf("area of circle is=%f",area);
}
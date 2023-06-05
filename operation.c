#include<stdio.h>
int main()
{
    int a=6, b=8, c=5, d=5;
    float x,y;
    x= a/b*c-d;
    y= a/b*(c-d);
    printf("the result is : %.2f",x);
    printf("the result is : %.2f",y);
    return 0;
}
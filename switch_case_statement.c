#include<stdio.h>
#define pie 3.14
void main()
{
    int choice;
    printf("1 find the area of circle:\n 2 find the area of rectangle \n 3 find the area of triangle:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:{
            int r;
            float circle;
            printf("enter the radius:");
            scanf("%d",&r);
            circle=pie*r*r;
            printf("%f",circle);
            break;


        }
        case 2:{
            int l,b;
            float rect;
            printf("enter the length and breath:");
            scanf("%d %d",&l,&b);
            rect=l*b;
            printf("%f",rect);
            break;
        }
        case 3:{
            int l,b;
            float triangle;
            printf("enter the length and breath:");
            scanf("%d %d",&l,&b);
            triangle=1.5*l*b;
            printf("%f",triangle);
            break;

        }
    }
}
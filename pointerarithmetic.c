#include<stdio.h>
int main()
{
    int a,b;
    int *p1,*p2;
    printf("enter the two numbers:");
    scanf("%d %d",&a,&b);
    p1=&a;
    p2=&b;
    printf("%d is at %u,%d is at %d",*p1,p1,*p2,p2);
    printf("(*p1)+(*p2)=%d",(*p1)+(*p2));
    printf("(*p1)+(*p2)=%d",(*p1)*(*p2));
    printf("(*p1)-(*p2)=%d",(*p1)-(*p2));
    printf("(*p1)/(*p2)=%d",(*p1)/(*p2));
    printf("(*p1)%(*p2)=%d",(*p1)%(*p2));
}
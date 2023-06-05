#include<stdio.h>
void main()
{
    int num[5];
    for(int i=0;i<5;i++)
    {
        printf("enter the numbers:");
        scanf("%d",&num[i]);
    }
    for(int i=0;i<5;i++)
    {
        num[i]=num[i]*3;

    }
    printf("after multiplying each element:\n");
    for(int i=0;i<5;i++)
    {
        printf("\n %d",num[i]);
    }
    printf("\n");
}
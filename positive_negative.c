#include<stdio.h>
main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("the given number is negative");
    }
    else{
        printf("given number is positive");
    }
}
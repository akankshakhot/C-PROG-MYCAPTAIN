#include<stdio.h>
main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num>=1 && num<=100)
    {
        printf("the given number is within the range");
    }
    else{
        printf("given number is out of the range");
    }
}
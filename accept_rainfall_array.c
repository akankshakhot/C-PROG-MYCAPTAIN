#include<stdio.h>
void main()
{
    float avgrain=0;
    int weekcount=1;
    float argresult=0;
    printf("accept rainfall:");
    scanf("%f",&avgrain);
    for(weekcount=1;weekcount<7;weekcount++)
    {
        printf("enter the week days and average rainfall:\n");
        scanf("%f",&avgrain);
        weekcount=weekcount++;
    }
}
#include<stdio.h>
void main()
{
    int num,first,middle,last,sum,rem;
    printf("enter the three digit number:");
    scanf("%d ",&num);
    first=num/100;
    rem=num%10;
    last=rem%10;
    middle=rem/10;
    sum=first+middle+last;
    printf("first digit:%d \n middle digit: %d \n last digit: %d \n",first,middle,last );
    printf("the sum of 3 digit is: %d",sum);

}
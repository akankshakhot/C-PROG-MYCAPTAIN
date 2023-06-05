#include<stdio.h>
void main()
{
    char a;
    a=strcmp("apple","zoo");
    if(a==0)
    {
        printf("strings are equal");

    }
    else{
        printf("strings are not equal");
    }
    printf("\n value of result :%d",a);
}
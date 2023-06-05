#include<stdio.h>
void main()
{
    
    char source[]="seed";
    char target[]="welcome to";
    strcat(target ,source);
    printf("the string after concatenation is:%s",target);
}
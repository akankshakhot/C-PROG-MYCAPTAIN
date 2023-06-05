#include<stdio.h>
void main()
{
    char str[20];
    int i=0;
    printf("enter the string\n");
    gets(str);
    printf("\n the string with alternate character is:\n");
    for(i=0;i<strlen(str);i=i+2)   //strlen==gives the length of string
    printf("%c",str[i]);
}

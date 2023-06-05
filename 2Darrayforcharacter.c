#include<stdio.h>
void dispNames(char arr[][20]);
void main()
{
    char custNames[5][20];
    int i;

    for(i=0;i<5;i++)
    gets(custNames[i]);
    dispNames(custNames);
}

void dispNames(char arr[][20])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("the character in the array are:");
        puts(arr[i]);
    }
}
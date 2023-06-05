#include<stdio.h>
void displaymarks(int[],int);
int main()
{
    int marks[5]={6,7,8,90,3};
    displaymarks(marks,5);
}


void displaymarks(int marks[],int num)   //num==size
{
    int i;
    for(i=0;i<num;i++)
    {
        printf("%d \t",marks[i]);
    }
}
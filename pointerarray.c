#include<stdio.h>
int displaymarks(int *,int);
void main()
{
    int array[5]={1,2,3,4,5};
    displaymarks(array,5);

}
int displaymarks(int *ptemp,int number)
{
    int i;
    for(i=0;i<number;i++)
    {
        printf("%d \t",*(ptemp+i));
    }
}

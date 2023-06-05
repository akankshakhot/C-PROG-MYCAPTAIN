#include<stdio.h>
void main()
{
    char arr[20],rev[20];
    int i,j,count=0;
    printf("enter the string:");
    gets(arr);
    printf("the srting after reverse is:%s\n",arr);
    //find out lenfth of the string
    while(arr[count]!='\0')  //\0 null
    {
        count++;
    }
    j=count-1;
    //reverse the string by swapping
    for(int i=0;i<count; i++)
    {
        rev[ i]=arr[j];
        j--;
    }
    printf("\nstring after reverse is:%s \n",rev);
}
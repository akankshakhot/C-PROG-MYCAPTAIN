#include<stdio.h>
void main()
{
    int array[5]={1,2,3,4,5};
    int searchval;
    printf("enter the value you want to search:");
    scanf("%d",&searchval);
}

void searchvalue(int array[],int size,int searchval)
{
    for (int i=0;i<size;i++)
    {
        if(array[i]== searchval)
        {
            printf("value present at index no:%d",i);
        }
    }
    printf("value does not exist");
}

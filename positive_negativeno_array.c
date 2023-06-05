#include<stdio.h>
void main()
{
    int count[5],n,i,positive=0,negative=0,zero=0;
    printf("\n enter number of elements:");
    scanf("%d",&n);
    printf("enter the %d array elements:\n",n);
    for(i=0;i<n;i++)
{
    scanf("%d",&count[i]);
    if(count[i]>0)
    {
        positive++;
    }
    if(count[i]<0)
    {
        negative++;
    }
    if(count[i]==0)
    {
        zero++;
    }
}
printf("\n count of positive number is %d:",positive);
printf("\n count of negative number is %d:",negative);
printf("\n count of zero number is %d:",zero);
}
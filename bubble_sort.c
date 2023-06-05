#include<stdio.h>
void main()
{
  int arr[5]={11,4,12,7,5},i,j,n=5,temp;
  printf("\n using buble sort technique before sorting elements are:");
  for(i=0;i<n;i++)
  printf("%d\t",arr[i]);     //print element before sort
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-1-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;

        }
    }
  }
  printf("\n after sorting elements are:\n");
  for(i=0;i<n;i++)
  printf("%d\t",arr[i]);
}
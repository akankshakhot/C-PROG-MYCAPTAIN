#include<stdio.h>
void main()
{
    int marks[10];  //array declaration
    for (int i=0;i<10;i++)
    {
          printf("enter the element value:");
          scanf("%d",&marks[i]);   //%d==format specifier
        
    }
  for( int i=0;i<10;i++)
  {
    printf("\n%d",marks[i]);
  }

}
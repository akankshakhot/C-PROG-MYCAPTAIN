#include<stdio.h>
void main()
{
     int arr[5][5],i,j,rows,columns;
    printf("enter the number of roes:\n");
    scanf("%d",&rows);
    printf("enter the number of columns:\n");
    scanf("%d",&columns);
    printf("\n enter the elements od %d * %d matrix",rows,columns);
    for (i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
    {
        scanf("%d",&arr[i][j]);
    }
    }
    printf("\n elements of matrix are:");
    for (i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
    {
        printf("%d \t",arr[i][j]);
    }
    printf("\n");
    }

}
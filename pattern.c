#include<stdio.h>
void main()
{
    int n;
    printf("enter number of lines:");
    scanf("%d",&n);
    star(n);
}

    void star(int n)
    {
        int i,j;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("*\t");

            }
            printf("\n");
        }
    }

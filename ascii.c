#include<stdio.h>
main()
{
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    //ch=getchar();
    if(ch>=48 && ch<=57)  //between 48 to 57 there are digits
    {
        printf("it is a digit");
    }
    else{
        printf("it's not a digit");
    }
}
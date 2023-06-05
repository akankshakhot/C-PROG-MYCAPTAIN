#include<stdio.h>
int main()
{
    float firstnum,secondnum,ans;
    char operator;
     
     printf("enter the calculation you want:");
     scanf("%f %c %f",&firstnum,&operator,&secondnum);

     switch(operator)
     {
        case '/': 
        ans=firstnum/secondnum;
        break;
        case '+':
        ans=firstnum+secondnum;
        break;
        case '-':
        ans=firstnum-secondnum;
        break;
        case 'x':
        ans=firstnum*secondnum;
        break;
        case '^':
        ans=pow(firstnum,secondnum);
        break;
        case ' ':
        ans=sqrt(secondnum);
        break;
        default: 
        printf("fail to execute due to wrong information");

     }
     printf("%.2f %c %.2f=%.2f\n\n",firstnum,operator,secondnum,ans);
     return 0;

}
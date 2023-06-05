#include<stdio.h>
void main()
{
    int a=10;
    //auto int a=10;
    printf("a=%d",a);
    function1();
    function2();

}
function1()
{
    int a=20;
    printf("a=%d",a);
}
function2()
{
    int a=30;
    printf("a=%d",a);
}
//we can use same variable because there are different functn
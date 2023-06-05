#include<stdio.h>
char* strcpy(char stringcopy[],char str[]);
void main()
{
    char str="well done";
    char stringcopy[20];
    strcpy(stringcopy,str);
}
char* strcpy(char stringcopy[],char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        stringcopy[i]=str[i];
        i++;
    }
    stringcopy[i]='\0';
    printf("\n copied string is=%s",stringcopy);
    return stringcopy;
}
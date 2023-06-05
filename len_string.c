#include<stdio.h>
void main()
{
    int length;
    char studname[]="pooja";
    char stringcopy[20];
    length=strlen(studname);
    printf("the length of the string is:%d",length);
    strcpy(stringcopy,studname);
    //printf("copy string to another string is:\n target=%s\t source= %s",stringcopy,studname);
    puts(stringcopy);
    }
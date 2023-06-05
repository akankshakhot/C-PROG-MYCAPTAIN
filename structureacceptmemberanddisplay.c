#include<stdio.h>
struct book
{
    int id;
    char name[20];
    char author[20];
};
void main()
{
    struct book b;
    printf("\n enter book Id:");
    scanf("%d",&b.id);
    printf("\n enter book name:");
    scanf("%s",b.name);
    printf("\n enter the name of author:");
    scanf("%s",b.author);

    printf("book details are:\n");
    printf("book id: %d \n",b.id);
    printf("book name:%s\n",b.name);
    printf("book author: %s",b.author);
    
}
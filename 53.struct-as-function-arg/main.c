#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>


struct book{
char name[50];
char author[50];
int id;


};

void printbook(struct book mybook);
int main()
{

  struct book book1;
    struct book book2;
strcpy(book1.name,"C programming");
strcpy(book1.author,"Bappy");
book1.id=123;
strcpy(book2.name,"rubiks cube");
strcpy(book2.author,"someone");
book2.id=234;

printbook(book1);
printbook(book2);


}

void printbook(struct book mybook){
printf("Book name:%s\n",mybook.name);
printf("Author:%s\n",mybook.author);
printf("Book ID:%d\n",mybook.id);


}

#include <stdio.h>
#include <stdlib.h>
typedef struct{
char name[50];
char author[50];
int id;
} Book;
void printBook(Book);
int main()
{
    Book book1;
    strcpy(book1.author,"Bappy Rahsan");
    strcpy(book1.name,"Start Coding Today");
    book1.id=76756;
printBook(book1);


    return 0;
}

void printBook(Book book){
printf("Name:%s\n",book.name);
printf("Author:%s\n",book.author);
printf("ID:%d\n",book.id);
return 0;

}

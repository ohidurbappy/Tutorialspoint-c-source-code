#include <stdio.h>
#include <stdlib.h>

struct Books{
char name[50];
char author[50];
int id;


};
void printbook(struct Books *book);
int main()
{
    struct Books book1;

    strcpy(book1.name,"Intro to coding");
    strcpy(book1.author,"bappy");
    book1.id=467576556;
    printbook(&book1);
    return 0;
}


void printbook(struct Books *book){

printf("Book Name:%s\n",book->name);
printf("Author:%s\n",book->author);
printf("Book Id:%d\n",book->id);

}

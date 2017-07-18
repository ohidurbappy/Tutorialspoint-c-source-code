#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct book{
char name[50];
char author[50];
int id;

};
int main()
{
  struct book book1;
  strcpy(book1.name,"easy coding in C");
strcpy(book1.author,"Bappy");
book1.id=23323;
  printf("Book 1 name:%s\n",book1.name);
printf("Author: %s\n",book1.author);
printf("Book Id:%d\n",book1.id);


}

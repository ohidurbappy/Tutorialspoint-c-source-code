#include <stdio.h>
#include <stdlib.h>

int main()
{
   int c;
   printf("enter some text:");
   c=getchar();// takes only a single character

   printf("\nYou entered:");
   putchar(c);
   return 0;
}

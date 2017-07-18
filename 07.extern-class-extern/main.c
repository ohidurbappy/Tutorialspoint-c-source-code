#include <stdio.h>
#include <stdlib.h>

extern void write_extern(); // extern is declared in other file
extern int x;
int main()
{
   while (x--){
    write_extern();
    printf("\r\n");
   }
}

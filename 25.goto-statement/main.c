#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a=1;
   LOOP:do{
   if(a==15){
    printf("--------------\n");
    a++;
    goto LOOP;
   }
   printf("Value of a is %d\n",a);
   a++;
   }while(a<=20);
}

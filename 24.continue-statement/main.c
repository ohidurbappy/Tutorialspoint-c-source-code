#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x=1;

   do{

    if(x==15){
            x++;
    printf("--------------------\n");
        continue;
    }
    printf("Value of x  is : %d\n",x);
    x++;
   }while(x<20);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a=7;
   int b=0;
   if(b==0){
    fprintf(stderr,"Division by zero\nExisting....");
    exit(EXIT_FAILURE);
   }else{
   printf("The result is:%f",a/b);
exit(EXIT_SUCCESS);
   }
}

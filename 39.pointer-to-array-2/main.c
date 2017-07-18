#include <stdio.h>
#include <stdlib.h>

int main()
{
   int balance[5]={2,4,1,6,10};
   int *p;
   p=balance;

   printf("accessing array with pointer\n");

   for(int j=0;j<5;j++){
    printf("*(p+%d) : %d\n",j,*(p+j));

   }
   printf("accessing array with array address\n");

   for(int i=0;i<5;i++){

    printf("*(balance + %d) : %d\n",i,*(balance+i));


   }
}

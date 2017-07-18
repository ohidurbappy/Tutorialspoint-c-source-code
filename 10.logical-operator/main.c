#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a=3;
   int b=5;
   if(a && b){
    printf("Condition is true\n");
   }
   if(a || b){
    printf("Condition is true\n");
   }

   if(!a){
    printf("Condition is true\n");
   }else{
   printf("condition is false\n");
   }

   // now changing the value of a
   a=0;
     if(a && b){
    printf("Condition is true\n");
   }else{
   printf("Condition is false\n");
   }
   if(a || b){
    printf("Condition is true\n");
   }

   if(!a){
    printf("Condition is true");
   }else{
   printf("condition is false");
   }
}

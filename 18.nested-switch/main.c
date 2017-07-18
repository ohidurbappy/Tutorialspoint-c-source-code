#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a=100;
 int b=200;

 switch(a){
 case 100:
     printf("This part is of outer switch\n");
     switch(b){
        case 200:
            printf("This part is of inner switch\n");
            break;
     }
 }
    printf("exact value of a is :%d\n",a);
    printf("exact value of b is :%d\n",b);


}

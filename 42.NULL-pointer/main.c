#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr=NULL;

    printf("NULL Pointer *ptr address is %x\n",ptr);

    if(ptr){
        printf("Yes"); // ptr doesnt exist
    }
}

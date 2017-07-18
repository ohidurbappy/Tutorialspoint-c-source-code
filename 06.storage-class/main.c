#include <stdio.h>
#include <stdlib.h>

int func();

static int count=5; // can not be used outside this file


int main()
{
    auto int x=4;
    register int miles;
    while(count--){
        printf("i is now %d and count is %d \r\n",func(),count);

    }

}

int func(void){
static int i=5; // the value of i will remain during the life time of the program between the function calls\

i++;
return i;
}

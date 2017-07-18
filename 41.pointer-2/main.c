#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var1=30;
    int *ip;
    ip=&var1;

    printf("Address of var1 is : %x\n",&var1);
    printf("Address stored in ip variable is : %x\n",ip);
    printf("value of *ip is %d",*ip);
    return 0;
}

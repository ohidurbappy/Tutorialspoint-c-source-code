#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val;
    int *ptr;
    int **pptr;
    val=300;
    ptr=&val;

    pptr=&ptr;

    printf("Value of val is %d\n",val);
    printf("Value of *ptr is %d\n",*ptr);
    printf("value of **pptr is %d\n",**pptr);
}

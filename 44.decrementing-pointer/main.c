#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[]={23,7,11};

    int *ptr;
    ptr=&x[2];

    for(int j=3;j>0;j--){
        printf("value of x[%d] is : %d\n",j,*ptr);
        printf("Address of ptr is %x\n",ptr);
        ptr--;

    }
}

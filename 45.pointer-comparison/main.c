#include <stdio.h>
#include <stdlib.h>

const int MAX=3;

int main()
{
int var[]={3,9,10};

int i,*ptr;
ptr=var;
i=0;
while(ptr<=&var[MAX-1]){
    printf("Address of var[%d] is :%x\n",i,ptr);
    printf("Value of var[%d] is %d\n",i,*ptr);
    i++;
    ptr++;
}
return 0;
}

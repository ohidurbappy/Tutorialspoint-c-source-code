#include <stdio.h>
#include <stdlib.h>

const int MAX=3;
int main()
{
  int i,*ptr;

int x[]={12,98,23};
ptr=x;

for(i=0;i<MAX;i++){
    printf("Value of ( ptr ) x[%d] is %d\n",i,*ptr);
    printf("Address of ptr is %d\n",ptr);
    ptr++;
}
}

#include <stdio.h>
#include <stdlib.h>

const int MAX=3;

int main()
{
 int var[]={12,98,34};

 int *ptr[MAX];
 for(int i=0;i<MAX;i++){
    ptr[i]=&var[i];

 }

 for(int j=0;j<MAX;j++){
    printf("Value of ptr[%d] is : %d\n",j,*ptr[j]);

 }
}

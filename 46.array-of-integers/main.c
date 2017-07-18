#include <stdio.h>
#include <stdlib.h>

const int MAX=3;

int main()
{
    int i=0;
    int var[]={13,90,16};
    while(i<MAX){
        printf("Var[%d]  : %d\n",i,var[i]);
        i++;
    }
    return 0;
}

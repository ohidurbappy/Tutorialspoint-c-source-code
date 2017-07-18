#include <stdio.h>
#include <stdlib.h>

int main()
{
    int element[10];

    for(int i=0;i<10;i++){
        element[i]=i+10;

    }

    for(int j=0;j<10;j++){
        printf("element[%d]=%d\n",j,element[j]);
    }
}

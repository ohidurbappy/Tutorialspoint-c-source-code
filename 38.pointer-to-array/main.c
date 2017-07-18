#include <stdio.h>
#include <stdlib.h>

int *x(){
static r[10];
for(int i=0;i<10;i++){
    r[i]=10+i;
}
return r;

}
int main()
{
    int *y;
    y=x();
    for(int j=0;j<10;j++){

    printf("*(y+%d) : %d\n",j,*(y+j));


    }
}

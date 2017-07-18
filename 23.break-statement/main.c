#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1;
    while(x<20){
        printf("Value of x is : %d\n",x);
        x++;
        if(x>15)break; //STOP EXECUTING THE LOOP WHEN CONDITION MEETS
    }
}

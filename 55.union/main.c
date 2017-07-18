#include <stdio.h>
#include <stdlib.h>

union Data{
int i;
float f;
char c[20];
}data;


int main()
{
    union Data mydata;
    printf("Size of data in union %d\n",sizeof(mydata));

    mydata.i=66;
    printf("%d\n",mydata.i);
   strcpy(mydata.c,"Hello");
    printf("%s\n",mydata.c);
    return 0;
}

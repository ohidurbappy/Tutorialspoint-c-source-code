#include <stdio.h>
#include <stdlib.h>

// variable definition
extern int x;
extern int y;
extern float f;

// function definition
int myFunction();

int main()
{
    // variable definition

int x,y;
float f;

// actual initialization

x+=y;
f=8.00/3.00;
printf("value of x: %d\r\n",x);
printf("value of f: %.2f",f);

    return 0;
}


int myFunction(){
return 0;
}

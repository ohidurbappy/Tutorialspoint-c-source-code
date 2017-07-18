#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=3;
    int y=8;


    int r;
    r=x;

    printf("%d\n",r);
    printf("%d\n",&r); // memory address location of r (&r)
    printf("%d\n",&y); // memory address location of y
    printf("x>y ?\n");


    x>y?printf("true"):printf("false"); // ternary operator


}

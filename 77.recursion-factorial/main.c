#include <stdio.h>
#include <stdlib.h>

int factorial(unsigned int x){
if(x<=1)
    return 1;
else
    return x*factorial(x-1); //recursive call to self

}
int main()
{
    int i=15;
    printf("Factorial of %d is %d",i,factorial(i));

    return 0;
}

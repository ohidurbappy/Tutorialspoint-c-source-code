#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a=60;
    unsigned int b=13;

    int c=0;

    c=a & b; // binary AND operator
    printf("%d\n",c);

    c=a | b; // binary OR operator
    printf("%d\n",c);

    c=a^b;  // binary XOR operator
    printf("%d\n",c);

    c=~a;   // binary ONEs complement
    printf("%d\n",c);

    c=a<<2; // binary LEFT shift
    printf("%d\n",c);

    c=a>>2; // binary RIGHT   shift
    printf("%d\n",c);
}

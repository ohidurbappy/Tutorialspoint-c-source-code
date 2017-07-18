#include <stdio.h>
#include <stdlib.h>

#define tokenpaster(n) \
    printf("token"#n"=%d",token##34)

int main()
{
    int token34=50;
    tokenpaster(34);

    return 0;
}

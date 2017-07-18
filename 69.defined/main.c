#include <stdio.h>
#include <stdlib.h>

#if !defined(MSG)
    #define MSG "WELCOME"
#endif
int main()
{
    printf("Here is : %s msg\n",MSG);
    return 0;
}

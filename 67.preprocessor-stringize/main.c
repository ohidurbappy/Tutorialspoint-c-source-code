#include <stdio.h>
#include <stdlib.h>

#define say_hello(void) \
                        printf("Hello\n")

#define welcome(a)    \
        printf("welcome  " #a "\n")


int main()
{
   say_hello();
welcome(user);
}

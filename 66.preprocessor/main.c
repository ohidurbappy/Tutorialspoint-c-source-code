#include <stdio.h>
#include <stdlib.h>

#include"myheader.h"

#define PI 3.1416
#undef PI //undefining PI

#ifndef MSG  // IF MSG NOT DEFINED
    #define MSG "WELCOME" // DEFINE MSG
#endif // MSG


int main()
{
    printf("%s\n",MSG);
    printf("%d\n",x);
    printf("File Name:%s\n",__FILE__);
    printf("Time:%s\n",__TIME__);
    printf("Date:%s\n",__DATE__);
    printf("Line:%d\n",__LINE__);
    printf("ANSI: %d\n",__STDC__);
    return 0;
}

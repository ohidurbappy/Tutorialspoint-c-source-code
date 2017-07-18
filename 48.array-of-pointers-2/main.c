#include <stdio.h>
#include <stdlib.h>

const int MAX=3;

int main()
{
char *names[]={"Bappy",
                "Ohidur",
                "Rahman"
};
for(int j=0;j<MAX;j++){
    printf("Value of names[%d] is %s\n",j,names[j]);
}

    return 0;
}

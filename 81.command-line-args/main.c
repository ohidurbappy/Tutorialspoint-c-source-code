#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    if(argc==2){
        printf("the supplied argument is :%s",argv[1]);
        getch();

    }

    if(argc>2){
        printf("too many arguments passed");
    }
    if(argc<2){
        printf("No argument passed");
        printf("\nName of the program is %s\n",argv[0]);

    }
}

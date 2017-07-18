#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen("demo.txt","a+");
    fprintf(fp,"this is a line");
    fputs("\nanother line\n ",fp);
    fclose(fp);
}

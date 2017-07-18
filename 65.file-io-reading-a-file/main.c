#include <stdio.h>
#include <stdlib.h>
int main()
{
char buff[100];

   FILE *fp;
   fp=fopen("demo.txt","a+");
   fgets(buff,255,fp);
   puts(buff);
   fgets(buff,255,(FILE*)fp);
   puts(buff);
    fclose(fp);
}

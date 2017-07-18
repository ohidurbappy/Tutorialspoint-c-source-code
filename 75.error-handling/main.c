#include <stdio.h>
#include <stdlib.h>
#include<errno.h>

extern int errno;

int main()
{

    FILE *fp;
    fp=fopen("unexist.txt","rb");
    if(fp==NULL){
           int errnum=errno;
        printf("Error No:%d\n",errno);
        perror("error printed by perror");
        fprintf(stderr,"Error Opening File:%s\n",strerror(errnum));

    }
return 0;

}

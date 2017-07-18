#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char name[200];
    strcpy(name,"Bappy Rahsan\n");

    char *description;

    description=malloc(200*sizeof(char));
    // description=calloc(200,sizeof(char)); ----same as above
    if(description==NULL){
        fprintf(stderr,"Error allocating memory");


    }else{
    strcpy(description,"Bappy is learning C programming\n");

    }
    printf("Name:%s\n",name);
    printf("Description:%s\n",description);

realloc(description,10);
printf("%s",description); // after reallocating thememory
free(description);
printf("%s",description); // after freeing the memory prints something odd chars
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int getseconds(unsigned int *sec);

int main()
{
unsigned int *sec;

getSeconds(&sec);

printf("The exact value is %ld\n",sec);

}

getSeconds(unsigned int *sec){

*sec=time(NULL);
return 0;
}

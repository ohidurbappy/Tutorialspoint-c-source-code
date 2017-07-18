#include <stdio.h>
#include <stdlib.h>
#include<stdarg.h>
double average(int num,...){
va_list valist ;
double sum=0.000;
int i;
va_start(valist,num);

for(i=0;i<num;i++){

    sum+=va_arg(valist,int);

}

va_end(valist);
return (double)sum/(double)num;



}
int main()
{
    printf("Average of 2,4,5,6 is %.5f",average(4,2,4,5,6)); // first parameter is the number of args provided
    return 0;
}

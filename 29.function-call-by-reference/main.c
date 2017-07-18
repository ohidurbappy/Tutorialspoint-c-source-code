#include <stdio.h>
#include <stdlib.h>
void swap(int *x,int *y);

int main()
{
int a=100;
int b=200;
printf("Before swap the value of a and b is %d and %d\n",a,b);

swap(&a,&b);

printf("after swap the value of a and b is %d and %d\n",a,b);
return 0;


}


void swap(int *x,int *y){
int temp;
temp=*x;
*x=*y;
*y=temp;
return;



}

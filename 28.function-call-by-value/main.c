#include <stdio.h>
#include <stdlib.h>
void swap(int x, int y);

int main()
{
int a=100;
int b=200;
printf("Value of a before swap is : %d\n",a);
printf("Value of b before swap is : %d\n",b);

swap(a,b);

printf("Value of a after swap is : %d\n",a);
printf("value of b after swap is : %d\n",b);
return 0;


}


void swap(int x,int y){
int temp;
temp=x;
x=y;
y=temp;
return;



}

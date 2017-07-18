#include <stdio.h>
#include <stdlib.h>

int max(int num1,int num2);

int main()
{
int x,y;
x=10;y=12;
int r;
r=max(x,y);
printf("The max num is : %d",r);
return 0;
}

int max(int num1,int num2){
int result;
if(num1>num2){
    result=num1;
}else{
result=num2;
}
return result;
}

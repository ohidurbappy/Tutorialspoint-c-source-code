#include <stdio.h>
#include <stdlib.h>

int sum(int a,int b);

int main()
{
    int a;
    int b;
    int c;
    a=10;b=20;
    printf("value of a in main() a=%d\n",a);
    c=sum(a,b);
    printf("value of c in main() c=%d\n",c);

}

int sum(int a,int b){
int sum;
printf("Value of a in sum() is : %d\n",a);

sum=a+b;
return sum;

}

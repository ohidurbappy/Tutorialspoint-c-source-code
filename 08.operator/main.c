#include <stdio.h>
#include <stdlib.h>

int main()
{
// C operator examples coding
// arithmetic operator
int a;
int b;
int c;
a=10;b=5;
c=a+b;
printf("c=a+b Ans: %d\n",c);
c=a-b;
printf("c=a-b ans: %d\n",c);
c=a*b;
printf("c=a*b ans: %d\n",c);
c=a/b;
printf("c=a/b ans: %d\n",c);
c=++a;
printf("a+1= %d\n",c);
c=--a;
printf("a-1= %d\n",c);

// relational operator
if(a==b){
    printf("a and b are equal\n");

}else{
printf("a and b are not equal\n");

}
if(a!=b){
    printf("a and b are not equal\n");
}else{
printf("a and b are equal\n");
}

if(a>b){
    printf("a is greater than b\n");
}else{
 printf("a is less than b\n");
 }

if(a<b){
    printf("a is smaller than b\n");
}else{
printf("a is not smaller than b\n");
}

if(a>=b){
    printf("a is either greater than or equal to b\n");
}else{
printf("a  is smaller than b\n");
}

if(a<=b){
    printf("a is either smaller than or equal to b\n");
}else{
printf("a  is greater than b\n");
}


}

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int i){
if(i==0)
    return 0;
if(i==1)
    return 1;
return fibonacci(i-1)+fibonacci(i-2);


}
int main()
{
    for(int x=0;x<40;x++){
  printf("%d\t",fibonacci(x));
    }
    return 0;
}

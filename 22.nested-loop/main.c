#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,j;
//FINDING THE PRIME NUMBERS BETWEEN 1 AND 100
  for (i=2;i<100;i++){
    for(j=2;j<=(i/j);j++)
        if(!(i%j)) break;
        if(j>(i/j)){printf("%d\t",i);}


  }
}

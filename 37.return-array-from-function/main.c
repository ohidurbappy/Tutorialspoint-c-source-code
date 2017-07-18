#include <stdio.h>
#include <stdlib.h>

int *getrandom(){
static int r[10];
int i;
srand((unsigned)time(NULL));
for(i=0;i<10;i++){
    r[i]=rand();
    printf("%d\n",r[i]);

}
return r;




}
int main()
{
  int *p; //pointer
  p=getrandom();
  int i;
  for(i=0;i<10;i++){

    printf("*(p+%d) : %d\n",i,*(p+i));
  }
}

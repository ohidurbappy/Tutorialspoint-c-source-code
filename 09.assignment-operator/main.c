#include <stdio.h>
#include <stdlib.h>

int main()
{

  int a=21;
  int c=0;
  printf("a=%d c= %d\n",a,c);

  c=a;
  printf("c=a ans:%d\n",c);
  c+=a;
  printf("c+=a ans:%d\n",c);
  c-=a;
  printf("c-=a ans:%d\n",c);
  c*=a;
  printf("c*=a ans:%d\n",c);
  c/=a;
  printf("c/=a ans:%d\n",c);


  c=200;
  c%=a;
  printf("c%%=a ans:%d\n",c);

  c<<=2;
  printf("c<<=2 ans:%d\n",c);

  c>>=2;
  printf("c>>=2 ans:%d\n",c);

  c&=a;
  printf("c&=a ans:%d\n",c);

  c^=a;
  printf("c^=a ans:%d\n",c);

  c|=a;
  printf("c|=a ans:%d\n",c);

}

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int e[3][4]={0,1,2,3,4,5,6,7,8,9,10,11};

  for(int i=0;i<3;i++){

    for(int j=0;j<4;j++){
        printf("element[%d][%d]=%d\n",i,j,e[i][j]);
    }
  }

  printf("\n\n\n");
  for(int i=0;i<4;i++){
    printf("\telement[%d][%d]=%d\n",0,i,e[0][i]);
  }

}

#include <stdio.h>
#include <stdlib.h>

int main()
{
struct{
unsigned int width;
unsigned int height;

}status1;

struct{
unsigned int width:1;
unsigned int height:1;
char x[2];

} status2;


printf("size of status1: %d\n",sizeof(status1));
printf("Size of status2 %d\n",sizeof(status2));
}

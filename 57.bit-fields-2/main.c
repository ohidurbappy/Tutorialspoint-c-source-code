#include <stdio.h>
#include <stdlib.h>
struct{
    unsigned int age:3;

}Age;
int main()
{
   Age.age=4;
   printf("%d\n",Age.age);

   Age.age=5;
   printf("%d\n",Age.age);

   Age.age=8; // exceeding the bit fields memory
   printf("%d\n",Age.age);
    return 0;
}

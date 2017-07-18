#include <stdio.h>
#include <stdlib.h>
#include<limits.h> // to know the limits of data types
#include<float.h>> // to know details of float data type , using FLT_* constants

int main()
{
    void *malloc(size_t size); // pointers to void

   printf("Storage size of int type is :%d\r\n" ,sizeof(int));
   printf("Storage size of float is : %d\r\n",sizeof(float));
    printf("Precision point of float: %d\r\n",FLT_DIG);
printf("The minimum positive value for float data type is %E\r\n",FLT_MIN);
printf("The maximum positive value for float data type is %E\r\n",FLT_MAX);


}

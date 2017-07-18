#include <stdio.h>
#include <stdlib.h>

double avg(int num[],int size);

int main()
{
int balance[5]={11,23,43,2,11};
double myavg;
myavg=avg(balance,5);
printf("Average is : %.2f",myavg);
return 0;
}


double avg(int num[],int size){
int i;
int sum=0;double avg=0;

for(i=0;i<size;i++){
    sum+=num[i];
}
avg=sum/size;
return avg;
}

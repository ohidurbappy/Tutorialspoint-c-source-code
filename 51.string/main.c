#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
 char name[6]={'h','e','l','l','o','\0'};
 printf("Greeting Message :  %s\n",name);

 char str1[12]="hello";
 char str2[12]="world";
 char str3[12];

 int len;
 strcpy(str3,str1);
 printf("%s\n",str3);
 strcat(str3,str2);
 printf("%s\n",str3);

 len=strlen(str3);
 printf("Length of string :%d\n",len);

 int cmp;
 cmp=
 strcmp("hello",str1);

 printf("comparison result : %d\n",cmp);
  cmp=
 strcmp("hellooooooy",str1);

 printf("comparison result : %d\n",cmp);
  cmp=
 strcmp("hell",str1);

 printf("comparison result : %d\n",cmp);

}

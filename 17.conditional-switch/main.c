#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
 char grade;
 printf("Enter your grade:");
 scanf("%c",&grade);
 printf("\n");
 switch(grade){
 case 'A':
     printf("Excellent !\n");
     break;
 case 'B':
 case 'C':
    printf("Well done..\n");
    break;
 case 'D':
    printf("You Passed !\n");
    break;
 case 'F':
    printf("better try next time...!");
    break;
 default:
    printf("Invalid grades .\n");
 }
}

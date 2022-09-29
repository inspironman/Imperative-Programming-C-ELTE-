#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
 
 
int main(int argc, char* argv[])
 
{
 
    int num;
    scanf("%d",&num);

     switch (num)
     {
     case 0:
         printf("%s","LOG - user signed in.");
         break;
    case 1:
         printf("%s","WARNING");
         break;
    case 2:
         printf("%s","ERROR - could not connect to server.");
         break;
     
     default:
         printf("%s"," FUCK OFF ");
         break;
     }
 
    return 0;
}
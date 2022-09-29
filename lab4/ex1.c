/*
1. Create a function which multiplies its parameter by -1. What happens if an unsigned value is passed as parameter?
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int func(int x)
{
    x = x * -1;
     return x ;
}
 
int main()
 
{
   int a = 5;
   
   printf("%d",func(a));

   return 0;
}

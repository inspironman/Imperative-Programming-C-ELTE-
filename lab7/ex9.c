//Write a function that expects two int pointers as parameters and returns the pointer pointing to a larger value.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
 
int large(int *a,int *b)
{
    if (*a > *b)
    {
        return *a;
    }
    else
    {
        return *b;
    }
    
}

int main(int argc, char* argv[])
 
{
   int a = 8;
   int b = 9;
   int *c = &a;
   int *d = &b;

   printf("%d",large(c,d));
    return 0;
}
 
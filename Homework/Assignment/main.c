#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "rle.h"

int main() 
{ 
   Encoded b = encoding("aabbcccddddddddddjjjkkk");
   for (int i = 0; i <= b.length; i++)
   {
       printf("(%c , %d)",b.arr[i].c,b.arr[i].n);
   }

   printf("\n");
   char* print = decoding(b);
   printf("%s",print);
   
   int q = strlen(print);

   for (int i = 0; i <= b.length; i++)
   {
       free(b.arr);
   }

    for (int i = 0; i <= b.length; i++)
   {
         for (int j = 0; j < b.arr[i].n; j++)
       {
            free(print);
       }
   }
   
   return 0;
}
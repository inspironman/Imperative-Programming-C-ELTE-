#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "rle.h"

int main() 
{ 
   char input[1024] ;
   printf("Please Enter the String.\n");
   scanf("%s",input);

   //Input Checking
   bool lowercase = true;
   for (int i = 0; i < strlen(input); i++)
   {
      if (input[i] >= 'a' && input[i] <= 'z')
      {
    
      }
      else
      {
        lowercase = false;
        break;
      }
   }

   if (lowercase == true)
   {
        Encoded* d = encoding(input);
        for (int i = 0; i < d->length ; i++)
        {
           printf("(%c , %d)",d->arr[i].c,d->arr[i].n);
        }

        printf("\n======================================================================================\n");
        free(d->arr);
        free(d);
   }
   else
   {
        printf("BAD INPUT !\n");
   }

      printf("Let's Check Decoding Function\n");

    Encoded *a = (Encoded*)malloc(1*sizeof(Encoded));
    a = reading(a);
    char* print = decoding(a);
    printf("%s\n",print);
    free(a);
    free(print);

   return 0;
}
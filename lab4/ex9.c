#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

 
char* high(char a[], char b[],int size)
{
   int i = 0;
   while(i < size)
   {
      int p = a[i];
      int q = b[i];

      if (p < q)
      {
         return a;
      }
      else if (q < p)
      {
         return b;
      }
      else
      {
         i++;
      }
      
      
   }
   
}
 
int main()
 
{
   
   char a[] = {"hello"};
   char b[] = {"Hello"};
   int s = sizeof(b)/sizeof(char);

   printf ("%s",high(a,b,s));
   return 0;
}
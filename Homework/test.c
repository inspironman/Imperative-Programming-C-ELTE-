#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

typedef struct Pair {
    char c;
    int n;
} Pair; 

typedef struct Encoded
{
    int length;
    Pair* arr;
} Encoded;
 
Encoded encoding (char input [255])
{
    int j = 0;
    Encoded b ;
    char current; 
    char previous; 
    int count=1; 
    int index=1; 
    Pair* a = (Pair*) malloc (j*sizeof(Pair));
    previous = input[0]; 
    while( (current=input[index]) != '\0')
    { 
        if(current==previous)
        { 
            count++; 
        } 
        else
        { 
            a[j].c = previous;
            a[j].n = count;
            Pair* a = (Pair*) realloc (a,j*sizeof(Pair));
            count=1; 
            previous=current; 
            j++;
        } 
        index++; 
    } 
    a[j].c = previous;
    a[j].n = count;
  
   b.length = j;
   b.arr = a;
   return b;
}

int main() 
{ 
   Encoded b = encoding("aaabbccc");
   for (int i = 0; i <= b.length; i++)
   {
       printf("(%c , %d)",b.arr[i].c,b.arr[i].n);
   }

   return 0;
}
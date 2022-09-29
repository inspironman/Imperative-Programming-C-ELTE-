#ifndef rle_h
#define rle_h
#include "rle.h"

Encoded encoding (char* input)
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

char* decoding (Encoded b)
{  
   int s = 0;
   char* out = (char*)malloc(s*sizeof(char));

     for (int i = 0; i <= b.length; i++)
   {
       for (int j = 0; j < b.arr[i].n; j++)
       {
           out[s] = b.arr[i].c;
           s++;
           char* out = (char*)realloc(out,s*sizeof(char));
       }
   }
//   printf("%d",strlen(out));
   return out;
}

#endif
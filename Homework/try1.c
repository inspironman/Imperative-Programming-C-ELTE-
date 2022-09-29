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
 
Encoded* encoding (char* input)
{
    int j = 0;
    Encoded p;
    Encoded* b  = &p;
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
            printf("%d %c\n",a[j].n,a[j].n);
            Pair* a = (Pair*) realloc (a,j*sizeof(Pair));
            count=1; 
            previous=current; 
            j++;
        } 
        index++; 
    } 
    a[j].c = previous;
    a[j].n = count;
     
   p.length = j;
   p.arr = a;
   return b;
}

 
// int main() 
// { 
// Encoded* b = encode("aaabbc");
// printf("%d",b[0].length);
// }

// char* decoding (Encoded b)
// {  
//    int s = 0;
//    char* out = (char*)malloc(s*sizeof(char*));

//      for (int i = 0; i <= b.length; i++)
//    {
//        for (int j = 0; j < b.arr[i].n; j++)
//        {
//            out[s] = b.arr[i].c;
//            s++;
//            char* out = (char*)realloc(out,s*sizeof(char*));
//        }
//    }
//    return out;
// }

int main() 
{ 
   Encoded *b = encoding("aabbccc");
   for (int i = 0; i <= b->length; i++)
   {
       printf("(%c , %d)",b->arr[i].c,b->arr[i].n);
   }
//    char* print = decoding(b);
//    printf("%s",print);


   for (int i = 0; i <= b->length; i++)
   {
       free(b->arr);
   }

//     for (int i = 0; i <= b.length; i++)
//    {
//          for (int j = 0; j < b.arr[i].n; j++)
//        {
//             free(print);
//        }
//    }
   
   return 0;
}
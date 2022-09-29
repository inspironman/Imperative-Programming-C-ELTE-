#ifndef rle_h
#define rle_h
#include "rle.h"

Encoded* encoding (char* input)
{
 
    int j = 1;
    int i = 0;
    Encoded* b = (Encoded*)malloc(1*sizeof(Encoded));
    char current; 
    char previous; 
    int count=1; 
    int index=1; 
    b->arr = (Pair*)malloc(j*sizeof(Pair));
    previous = input[0]; 
    while( (current=input[index]) != '\0')
    { 
        if(current==previous)
        { 
            count++; 
        } 
        else
        { 
            b->arr[i].c = previous;
            b->arr[i].n = count;
            j++;
            b->arr = (Pair*)realloc (b->arr,j*sizeof(Pair));
            count=1; 
            previous=current; 
            i++;
        } 
        index++; 
    } 
    b->arr[i].c = previous;
    b->arr[i].n = count;
  
    b->length = j;
   return b;
}

int digit_to_int(char d)
{
 char str[2];

 str[0] = d;
 str[1] = '\0';
 return (int) strtol(str, NULL, 10);
}

Encoded* reading(Encoded* a)
{
        char ens[1024];
        printf("\nEnter the Encoded string\n");
        scanf("%s",ens);
        int enslen = strlen(ens)/2;
        a->length = enslen;
        a->arr = (Pair*)malloc(enslen*sizeof(Pair));
        int r = 0;

        for (int i = 0; i < strlen(ens);)
       {
             if (ens[i] >= 'a' && ens[i] <= 'z')
            {
                a->arr[r].c = ens[i];
                i =  i+2;
                r++;
            }
            else
            {
                printf("BAD INPUT !");
                exit(0);
            }
        
       }
       int s = 0;

       for (int i = 1; i < strlen(ens);)
      {
             if (isdigit(ens[i]) )
             {
                a->arr[s].n =  digit_to_int(ens[i]);
                i =  i+2;
                s++;
             }
             else
             {
                printf("BAD INPUT !");
                exit(0);
             }     
      }
      return a;
}

char* decoding (Encoded* b)
{  
   int s = 0;
    for (int i = 0; i < b->length; i++)
    {
        s = s + b->arr[i].n;
    } 
   char* out = (char*)malloc(s*sizeof(char));
   int p = 0;
     for (int i = 0; i < b->length; i++)
    {
       for (int j = 0; j < b->arr[i].n; j++)
       {
           out[p] = b->arr[i].c;
           p++;
       }
    }
    out[p] = '\0';
    return out;
}


#endif
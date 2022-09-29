#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define counting int

typedef struct Pair {
    char c;
    counting n;
} Pair; 

typedef struct Encoded
{
    counting length;
    Pair* arr;
} Encoded;

Encoded* encoding (char* input);
char* decoding (Encoded* b);
int digit_to_int(char d)
{
 char str[2];

 str[0] = d;
 str[1] = '\0';
 return (int) strtol(str, NULL, 10);
}
 


int main() 
{ 
//    char input[1024] ;
//    scanf("%s",input);
//    Encoded* d = encoding(input);
//    for (int i = 0; i < d->length ; i++)
//    {
//        printf("(%c , %d)",d->arr[i].c,d->arr[i].n);
//    }
   
   Encoded *a = (Encoded*)malloc(1*sizeof(Encoded));
//   Encoded *l = &a;
   char ens[1024];
   printf("\nEnter the Encoded string\n");
   scanf("%s",ens);
   int enslen = strlen(ens)/2;
   a->length = enslen;
   a->arr = (Pair*)malloc(enslen*sizeof(Pair));
   int r = 0;

   for (int i = 0; i < strlen(ens);)
   {
        a->arr[r].c = ens[i];
        i =  i+2;
        r++;
   }
   int s = 0;

    for (int i = 1; i < strlen(ens);)
   {
        a->arr[s].n =  digit_to_int(ens[i]);
        i =  i+2;
        s++;
   }
//    for (int i = 0; i < enslen; i++)
//    {
//         printf("%c",a->arr[i].c);
//         printf("%d",a->arr[i].n);
//    }
   
//    a->arr[0].c = 'a';
//    a->arr[0].n = 3;
//    a->arr[1].c = 'b';
//    a->arr[1].n = 2;
//    a->arr[2].c = 'c';
//    a->arr[2].n = 4;

//    printf("\n");
    char* print = decoding(a);
    printf("%s\n",print);
   return 0;
}

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

char* decoding (Encoded* b)
{  
   int s = 0;
    for (int i = 0; i < b->length; i++)
    {
        s = s + b->arr[i].n;
        //  printf("%d\n",s);
    } 
    // printf("%d",s);
   char* out = (char*)malloc(s*sizeof(char));
   int p = 0;
     for (int i = 0; i < b->length; i++)
    {
       for (int j = 0; j < b->arr[i].n; j++)
       {
           out[p] = b->arr[i].c;
 //          printf("%c",out[p]);
           p++;
       }
    }
    out[p] = '\0';
   return out;
}
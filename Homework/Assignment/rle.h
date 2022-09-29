#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>


typedef struct Pair {
    char c;
    int n;
} Pair; 

typedef struct Encoded
{
    int length;
    Pair* arr;
} Encoded;

Encoded encoding (char* input);
char* decoding (Encoded b);
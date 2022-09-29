#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

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
int digit_to_int(char d);
Encoded* reading (Encoded* a);
char* decoding (Encoded* b);

 
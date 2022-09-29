#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "util.h"

#define FOR(a,b,c) for(int i = b; i < c; i++){};

int num = 7; // ex4
 
int main(int argc, char* argv[])
 
{
  //  scanf("%d",&num); // ex3

    printf("%d\n",square(num));

    FOR(i,0,10)
    {
        printf("hello");
    }
 
    return 0;
}
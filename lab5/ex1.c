#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
 
 
int main()
 
{
 
    int x = 5;
    int *y = &x;
    *y = 9;

    char w = 'a';
    char *z = &w;
    *z = 'p';

    printf ("%d %c",x,w);

    return 0;
}
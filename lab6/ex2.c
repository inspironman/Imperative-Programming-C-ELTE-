#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
 
 
int main(int argc , char *argv[])
 
{
 
    if (argc < 2)
    {
        printf ("Less Arguments");
    }
    else
    {
        int prod = 0;
        for (int i = 0; i < atoi(argv[2]); i++)
        {
            prod = atoi(argv[1]) + prod;
        }
        printf("%d",prod);
    }
 
    return 0;
}
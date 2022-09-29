#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "func.h"
 
int main(int argc, char* argv[])
 
{
    if (argc < 3)
    {
        printf("Atleast 2 arguments needed \n");
    }
    
    vector vec;
    vector* vecptr = &vec;
    int cap = atoi(argv[1]);
    initialize(&vec,cap);

    for (int i = 2; i < argc ; i++)
    {
        if (argv[i][0] == 'a')
        {
            append(&vec,atoi (argv[i+1]));
        }
        else if(argv[i][0] == 'r')
        {
            retrieve(&vec,atoi(argv[i+1]));
        }
            
    }
    
    dispose(&vec);
    // vector vec;
    // vector* vecptr = &vec;
    // int cap = 6;
    // initialize(&vec,cap);

    // for (int i = 0; i < cap; i++)
    // {
    //     append(&vec,i);
    // }

    // printf("%d",vec.items[3]);
 
    return 0;
}
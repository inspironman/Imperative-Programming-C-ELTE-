#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int global = 6;

void change()
{
   global = 9;
}
 
int main(int argc, char* argv[])
 
{
   
    global = 2;
    //change();

    printf("%d",global);
    
 
    return 0;
}
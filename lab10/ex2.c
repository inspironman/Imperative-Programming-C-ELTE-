#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TOSTRING(a) (#a) //function-like Macro 
int main()
{
    printf("%s\n", TOSTRING(Awesome));
    return 0 ;
}
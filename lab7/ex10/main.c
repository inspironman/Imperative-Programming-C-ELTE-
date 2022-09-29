// #include <stdio.h>
// #include <stdbool.h>
// #include <stdlib.h>
// #include <time.h>
// #include <math.h>
// #include "my_util.h"


 
// int main(int argc, char* argv[])
 
// {
 
//     int a = 5;
//     int b = 9;
//     swap(&a,&b);
//     printf("%d",b);
//     return 0;
// }
#include <stdio.h>
void printNumber(int nbr)  
{
    printf("%d\n", nbr);
}
void myFunction(void (*f)(int))  
{
    for(int i = 0; i < 5; i++) 
    {
        (*f)(i);
    }
}
int main(void)  
{
    myFunction(printNumber);
    return (0);
}
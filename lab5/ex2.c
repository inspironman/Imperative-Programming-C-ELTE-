/*
Create a function which swaps the values of two variables
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
 
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
 
{
 
    int a = 5;
    int b = 8;
    int *x = &a;
    int *y = &b;

    char  check = 'a';
    char *ch = &check;


    printf("%d %d",sizeof(x),sizeof(ch));
    
    swap(x,y);
    //printf("%d %d",a,b);

    return 0;
}
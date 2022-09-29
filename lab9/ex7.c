/*
7) Modify the solution of the previous problem so that the program no longer prompts the user for a command line argument, 
but reads words from the user until the input is EOF. Then print them out in reverse order. 
When you're done typing, wait for words again. Use an array. Be careful not to create memory debris.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
 
 
int main(int argc, char* argv[])
 
{
 
    char temp[20];
    int meas = 0;

    char** string = (char**)malloc(meas*sizeof(char*));

    while (  scanf("%s",temp) != EOF)
    {
       
        meas++;
        string = (char**)realloc(string,meas*sizeof(char*));
        
        string[meas-1] = (char*)malloc(20*sizeof(char));
        strcpy(string[meas-1],temp);
    }

    for (int i = 0; i <  meas; i++)
    {
        printf("%s ",string[i]);
    }
    
    free(string);
    for (int i = 0; i < meas; i++)
    {
        free(string[i]);
    }
    
    return 0;
}
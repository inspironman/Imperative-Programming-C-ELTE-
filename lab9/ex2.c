#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
 Create a function called reverse () that has a string parameter. The function translates the characters of the string locally. 
 That is, the function returns the result in the same memory area that it received as a parameter. 
 For example, the characters in a palindrome string do not change in the function.
*/

void reverse(char* string)
{
    int s = sizeof(string)/sizeof(char);
    for (int i = 0; i < (s+1)/2; i++)
    {
        char fst = string[i];
        char lst = string[s-i];

        string[i] = lst;
        string[s-i] = fst;
    }
    
}
 
int main(int argc, char* argv[])
 
{
   char name = (char*)malloc(20*sizeof(char));
   scanf("%s",&name);
   reverse(name);
   int s = sizeof(name)/sizeof(char);


   printf("%d %s",s,name);
    
 
    return 0;
}
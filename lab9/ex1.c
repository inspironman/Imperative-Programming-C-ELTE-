#include <stdio.h>
#include <stdbool.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

char* malcopy(char* string)
{
    char* str = (char*)malloc(20*sizeof(char));
    strcpy(str,string);

    return str;
}

int main()
{
    char string[20] = "helloWorld i ";

   char* p = malcopy(string);
   printf("%s",p);

    return 0;
    free(p);
}

// typedef struct 
// {
//     int a;
//     int b;
// }Cell;

// int main(int argc, char* argv[])
 
// {
 
//     Cell c;
//     c.a = 5;
//     c.b = 9;

//     Cell *d = &c;
//     d->a = 9;
//     d->b = 65;

//     printf("%d %d\n",c.a,c.b);
//     printf("%d %d\n",d->a,d->b);
//     printf("%d %d",(*d).a,(*d).b);
 
//     return 0;
// }
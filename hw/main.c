#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "func.h"


int main(int argc, char* argv[])
{
     char filename [50];
     strcpy(filename,argv[1]);
     int x = 0;
     int *n = &x;
     Student* arr = (Student*)malloc(n*sizeof(Student));
     FILE *fp;
     fp = fopen(filename,"r+");
     readFileBp(fp,arr,n);
     
     return 0;
}
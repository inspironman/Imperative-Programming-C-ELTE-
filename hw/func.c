#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "func.h"

void readFileBp(FILE *fp,Student* arr,int* n)
{
   char str[200];
   while (fgets(str,100,fp) != NULL)
   {
      n++;
      arr = (Student*)realloc(arr,n*sizeof(Student));
      char* Name = strtok(str,";");
      strcpy(arr[n-1].names,Name);
      Name = strtok(NULL,";");
      strcpy(arr[n-1].neptun,Name);
      Name = strtok(NULL,";");
      float a = atof (Name);
      arr[n-1].grades =  a;
      Name = strtok(NULL,";");
     int s = atoi (Name);
     arr[n-1].credits = s;
     Name = strtok(NULL,";");
     int a1 = atoi (Name);
     arr[n-1].t = a1 ;
     Name = strtok(NULL,";");
   }

    fclose(fp);
} 

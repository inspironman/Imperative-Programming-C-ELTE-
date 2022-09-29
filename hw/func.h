#ifndef func_h
#define func_h

#include <stdlib.h>
#include<stdbool.h>
#include<stdlib.h>
#include <string.h>

int n = 0;

typedef enum {CS_BSc,CS_MSc,Teacher_training} training;

typedef struct Student
    {
        char names[50];
        char neptun[7];
        float grades;
        int credits;
        training t;
    } Student;

void readFileBp(FILE *fp,Student* arr,int* n);

#endif
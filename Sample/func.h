#ifndef func_h
#define func_h

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define ITEM_TYPE int


typedef struct vector
{
    int capacity;
    int size;
    ITEM_TYPE* items;    
}vector;

bool initialize(vector* v,int cap);
vector* dispose(vector* v);
bool append(vector* v,ITEM_TYPE e);
ITEM_TYPE retrieve(vector* v, int i);
bool insert(vector* v,int i,ITEM_TYPE e);
bool erase(vector* v,int i);
/*
retrieve(v, i): This function returns a vector element at the given position. We may assume that the provided index is valid, 
i.e. less than the vector size.
*/



#endif

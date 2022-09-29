#include "func.h"

bool initialize(vector* vec, int capacity)
{
    if (capacity < 0)
    {
        return false;
    }
    else
    {
        vec->capacity = capacity;
        vec->size = 0;
        vec->items = (ITEM_TYPE*)malloc(capacity*sizeof(ITEM_TYPE));

        return true;
    }
    
}

vector* dispose(vector* vec)
{
    free(vec->items);
}

bool append(vector* vec,ITEM_TYPE element)
{
    if (vec->size == vec->capacity)
    {
        return false;
    }
    else
    {
        vec->items[vec->size++] = element;
        return true;
    }
    
}

ITEM_TYPE retrieve(vector* vec, int i)
{
    ITEM_TYPE ret =  vec->items[i] ;
    
    return ret;
}

bool insert(vector* vec,int ind,ITEM_TYPE element)
{
    if (vec->capacity < ind || vec->size + 1 != ind || ind < 0 || vec->size == vec->capacity)
    {
        return false;
    }
    else
    {
        append(&vec,element);
        vec->size++;
        return true;
    }
    
}
bool erase(vector* vec,int ind)
{
    if (vec->size < ind || ind < 0 )
    {
        return false;
    }
    else
    {
        
         for (int i = ind; i < vec->size - 1; ++i)
         vec->items[i] = vec->items[i + 1];

         --vec->size;
         return true;
    }
    
}
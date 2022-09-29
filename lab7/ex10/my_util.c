#ifndef my_util_h
#define my_util_h
#endif

void swap(int *a,int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int large(int *a,int *b)
{
    if (*a > *b)
    {
        return *a;
    }
    else
    {
        return *b;
    }
    
}


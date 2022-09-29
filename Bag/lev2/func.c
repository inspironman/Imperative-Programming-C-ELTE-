#include <stdio.h>
#include "func.h"
 
static item_t data[MAX_SIZE];
static unsigned int current_size;


void init(void)
{
    current_size = 0;
}

int add(int newitem)
{
    if (current_size >= MAX_SIZE)
    {
        return 1;
    }
    for (unsigned int idx = 0; idx < current_size; ++idx)
    {
        if (data[idx].item == newitem)
        {
            ++data[idx].mult;
            return 0;
        }
    }
    data[current_size].item = newitem;
    data[current_size].mult = 1;
    ++current_size;
    return 0;
}

void PrintAllItems(void)
{
    for (unsigned int idx = 0; idx < current_size; ++idx)
    {
        printf("(%i, %i) \n", data[idx].item, data[idx].mult);
    }
}


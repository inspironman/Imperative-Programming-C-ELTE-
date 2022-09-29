#include <stdio.h>
#include <stdlib.h>

#include "func.h"
 
int init(Bag* bag, unsigned int max_size)
{
    if (bag == NULL)
    {
        return 1;
    }
    bag->current_size = 0;
    bag->max_size = max_size;
    bag->data = malloc(max_size * sizeof(item_t)); 
    if (bag->data == NULL)
    {
        return 1; 
    }
    return 0;
}

int add(Bag* bag, int newitem)
{
    if (bag == NULL || bag->current_size >= bag->max_size)
    {
        return 1;
    }
    for (unsigned int idx = 0; idx < bag->current_size; ++idx)
    {
        if (bag->data[idx].item == newitem)
        {
            ++(bag->data[idx].mult);
            return 0;
        }
    }
    bag->data[bag->current_size].item = newitem;
    bag->data[bag->current_size].mult = 1;
    ++(bag->current_size);
    return 0;
}

void PrintAllItems(Bag bag)
{
    for (unsigned int idx = 0; idx < bag.current_size; ++idx)
    {
        printf("(%i, %i) \n", bag.data[idx].item, bag.data[idx].mult);
    }
}
 
void finalize(Bag* bag)
{
    if (bag == NULL)
    {
        return;
    }
    free(bag->data);  
    bag->data = NULL;
    bag->current_size = bag->max_size = 0;
}

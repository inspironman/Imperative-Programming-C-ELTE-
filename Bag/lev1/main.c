 #include <stdio.h>
 
#define MAX_SIZE 100
typedef struct item_t
{
    int item;
    unsigned int mult;
} item_t;

item_t data[MAX_SIZE];
unsigned int current_size;

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


int main()
{
    init();

    printf("printout 1:\n");
    PrintAllItems();

    add(2);
    add(4);
    add(1);

    printf("printout 2:\n");
    PrintAllItems();

    add(12);
    add(4);
    add(4);
    add(-2);
    add(325);

    printf("printout 3:\n");
    PrintAllItems();

    return 0;
}

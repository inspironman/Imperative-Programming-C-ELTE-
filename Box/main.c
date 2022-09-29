
#include <stdio.h>
#include <stdlib.h>


typedef struct Box
{
    int weight;
    struct Box* next;
} Box;

Box* top;


void initialize()
{
    top = NULL;
}

int isEmpty()
{
    return top == NULL;
}

int peek()
{
    if (isEmpty())
    {
        return 0;
    }
    else
    {
        return top->weight;
    }
}

void push(int next_box_weight)
{
    Box* next_box = malloc(sizeof(Box));
    next_box->weight = next_box_weight;
    next_box->next = top;
    top = next_box;
}

void print()
{
    Box* tmp = top;
    while (tmp != NULL)
    {
        printf("%i, ", tmp->weight);
        tmp = tmp->next;
    }
    printf("\n");
}

void pop()
{
    if (!isEmpty())
    {
        Box* tmp = top->next;
        free(top);
        top = tmp;
    }
}

// helytelen megoldás: nem elég csak a pointer-t másolni
/*
void copyTo()
{
    Box* tmp = top;
    tmp->weight = top->weight;
    tmp->next = top;
    top = tmp;
}
*/

void copyTo()
{
    Box* tmp = malloc(sizeof(Box));
    tmp->weight = top->weight;
    tmp->next = top;
    top = tmp;
}


int main()
{
    initialize();
    push(5);
    push(7);
    push(10);
    push(2);
    print();

    printf("----------------------------\n");
    pop();
    print();

    printf("----------------------------\n");
    copyTo();
    print();

    return 0;
}

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

typedef struct Box
{
    int weight;
    Box* next;
}Box;

Box *top;

void initalize(Box *top)
{
    top = NULL;
}

bool isEmpty()
{
   return top == NULL;
}

int peek()
{
    if (isEmpty())
    {
        printf("Stack is empty \n");
        exit(0);
    }
    
    return top->weight;
}

void push(int n)
{
    Box *new = (Box*)malloc(sizeof(Box));
    if (new == NULL)
    {
        printf("Memory Allocation Failed ");
        exit(0);
    }   
    new->weight = n;
    new->next = top;
    top = new;
}
/*
Write the Pop function, which releases the item at the top of the stack and sets the top variable to the one below it. 
(Don't forget the possibility of an empty stack either!)
*/
int pop()
{

}
 
int main(int argc, char* argv[])
 
{
  
   
 
    return 0;
}
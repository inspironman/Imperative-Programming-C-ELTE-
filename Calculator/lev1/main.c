 
#include <stdio.h>
 
enum STATE
{
    LEFT = 1,
    LEFT_PLUS = 2,
    LEFT_TIMES = 3,
    PLUS_RIGHT = 4,
    TIMES_RIGHT = 5
};


static unsigned int memory;
static unsigned int input = 0;
static unsigned int state = LEFT;


 
void digit(unsigned int n)
{
    input = 10*input + n; 
    if (state == LEFT_PLUS) 
    {
        state = PLUS_RIGHT;
    }
    else if (state == LEFT_TIMES) 
    {
        state = TIMES_RIGHT;
    }
}

void helper(int newstate)
{
    switch (state)
    {
        case LEFT: 
        {
            memory = input;
            break;
        }
        case PLUS_RIGHT: 
        {
            memory += input;
            break;
        }
        case TIMES_RIGHT: 
        {
            memory *= input;
            break;
        }
    }
    input = 0;
    state = newstate;
}

void plus()
{
    helper(LEFT_PLUS);
}

void times()
{
    helper(LEFT_TIMES);
}
 
void reset()
{
    memory = 0;
    input = 0;
    state = LEFT;
}
 
int main()
{
    reset();

    digit(5);
    digit(1);
    plus();
    digit(5);
    times();
    digit(2);
    plus();

    printf("memory = %i\ninput = %i\n", memory, input);
    return 0;
}



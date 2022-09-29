#if !defined FUNC_INCLUDED
 
#define FUNC_INCLUDED


enum STATE
{
    LEFT = 1,
    LEFT_PLUS = 2,
    LEFT_TIMES = 3,
    PLUS_RIGHT = 4,
    TIMES_RIGHT = 5
};
 
extern unsigned int digit(unsigned int n);
extern unsigned int plus();
extern unsigned int times();
extern unsigned int reset();


#endif

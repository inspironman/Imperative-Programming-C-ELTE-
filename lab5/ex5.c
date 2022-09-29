#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
 
int sum(int *arr,int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
         sum = sum + *(arr + i);
        //sum = sum + arr[i];
    }
    return sum;
}

// Redesigned function

int sumb(int *first, int *last)
{
    int sum = 0;
    int i = 0;
    while (first + i  <= last)
    {
        sum = sum + *(first + i);
        i++;
    }
    return sum;
}

int main()
 
{
 
    int arr[]  = {1,2,4,5,6,4,3,4,5,6,7,8,6};
    //int *ary = &arr;
    int size = sizeof(arr)/sizeof(int);
   
    int add = sum(arr,size);
    int add2 = sumb(arr , arr + (size-1));
    printf("%d\n",add2);
    printf("%d",add);

    return 0;
}


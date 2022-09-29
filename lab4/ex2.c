#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
 
void fillzero (int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 0;
    }
    
}

void print (int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
 
 
int main()
 
{
 
    int arr1[4];
    fillzero(arr1,4);
    print(arr1,4);
 
   return 0;
}
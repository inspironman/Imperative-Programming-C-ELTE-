#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void sort (int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    
}

void swap (int arr[],int size)
{
    int temp = arr[0];
    arr[0] = arr[size-1];
    arr[size-1] = temp;
}
 
int main()
 
{
 
    int arr[] = {1,2,3,9,5,34,2,1,5,63,1,4,6,3,2,7};
    int s = sizeof(arr)/sizeof(int);
    sort(arr,s);
    swap(arr,s);

    for (int i = 0; i < s; i++)
    {
        printf("%d ",arr[i]);
    }
    
 
   return 0;
}
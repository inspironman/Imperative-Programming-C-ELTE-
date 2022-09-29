#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
 
void sort (int arr[],int size)
{
    int a = arr[0];
    int i = 0;
     
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    
    
    
}

int secondgreat (int arr[],int size)
{
     sort(arr,size);

     for (int i = 0; i < size; i++)
     {
        printf("%d \n",arr[i]);
     }
     

     int x = arr[size-2];
     return x;
}


 
int main()
 
{
   int arr[11] = {2,1,4,5,6,7,5,4,3,32,9};
   
   int x = secondgreat(arr,10);
   printf("\n%d",x);

   return 0;
}
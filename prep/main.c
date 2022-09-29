/*
1. Create a function which determines the intersection of sets. The sets are represented by arrays.

The function should have two input and ont output parameter, all of these are arrays of 10 elements containing integers. 
The function also has a fourth parameter which is an output integer parameter for the size of the resulting array. 
You may assume that the input arrays don't contain value repetition. For example in case of  [4,16,88,3,6,7,10,90,5,12] and 
[6,7,11,8,1,100,300,32,0,12] 
inputs the content of the resulting array is [6,7,12], and the result integer is 3.

In the main function create three appropriate size arrays which you call the function with. Print the result in order to test your solution!

2. Separate the solution to multiple translation units and header files, so the main function and intersection function are separated on file
level. Use include guard idiom! 
Make sure that the "hard coded" values are not repeated in the program (for example with using preprocessor).

3. Redesign the previous solution so the function works with arrays of any size, not just 10. Instead of output parameter the result 
should go to the caller via the return value. 
Make sure to avoid memory leak!

4. Create the record set that represents a set of integers by storing the set elements and the size. 
Redesign the previous operation so it uses set types instead of integer arrays. Let set be usable as type name, so the set s; 
is a valid declaration!
*/

#include<stdio.h>
#include<stdlib.h>

int intersection(int array1[],int s1,int array2[],int s2,int *rarray)
{
   int ns = 0;
   rarray = (int*)realloc(rarray,ns*sizeof(int));

   for (int i = 0; i < s1 ; i++)
   {
       for (int j = 0; j < s2; j++)
       {
           if (array1[i] == array2[j])
           {
               ns++;
               rarray = (int*)realloc(rarray,ns*sizeof(int));
               rarray[ns-1] = array2[j];
           }           
       }       
   }  
   return ns;
};

int* intersection2(int array1[],int s1,int array2[],int s2,int *rarray)
{
   int ns = 0;
   rarray = (int*)realloc(rarray,ns*sizeof(int));

   for (int i = 0; i < s1 ; i++)
   {
       for (int j = 0; j < s2; j++)
       {
           if (array1[i] == array2[j])
           {
               ns++;
               rarray = (int*)realloc(rarray,ns*sizeof(int));
               rarray[ns-1] = array2[j];
           }           
       }       
   }  
   return rarray;
};

int main()
{
    int array1[10] =  {4,16,88,3,6,7,10,90,5,12}; 
    int array2[10] =  {6,7,11,8,1,100,300,32,0,12};
    int *ptr1 = array1;
    int *ptr2 = array2;

    int *rarray = (int*)malloc(0*sizeof(int));
 
    int n = intersection(array1,10,array2,10,rarray); 
    printf("%d \n",n);
    rarray = intersection2(array1,10,array2,10,rarray);
    int size = sizeof(*rarray)/sizeof(int);
    printf("%d\n",size);

    for (int i = 0; i <  n; i++)
    {
        printf("%d ",rarray[i]);
    }
    free(rarray);
    
    return 0;
}
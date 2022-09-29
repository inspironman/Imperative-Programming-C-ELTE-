#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "func.h"

// typedef struct pair
// {
//     int fst;
//     int snd;
// }pair;
 
// pair* cartesian(int array1[],int array2[],pair cart[])
// {
//     int s = 0;
 
//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             s++;
//             cart[s-1].fst = array1[i];
//             cart[s-1].snd = array2[j];
//         }        
//     }
//     return cart;
// }
 
int main(int argc, char* argv[])
 
{
    // if (argc < 3)
    // {
    //     printf("Number of arguments are less ");
    //     return 0;
    // }

    // int x = atoi(argv[1]);
    // int y = atoi(argv[2]);
    // int *array1 = (int*)malloc(x*sizeof(x));
    //  int *array2 = (int*)malloc(y*sizeof(y));

    // for (int i = 0; i < x; i++)
    // {
    //     scanf("%d",&array1[i]);
    // }  

    // for (int i = 0; i < y; i++)
    // {
    //     scanf("%d",&array2[i]);
    // }
    
    // pair* prod = cartesian2(array1,x,array2,y);
    // FILE *fp = fopen("input.txt","w");

    // for (int i = 0; i < x*y; i++)
    // {
    //     fprintf(fp,"( %d %d )",prod[i].fst,prod[i].snd);
    // }
    
    

    int array1[10] = {1,2,3,4,5,6,7,8,9,10};
    int array2[10] = {11,12,13,14,15,16,17,18,19,20};
  
    pair prod[100] ; 
    cartesian(array1,array2,prod); // Task 1

    int n = (sizeof(array1)/sizeof(int))*(sizeof(array2)/sizeof(int));
//    printf("%d \n",n);

    for (int i = 0; i < n; i++)
    {
        printf("( %d %d ) ",prod[i].fst,prod[i].snd );
    }

    int* array3 = (int*)malloc(6*sizeof(int));
    int* array4 = (int*)malloc(8*sizeof(int));
    pair* prod2 = cartesian2(array3,6,array4,8); // Task 2

    int ns = cartesian3(prod,100);   // Task 3
    printf(" \n %d ",ns);

   // Here i am being able to print the size of new cartesian product array.

    pair* prod3;
    cartesian3aux (prod, ns,prod3);
 
    
    free(array3);
    free(array4);
    free(prod2);


    return 0;
}
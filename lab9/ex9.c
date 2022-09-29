/*
9) Given a file with numbers separated by spaces in each line. Write a program that reads line by line from this file and prints each line
in ascending numerical order to a file named output.txt. Manage memory dynamically.
*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void Sort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}

int* stringToArray(char* string)
{
    int s = 0;
    int* array = (int*)malloc(s*sizeof(int));
    for (int i = 0; string[i] < '\n' ; i++)
    {
        if (string[i] != '\0')
        {
          s++;
          array = (int*)realloc(array,s*sizeof(int*));
          array[s-1] = atoi(string[i]);
        }
        
    }
    return array;
}

int main(int argc, char* argv[])
{
    FILE *fp = fopen("input.txt","r");
    FILE *op = fopen("output.txt","a");
    int s = 0;
    int* array = (int*)malloc(s*(sizeof(int)));
    int n;
    char* ch = (char*)malloc(900*sizeof(char));

    while (fgets(ch,200,fp))
    {
        int* farray = stringToArray(ch);
        int x = sizeof(farray)/sizeof(int);
        Sort(farray,x);
        for (int i = 0; i < x; i++)
        {
            fprintf(op,"%d ",farray[i]);
        }
        printf("\n");
        
    }
    

    // while ((fscanf(fp,"%d",&n)) == 1)
    // {
    //     s++;
    //     array = (int*)realloc(array,s*(sizeof(int)));
    //     array[s-1] = n;
    // }
    
    // for (int i = 0; i < s; i++)
    // {
    //     printf("%d",array[i]);
    // }
    free(array);
    return 0;
}
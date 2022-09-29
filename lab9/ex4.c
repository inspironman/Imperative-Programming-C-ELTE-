//Write a program that reads 5 words from the user and prints them in reverse order. Use an array.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

char **arr (char srting[][20])
{
    char** newstring = (char**)malloc(5* (sizeof(char*)));

    for (int i = 0; i < 5; i++)
    {
        newstring[i] = (char*)malloc(20*(sizeof(char)));
    }
    
    for (int i = 0; i < 5; i++)
    {
        strcpy(newstring[i],srting[4-i]);
    }

    return newstring;
    
}
 
int main(int argc, char* argv[])
 
{
 
    char array[5][20];
    for (int i = 0; i < 5; i++)
    {
        scanf("%s",array[i]);
    }
    
    char **newstring = arr(array);

    for (int i = 0; i < 5; i++)
    {
        printf("%s ",newstring[i]);
    }
    

    for (int i = 0; i < 5; i++)
    {
        free(newstring[i]);
    }

    free(newstring);
    
    return 0;
}

// #include <stdio.h>
// #include <string.h> //////////
// #include <stdlib.h>  /* malloc, free */

// char** reverse(char originalStringArray[][20])
// {

//     char** stringArr = (char**)malloc(5 * (sizeof(char*)) );

//     for (int i = 0 ; i < 5 ;i++)
//     {
//         stringArr[i] = (char*)malloc(20 * sizeof(char));
//     }
   


//    for (int i  = 0 ; i < 5 ; i++)
//    {
//        strcpy(stringArr[i] , originalStringArray[4-i]);
//    }

    
//     return stringArr ;
// }

// //char*//string
// //char* arr[5]

// int main()
// {
//     char arr[5][20]; /// char* arr[5] /// char** arr///////static 

//     for(int i = 0 ; i < 5 ; i++)
//     {
//         scanf("%s",arr[i]);
//     }

//         printf("Before reversing:\n");

//      for(int i = 0 ; i < 5 ; i++)
//     {
//         printf("%s ",arr[i]);
//     }

//     printf("\n");
//     char** reversedArr = reverse(arr);/////////////////////////////////////dynamic 
//     printf("after reversing:\n");
//   for(int i = 0 ; i < 5 ; i++)
//     {
//         printf("%s ",reversedArr[i]);
//     }
//     for(int  i = 0 ; i < 5 ; i++)
//     {
//         free(reversedArr[i]);/////////FOR EACH MALLOC WE WILL HAVE A FREE()
//     }
//     free(reversedArr);/////////FOR EACH MALLOC WE WILL HAVE A FREE()
//     return 0 ;
// }
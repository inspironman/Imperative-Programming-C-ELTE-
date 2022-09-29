/*
Modify the solution to the previous task so that if the user enters the word "END", the scan ends before reaching the limit specified 
as a command line argument. Use an array. Then write the contents of the array in reverse order.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

char** reverse(char** string,int num)
{
    char** revstring = (char**)malloc(num*(sizeof(char*)));

    for (int i = 0; i < num; i++)
    {
        revstring[i] = (char*)malloc(20*sizeof(char));
        strcpy(revstring[i],string[num-1-i]);
    }
     for (int i = 0; i < num; i++)
    {
        strcpy(revstring[i],string[num-1-i]);
    }
    return revstring;
}
 
 
int main(int argc, char* argv[])
 
{
    int n = atoi(argv[1]);
    int meas = 0;

    char** string = (char**)malloc(meas*sizeof(char*));
    
    char temp[20];

    for (int i = 0; i < n; i++)
    {
        scanf("%s",temp);
        if (strcmp(temp,"END")==0)
        {
            break;
        }
        else
        {
            meas++;
            string = (char**)realloc(string,meas*sizeof(char*));
            string[meas-1] = (char*)malloc(20*sizeof(char));
            strcpy(string[meas-1],temp);
        }
    }

    for (int i = 0; i < meas; i++)
    {
        printf("%s ",string[i]);
    }
  
    printf("\nafter reversing \n");
    char** revstring = reverse(string,meas);

    for (int i = 0; i < meas; i++)
    {
         printf("%s ",revstring[i]);
    }
    
    free(string);
    for (int i = 0; i < meas; i++)
    {
        free(string[i]);
    }
    free(revstring);
    for (int i = 0; i < meas; i++)
    {
        free(revstring[i]);
    }
    

    return 0;
}
































// #include <stdio.h>
// #include <string.h> //////////
// #include <stdlib.h>  /* malloc, free */

// char** reverse(char** originalStringArray ,int n)
// {
//     char** stringArr = (char**)malloc(n * (sizeof(char*)) );

//     for (int i = 0 ; i < n ;i++)
//     {
//         stringArr[i] = (char*)malloc(20 * sizeof(char));
//     }
//    for (int i  = 0 ; i < n ; i++)
//    {
//        strcpy(stringArr[i] , originalStringArray[n-1-i]);
//    }
//     return stringArr ;
// }


// int main(int argc , char* argv[])
// {
//     int n = atoi(argv[1]);
//     printf("enter words:\n");
//     char arr[n][20]; /// char* arr[5] /// char** arr///////static 
//     int number_of_word = 0;
//     char** originalArr = (char**)malloc(number_of_word * sizeof(char*));

//     for(int i = 0 ; i < n ; i++)
//     {
//         char tempWord[20];
//         scanf("%s",tempWord);
//         if(strcmp(tempWord , "END") == 0)
//         {
//             break;
//         }
//             number_of_word++;
//             originalArr = (char**)realloc(originalArr, number_of_word * sizeof(char*));
//             originalArr[number_of_word-1] = (char*)malloc(20 * sizeof(char));
//             strcpy(originalArr[number_of_word-1], tempWord);
//     }

//         printf("Before reversing:\n");

//      for(int i = 0 ; i < number_of_word ; i++)
//     {
//         printf("%s ",originalArr[i]);
//     }

//     printf("\n");
//     char** reversedArr = reverse(originalArr,number_of_word);/////////////////////////////////////dynamic 
//     printf("after reversing:\n");
//   for(int i = 0 ; i < number_of_word ; i++)
//     {
//         printf("%s ",reversedArr[i]);
//     }


// ///////Freeing phase
// //////////original array

//     for(int  i = 0 ; i < number_of_word ; i++)
//     {
//         free(originalArr[i]);/////////FOR EACH MALLOC WE WILL HAVE A FREE()
//     }
//     free(originalArr);/////////FOR EACH MALLOC WE WILL HAVE A FREE()


// ///////////reversed array
//     for(int  i = 0 ; i < number_of_word ; i++)
//     {
//         free(reversedArr[i]);/////////FOR EACH MALLOC WE WILL HAVE A FREE()
//     }
    
//     free(reversedArr);/////////FOR EACH MALLOC WE WILL HAVE A FREE()
    
//     return 0 ;
// }

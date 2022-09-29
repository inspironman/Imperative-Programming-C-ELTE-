//13. Write a program that prints out the n-th row of a file.

#include <stdio.h> 
 
int main() 
{ 
    FILE* file = fopen("file.txt", "r"); 
    char line[256]; 
    int i = 0; 
    while (fgets(line, sizeof(line), file)) 
    { 
        i++; 
        if(i == 9 ) 
        { 
            printf("%s", line);    
        } 
    } 
 
    fclose(file); 
 
    return 0; 
}
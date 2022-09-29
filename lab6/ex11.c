#include<stdio.h>
#include<stdlib.h>



int main(){
FILE * fp = fopen("otherFile.txt","w");

fprintf(fp , "Hello 1\n");

int n ;
scanf("%d", &n);  //We are here

fprintf(fp , "Hello 2\n");

fclose(fp);
return 0 ;
}
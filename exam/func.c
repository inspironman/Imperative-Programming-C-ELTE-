#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "func.h"

pair* cartesian(int array1[],int array2[],pair cart[])
{
    int s = 0;
   
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            s++;
            cart[s-1].fst = array1[i];
            cart[s-1].snd = array2[j];
        }        
    }
    return cart;
}

pair* cartesian2(int *array1,int s1,int *array2,int s2)
{
    int s = 0;
    pair* cart = (pair*)malloc(s*sizeof(pair));

    for (int i = 0; i < s1; i++)
    {
        for (int j = 0; j < s2; j++)
        {
            s++;
            cart = (pair*)realloc(cart,s*sizeof(pair));
            cart[s-1].fst = array1[i];
            cart[s-1].snd = array2[j];
        }        
    }
    return cart;
}

int cartesian3 (pair* arr, int n)
{
  if (n == 0 || n == 1)
    return n;
  int t = 0;
//  pair temp[t];

  for (int i = 0; i < n; i++)
  {
      bool l = false;
      for (int j = i+1; j < n; j++)
      {
          if (arr[i].fst != arr[j].fst && arr[i].snd != arr[j].snd)
          {
              l = true;
          }
      }
       if (l)
       {
           t++;
       }
       
  }
  
 return t;
}

pair* cartesian3aux (pair* arr, int n,pair* temp)
{
  if (n == 0 || n == 1)
    return arr;
  int t = 0;
  temp[t];

  for (int i = 0; i < n; i++)
  {
      for (int j = i+1; j < n; j++)
      {
          if (arr[i].fst != arr[j].fst && arr[i].snd != arr[j].snd)
          {
              t++;
              temp[t-1] = arr[i];
          }
      }
  }
  return temp;
}
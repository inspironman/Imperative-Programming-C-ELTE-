#if !defined FUNC_H
#define FUNC_H

typedef struct pair
{
    int fst;
    int snd;
}pair;

pair* cartesian(int array1[],int array2[],pair cart[]);
pair* cartesian2(int *array1,int s1,int *array2,int s2);
int cartesian3(pair *arr,int n);
pair* cartesian3aux (pair *arr, int n,pair *temp);

#endif
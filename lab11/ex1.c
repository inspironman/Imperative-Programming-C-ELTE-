/*
1-Create a new type called` Student` to represent students. Include ID, average, and age. The type of average should be a double-precision 
floating-point number, the rest integers.
Examine the memory requirements of the type, experiment with the order of the data members and observe its effect.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

typedef struct impact
{
    double publish;
    int erdos;
}impact;


typedef enum type {Bsc,Msc,Phd}course;

typedef union extra 
{
   int number_of_taken_courses;
   double credit_index;
   impact impfac;

}extra;
 

typedef struct Student
{
    int ID;
    int age;
    float average;
    course type;
    extra stuff;

}Student;

int bestID(Student s[],int size)
{
  float max = 0;
  for (int i = 0; i < size; i++)
  {
      if (s[i].average > max)
      {
          max = s[i].average;
      }
      
  }
  
  for (int i = 0; i < size; i++)
  {
      if (s[i].average == max)
      {
          return s[i].ID;
      }
      
  }
  
}
 
int main(int argc, char* argv[])
 
{

    Student stud[3];
    
    Student s1;
    s1.ID = 1536;
    s1.age = 19;
    s1.average = 4.91;
    s1.type = Bsc;
    s1.stuff.number_of_taken_courses = 5;

    Student s2;
    s2.ID = 1634;
    s2.age = 22;
    s2.average = 3.56;
    s2.type = Msc;
    s2.stuff.credit_index = 3.41;

    Student s3;
    s3.ID = 1264;
    s3.age = 28;
    s3.average = 4.56;
    s3.type = Phd;
    s3.stuff.impfac.erdos = 3;

    stud[0] = s1;
    stud[1] = s2;
    stud[2] = s3;

    int n = bestID(stud,3);
    printf("%d",n);
    
    return 0;
}
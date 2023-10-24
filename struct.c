#include <stdio.h>
#include <string.h>
int main ()
{
struct student {
 int roll;
 float cgpa;
 char name[100];
};
 struct student s1 ,s2 ,s3;
  s1.roll = 11;
  s1. cgpa = 8.25;
  strcpy(s1.name , "salman");
  s2.roll = 12 ;
  s2.cgpa = 8.00;
  strcpy(s2.name , "wahid ");
   s3.roll = 14 ;
   s3.cgpa = 7.25;
   strcpy(s3.name , "faisal");
   printf("details of first student are as follows : %d\t %f\t %s\t ", s1.roll , s1.cgpa , s1.name); 
printf("\n");
printf("details of second  student are as follows : %d\t %f\t %s\t ", s2.roll , s2.cgpa , s2.name);
printf("\n");
printf("details of  third student   are as follows : %d\t %f\t %s\t ", s3.roll , s3.cgpa , s3.name);
printf("\n")

    
}
//QUESTION  NO 5
#include<stdio.h>
#include<math.h>
int main ()
{
    int a , b , c;
    float answer1 , answer2 ;

printf("enter the coffecient of x^2  :\n");
scanf("%d", &a);
printf("enter the coffecient of x term :\n");
scanf("%d",&b);
printf("enter the  constant term :\n");

scanf("%d",&c);
float z = pow(b,2)-4*a*c;
z= pow(z,1/2);
answer1 =(-b+z)/(2*a);

answer2 =(-b-z)/(2*a);
printf("the roots of the quadratic equations are as follows : %f,%f",answer1,answer2);

}
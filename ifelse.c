// QUESTION NO 8
#include<stdio.h>
int main ()
{ 
int n1 ,n2 ,n3 ;
printf("enter three numnbers :\n");
scanf("%d %d %d", &n1 ,&n2, &n3);
if (n1>n2 && n1>n3)
{printf("NUMBER %d IS the greatest\n",n1);
}
else if (n2>n1 && n2>n3)
{printf("NUMBER %d IS THE GREATEST \n",n2);}
else
printf("number %d is the greatest\n",n3);

return 0 ;




}
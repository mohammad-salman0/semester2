// QUSTION 14
#include<stdio.h>
int main ()
{  int n ;
printf("enter a number \n");
scanf("%d", &n);
int sum = 0;
for (int i = 0 ; i<= n ; i++)
{     if (i%2!=0)
       { sum = sum + i;}
}
printf("the sum of the numbers is %d", sum);

return 0;
}
//QUESTON 27
#include<stdio.h>
int main()
{
int n ,row, spce, col;
 printf("enter the number of rows:\n");
 scanf("%d",&n);
 for (row = 1; row<= n ;row++)
 {
    for(spce = 1 ; spce <= (n-row ); spce++)
          { printf(" ");}
for(col = 1 ;col<= (2*row-1);col++)
           {     printf("*");}
           printf("\n");

 }
}
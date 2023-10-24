//QUESTON 26
#include <stdio.h>
int main ()
{
    int row , col,sp;

for (row= 1 ; row<=4;row++)
{
   for (sp = 1 ; sp<= (4-row) ; sp++)
           {printf(" ");}
           for (col= 1 ; col<=(2*row-1);col++)
                {printf("*");}
                printf("\n");

}

}
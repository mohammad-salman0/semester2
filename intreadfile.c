#include<stdio.h>
int main ()
{
FILE *fptr;
fptr = fopen("test.txt", "r");
int op ;
 fscanf(fptr,"%d",&op);
printf("number is %d\n", op);
 fscanf(fptr,"%d",&op);

printf("%d", op);
 fscanf(fptr,"%d",&op);
printf("%d", op);
 fscanf(fptr,"%d",&op);
printf("%d", op);
 fscanf(fptr,"%d",&op);
printf("%d", op);
fclose(fptr);

}
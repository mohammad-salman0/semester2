// QUESTION NO28 29 30
#include<stdio.h>
int main ()
{
int arr [5] ;
for (int i = 0 ; i<5 ; i++)
{                    
printf("enter %d element : ", i);
scanf("%d",&arr[i]);
}
printf("the original array is as follows\n ");

for (int j  = 0 ; j<5 ; j++)
{
  printf("%d", arr[j]);

}
printf("\n");
printf("the reverse of the array is\n ");
for (int k = 4 ; k >= 0 ; k--)
printf("%d", arr[k]);
}
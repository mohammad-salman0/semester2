#include<stdio.h>
int main ()
{
int n ;
printf ("enter a number \n");
scanf("%d", &n);
int no = 2;
for (int i = 1; i<=n;i++ ){
    printf("%d ",no);
    no=no*2;
}
  return 0;

}
// QUESTION NO 15
#include<stdio.h>
int main(){
    int n ;
    int count = 0;
    printf("enter any number \n");
    scanf("%d",&n);
    for(int i = 1 ; i <=n ; i++)
    {
      if (n%i==0)
      {count++;}
    }
    if (count ==2)
    printf("number is prime");
    else 
    printf("number is not prime");
}
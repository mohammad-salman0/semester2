//QUESTON 21
#include<stdio.h>
int main ()
{ 
    int n, digit;
    printf("enter any number \n");
    scanf("%d", &n);
    while(n>0)
    {
    digit = n%10;
    printf("%d",digit);
    n /=10; 
        
    }
    printf("\n");
}
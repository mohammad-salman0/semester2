// QUESTION NO32
#include<stdio.h>

int main (){

char str[10] ;
char ch ;
int i =0 ;

printf("enter any sentence :");
while (ch != '\n')
{
   scanf("%c", &ch);
   str[i]= ch;
   i++;

}
str[i]= '\0';

for ( int k = 0 ; str[k] != '\0'; k++)
printf("%c",str[k]);
}


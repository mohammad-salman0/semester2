// QUESTION NO35
#include<stdio.h>
#include<string.h>
int main ()
{
char str [50];
int flag = 0;
printf("enter a string \n");
gets(str);
int l = strlen(str);
for ( int i = 0 ; i <l ; i++)
{
if (str[i ]!= str[l-i-1])
flag++;
}

if (flag ==0)
printf("string is palindrome ");
else 
printf("string is not palindrome ");

}
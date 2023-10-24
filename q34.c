// QUESTION 34 
#include<stdio.h>
#include<string.h>
int main ()
{
char str [1000];
char ch ;
printf("enter a string \n");

gets(str);
int  l = strlen(str);
printf("the length of the string is%d\n", l);
for (int i = 0 ; i< (l/2); i++)
{
ch = str[i];
str[i] = str[l-1-i];
str[l-i-1] = ch;
}
puts(str);
}
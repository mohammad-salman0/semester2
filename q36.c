// QUESTION NO36
#include<stdio.h>
#include<string.h>
int main ()
{
char str[100];
printf("enter a string\n");
gets(str);
char str1[]= "hello";
strcpy(str,str1);
puts(str);
strrev(str1);
puts(str1);
strcat(str,str1);
puts(str);

   printf("%d", strcmp(str,str1));
}
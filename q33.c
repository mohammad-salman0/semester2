// QUESTION NO33
#include<stdio.h>
int main ()
{ 
char str [12];
printf("enter name ");
fgets(str,12,stdin);
puts(str);
int count1 = 0 ;
for (int i =0 ; str [i] != '\0';i++)
count1++;
count1= count1-1;
printf("%d",count1); 
}
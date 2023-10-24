#include <stdio.h>
int main ()
{
int age [4];
int *ptr = age;
for (int i = 0 ;i<4;i++)
{printf("enter the  %d element of array \n", i);
scanf("%d",(ptr+i));
printf("%d\n", *(ptr+i));
}

}
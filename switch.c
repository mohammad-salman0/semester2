#include<stdio.h>
int main (){
int ch;
printf("enter a character\n");
scanf("%d",&ch);
switch (ch){

case 1 : printf("the letter you entered is a \n");
       break;
case 2 : printf("the letter you entered is b \n ");
    break ;
case 3 : printf ("the letter you entered is c \n ");
    break ;
default : printf("the letter you enterd is neither a nor b nor c \n ");   



}

return 0;
}
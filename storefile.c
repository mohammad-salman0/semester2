#include <stdio.h>
int main ()
{  

    FILE *fptr;
    fptr = fopen("student.txt", "w");
    char name [100];
    int age;
    float cgpa;
    printf("enter the name of the student \n");
    scanf("%s",name);
    printf("enter the age of the student\n");
    scanf("%d", &age );
    printf("enter the cgpa of the student \n");
    scanf("%f", &cgpa);
    fprintf(fptr,"%s\t",name);
    fprintf(fptr,"%d\t",age);
    fprintf(fptr,"%f",cgpa);
}
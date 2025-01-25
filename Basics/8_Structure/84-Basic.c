#include<stdio.h>
#include<string.h>
/*
Structure is a collection of values of differenet data types.

Structure is a user defined data type.

In C, the strcpy function is used to copy one string into another because strings in C are represented as arrays of characters, and arrays don't support direct assignment like variables of basic data types (e.g., int or float).
*/

struct Student{ //define a structure 
char name[100];
int roll;
float cgpa;
}  ;


int main(){

    struct Student s1; // define a structure variable
    s1.cgpa = 3.99; // Assign values
    s1.roll = 12;
    strcpy(s1.name, "Kallol");

    printf("Student name = %s\n", s1.name);
    printf("Student name = %.2f\n", s1.cgpa);
    printf("Student name = %d\n", s1.roll);


return 0;
}
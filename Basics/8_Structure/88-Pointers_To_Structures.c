#include <stdio.h>
/*
Pointers to structures in C are used to efficiently access and manipulate the members of structures,
*/
struct student
{
    int roll;
    float cgpa;
    char name[100];
};
int main()
{

    struct student s1 ={1664,9.8,"Kallol Das Kushol"}; // Declare a structure variable
    struct student *ptr = &s1; // Declare a pointer to the structure

    printf("student.roll with pointer: %d", (*ptr).roll);

    // Arrow operator 
    // (*ptr).roll can be written like,  ptr->roll
    // (*ptr).name can be written like,  ptr->name

    printf("\nStudent->roll %d \n", ptr->roll);
    printf("Student->name %s \n",ptr->name);
    printf("Student->cgpa %f \n",ptr->cgpa);


    return 0;
}
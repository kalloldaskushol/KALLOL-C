#include<stdio.h>
#include<string.h>
/*

In C, an array of structures is used to store multiple records, where each record is represented as a structure. It's a way to group related data into a single entity and manage multiple such entities in a single array.

struct student CSE[100];
struct student EEE[100];
struct student IT[200];

for access ->
    CSE[0].roll = 102;
    IT[5].cgpa = 4.00;
*/

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){

    struct student CSE[500];
    CSE[0].roll = 123;
    CSE[0].cgpa = 3.94;
    strcpy(CSE[0].name, "KALLOL DAS KUSHOL");

    printf("The name of 0-th index student is: %s \n", CSE[0].name);
    printf("The roll of 0-th index student is: %d \n", CSE[0].roll);
    printf("The cgpa of 0-th index student is: %.2f \n", CSE[0].cgpa);

    // We can inirialize the structure like we can initialize an array

    struct student s1 = {123, 3.66, "Kallol"};
    struct student s2 = {321, 4.33, "Shubrata"};

    //Array mathod
    struct student IT[6] = {
        {123, 4.00, "Shourav"}, // 0index
        {456, 3.80, "Anika"}, // 1 index
        {789, 3.90, "Nishat"}, // 2 index
        {987, 3.70, "Raihan"}, // 3 index
        {654, 3.95, "Farhan"}, // 4 index
        {321, 3.85, "Ayesha"} // 5 index
    };
    printf("The name of 0-th index student is: %s \n", IT[5].name);
    printf("The roll of 0-th index student is: %d \n", IT[5].roll);
    printf("The cgpa of 0-th index student is: %.2f \n", IT[5].cgpa);
return 0;
}
#include<stdio.h>
typedef struct ComputerScienceEngineering {
    int roll;
    float cgpa;
    char name[200];
} cse; //Giving nickname

int main(){

    cse s1 = {123,3.22,"kallol"};
    cse s2 = {321, 5.22, "das"};
    cse s3;

    printf("roll of s1 is %d", s1.roll);

return 0;
}
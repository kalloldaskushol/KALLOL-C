#include<stdio.h>
struct student {
    int roll;
    float cgpa;
    char name[200];
};

void printInfo(struct student s1){
    printf("Student Information:");
    printf("\nStudent->roll %d \n", s1.roll);
    printf("Student->name %s \n",s1.name);
    printf("Student->cgpa %f \n",s1.cgpa);

}
int main(){

    struct student s1 = {1664, 9.2, "kallol Das Kushol"};
    printInfo(s1);
return 0;
}
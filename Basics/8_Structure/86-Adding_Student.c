#include<stdio.h>
#include<string.h>

struct student
{
    char name[100];
    int id;
    char section;
};

int main(){

    struct student s1;
    strcpy(s1.name, "Kallol");
    s1.id = 1;
    s1.section = 'A';

    struct student s2;
    strcpy(s2.name, "Shourav");
    s2.id = 2;
    s2.section = 'A';

    struct student s3;
    strcpy(s3.name, "Shubrata");
    s3.id = 3;
    s3.section = 'A';

    printf("Student-1 name: %s\n", s1.name);
    printf("Student-1 section: %c\n", s1.section);
    printf("Student-1 Id: %d\n", s1.id);
    
    printf("Student-2 name: %s\n", s2.name);
    printf("Student-2 section: %c\n", s2.section);
    printf("Student-2 Id: %d\n", s2.id);
    
    printf("Student-3 name: %s\n", s3.name);
    printf("Student-3 section: %c\n", s3.section);
    printf("Student-3 Id: %d\n", s3.id);

return 0;
}
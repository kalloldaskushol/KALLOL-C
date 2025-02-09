#include <stdio.h>

struct Student {
    char name[51]; 
    int rollNumber;
    int math, science, english;
    int totalMarks;
};

int main() {
    int N;
    scanf("%d", &N);  
    struct Student students[N]; 

    for (int i = 0; i < N; i++) {
        scanf("%s %d %d %d %d", students[i].name, &students[i].rollNumber, 
              &students[i].math, &students[i].science, &students[i].english);
        
        students[i].totalMarks = students[i].math + students[i].science + students[i].english;
    }

    for (int i = 0; i < N; i++) {
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Math Marks: %d\n", students[i].math);
        printf("Science Marks: %d\n", students[i].science);
        printf("English Marks: %d\n", students[i].english);
        printf("Total Marks: %d\n\n", students[i].totalMarks);
    }

    return 0;
}

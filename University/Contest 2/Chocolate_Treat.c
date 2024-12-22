#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int add_Choc = 0;
    int total_Choc = N;  //33


    while (total_Choc % 7 != 0) { 
        add_Choc++;
        total_Choc++;
    }

    int total_students = total_Choc / 7;


    printf("%d\n", add_Choc);
    printf("%d\n", total_students);

    return 0;
}

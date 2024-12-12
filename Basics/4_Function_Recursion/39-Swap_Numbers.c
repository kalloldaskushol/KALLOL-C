#include<stdio.h>

int main(){

    // Swap a number using a 3rd Variable
    int a,b;
    printf("Enter a & b =");
    scanf("%d %d", &a , &b);

    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("The value of a and b are %d and %d", a, b);

    // without using a third variable

    printf("\nEnt er a & b =");
    scanf("%d %d", &a , &b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("The value of a and b are %d and %d", a, b);


return 0;
}
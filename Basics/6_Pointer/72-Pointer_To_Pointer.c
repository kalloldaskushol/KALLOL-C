#include<stdio.h>

int main(){

    // A variable that stores the memory address of another pointer.

    // Syntex-> int **pptr

    float price = 100.00;

    float *ptr = &price;

    float **pptr = &ptr;

    printf("%d", *pptr);


return 0;
}
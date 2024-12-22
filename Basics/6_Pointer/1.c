#include<stdio.h>

int main(){

    int kallol = 99;
    int *ptr=&kallol;
    int **ptr2=&ptr;

    printf("%d\n", kallol); //99
    printf("%d\n", &kallol); //adress of kallol
    printf("%d\n", ptr); //address of kallol
    printf("%d\n", ptr2); //address of ptr
    printf("%d\n", **ptr2); //value of ptr
    printf("%d\n", *ptr); //99

return 0;
}
#include<stdio.h>

int main(){
/*
a pointer is a variable that stores the memory address of another variable.

int *ptr;  // Pointer to an integer

int x = 10;
int *ptr = &x;  // ptr now stores the address of x

int x = 10;
int *ptr = &x;
printf("%d\n", *ptr);  // Dereferencing the pointer to get the value of x

int x = 10;
int *ptr = &x;
int **ptr2 = &ptr;  // Pointer to pointer

*/
    int kallol = 99;
    int *ptr=&kallol;

    printf("Address of kallol is: %p \n", &kallol );
    printf("Address of kallol is: %p \n", ptr);
    // same because they are same.
    printf("Address of pointer is: %p \n", &ptr);
    printf("Value of pointer %d\n", *ptr);
    printf("Value at address %d", *(&kallol));
    // * mainly indicates to bring the value stored at the address




/*
    int **ptr2=&ptr;

    printf("%d\n", kallol); //99
    printf("%d\n", &kallol); //address of kallol
    //but the formet specifier should be %p which is the accurate formet specifer for printing address.
    printf("%d\n", ptr); //address of kallol
    printf("%d\n", ptr2); //address of ptr
    printf("%d\n", **ptr2); //value of ptr
    printf("%d\n", *ptr); //99

    printf("%p\n", ptr); // prints the address which is stored in the pointer.
    //in this case it will print address of variable named kallol
    printf("%p\n", &ptr);// prints the address of pointer named ptr
    printf("%d\n", *ptr); // prints the value of the address putted in the pointer.
*/
return 0;
}
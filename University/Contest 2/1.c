// 12. Read basic of pointer from here : https://www.programiz.com/c-programming/c-pointers

// 13. Solve these problems from pointer 


// Question 1

// Assume that num = 25 and the address of num is 0x0032AA10. Find the output of the following program:

// #include <stdio.h>
// int main() {
//     int num = 25;
//     int *ptr;
//     ptr = &num;
//     printf("%d\n", num);  //25
//     printf("%d\n", *ptr); //25
//     printf("%p\n", &num); //add
//     printf("%p\n", ptr); // same add
//     printf("%p\n", &ptr); // poi add
//     return 0;
// }

// Question 2

// If the address of value = 0x0045EE20 and the address of pointer q = 0x0045EE24, find the output:

// #include <stdio.h>
// int main() {
//     int value = 12;
//     int *q;
//     q = &value;
//     *q = *q + 8;
//     printf("Value of value: %d\n", value); //20
//     printf("Value at *q: %d\n", *q); //20
//     printf("Address of value: %p\n", &value); // addd
//     printf("Address stored in q: %p\n", q); //same add
//     return 0;
// }

// Question 3

// Assume the memory locations are allocated as follows: data = 0x0023CC40 and p = 0x0023CC44. Find the output:

// #include <stdio.h>
// int main() {
//     int data = 18;
//     int *p;
//     p = &data;
//     printf("Address of data: %p\n", &data); //add
//     printf("Address stored in p: %p\n", p); // same add
//     printf("Value of data: %d\n", data); //18
//     printf("Value accessed using p: %d\n", *p);  //18
//     return 0;
// }

// Question 4

// Consider the following memory allocations: x = 5 and the address of x = 0x0025DD30. Predict the output:

// #include <stdio.h>
// int main() {
//     int alpha = 5, beta = 15;
//     int *r1, *r2;
//     r1 = &alpha;
//     r2 = &beta;
//     printf("Address of alpha: %p, Address of beta: %p\n", &alpha, &beta); // add 
//     printf("Value of *r1: %d, Value of *r2: %d\n", *r1, *r2); // value
//     printf("Address stored in r1: %p, r2: %p\n", r1, r2); //add
//     return 0;
// }

// Question 5

// What will be the output of the following program? Assume the memory locations as follows: item1 = 0x0056AB10, item2 = 0x0056AB14, and p = 0x0056AB18.

// #include <stdio.h>
// int main() {
//     int item1 = 50, item2 = 60;
//     int *p;
//     p = &item1;
//     printf("Value of item1: %d\n", *p); //50
//     p = &item2;
//     printf("Value of item2: %d\n", *p); //60
// //     return 0;
// }
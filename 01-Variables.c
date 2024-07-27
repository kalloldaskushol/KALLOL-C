#include<stdio.h>
// Type declaration Instructions.
/* 
Variable is a name of memory location.
We cant use a variable without declaraion.
We cant use int to add a float value in this case the float will become integer.
*/

int main (){
    // A variable is a container which stores a ‘value’
    int a; // Declare an integer variable "a"
    a = 2; // Variable initialization 

    a = 3; // a is assigned "3"
    float b = 4.7; // b is assigned "4.7"
    char c = 'A'; // c is assigned 'A'
    
    int i = 10;
    int j = i ;
    printf("the value of j is = %d\n",j);

//  Assigning the same value to multiple variables
    int k = 2, z = 3,  q = 4, w = 5;

    // %d is called format sppecifier
    // %d is for int, %f is for float, %c is for char

    printf("the value of k is = %d\n",k);
    printf("the value of z is = %d\n",z);
    printf("the value of q is = %d\n",q);    
    return 0;
}
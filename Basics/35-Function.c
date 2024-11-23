#include<stdio.h>

void printHello(){ //function declaration/prototype
    printf("hello krishna!"); //function definition
}

//WAP to print SUM.

int sum(int a, int b){
    int sum = a + b;
    printf("\nSUM of %d & %d is = %d", a,b,sum);
    return sum;
}
int main(){
    printHello(); //function call
    sum(2,3);
return 0;
}
/*
Functions are manly in two types 
1.Library Function - special function inbuilt in C 
2.User defined function - declaredand defined by the programmer

Passing arguments
Functions can take value which is called parameter.
functions can give value which is called return value.

*/
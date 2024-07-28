#include <stdio.h>
/*
An Arithmetic operation between

int and int → int

int and float → float

float and float → float

Example:
5/2 becomes 2 as both the operands are int
5.0/2 becomes 2.5 as one of the operands is float
2/5 becomes 0 as both the operands are int
*/
int main()
{

    int a = 9;
    int b = 2;
    float c = a / b; // 9 div 2 = 4.5
    printf("The value of a div b is %f", c);

    // the result will be 4 bcz a and b both are float
    /*
    In programming, type compatibility is crucial.
     For int a = 3.5;, the float 3.5 is demoted to 3,
     losing the fractional part because a is an integer.
     Conversely, for float a = 8;, the integer 8 is promoted to 8.0,
    matching the float type of a and retaining precision.
    */

    return 0;
}
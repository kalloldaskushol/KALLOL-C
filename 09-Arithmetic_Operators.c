#include<stdio.h>
// ARITHMETIC INSTRUCTIONS
// Arithmetic instructions perform mathematical operations
/*
+ (Addition)
- (Subtraction)
* (Multiplication)
/ (Division)
% (Modulus)
*/
int main(){
    int a = 5;
    int b = 3;
    int c = a+b;
    printf("the values of a is %d and the value of b is %d and the sum is %d\n",a,b,c);

    //Modulus operator is used to get the remainder

    printf("The remainder value of a and b is = %d",a%b);
/*

% → returns the remainder

% → cannot be applied on float

% → sign is same as of numerator (-5%2=-1)

*/

    /*
    Note: a^b is not a to the power b in C
    */

return 0;
}
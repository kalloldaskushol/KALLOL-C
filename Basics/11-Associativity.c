#include<stdio.h>
/*
3*x – 8*y is (3x)-(8y) or 3(x-8y)?
In C language simple mathematical rules like BODMAS, no longer apply.
The answer to the above questions is provided by operator precedence & associativity.*/

// Priority Operators
// 1st * / %
// 2nd + -
// 3rd =

int main(){

    int x = 3;
    int y = 6;
    int z = 9;

    printf("The value of 3x-8y = %d \n",3*x-8*y);
    // 1st the multiplcication will exicute
    // 3*3 - 8*6
    // 9 - 48
    // -39

    printf("The value of x*y/z + 7 = %d\n",x*y/z + 7);
    // if the presedence is same then left to right rule is initiated
    // 3*6 / 9 + 7
    // 18 / 9 + 7
    // 2 + 7
    // 9

    printf("The value of 3y/2z + 7x = %d\n",3*y/2*z + 7*x);
    // 3*6 / 2*9 + 7 * 3
    // 18 / 2*9 + 21
    // (18 / 2)*9 + 21
    // (9)*9 + 21
    // 81 + 21
    // 102
return 0;
}
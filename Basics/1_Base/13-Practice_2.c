#include <stdio.h>

int main()
{

    // Which of the following is invalid in C ?
    int a = 1;
    int b = a;
    int v = 3 * 3;
    // char dt = '31 dec 2001' is  wrong!!!!

    // What data type will 3.0/8 – 2 return?
    /*
        float / int = float -> 3.0/8 = 0.375000
        float - int = float -> 0.375000 - 2 = -1.625000

    */
    printf("%f", 3.0 / 8 - 2);

    // Write a program to check whether a number is divisible by 97 or not.
    printf("\nEnter the number=");
    scanf("%d", &a);

    printf("the value of a & 97 is %d", a % 97);

    // Explain step by step evaluation of 3*x/y – z+k,
    //  where x=2, y=3, z=3, k=1
    int x = 2, y = 3, z = 3, k = 1;
    // 3*x/y – z+k
    // 3*2/y – z+k
    // 6/y – z+k
    // 6/3 – z+k
    // 2 – z+k
    // 2 – 3+k
    // -1 + k
    // -1 + 1
    //  0

    printf("\nThe result is %d", 3 * x / y - z + k);

    /*
    3.0 + 1 will be:
    a.Integer.
    b.Floating point number.
    c.Character.
    
    Ans= Float + int operation is float
    */

    return 0;
}
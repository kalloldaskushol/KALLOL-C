#include<stdio.h>

// Function to calculate the sum from 1 to n using recursion
int mul(int n) {
    // Base case: if n is 0, the sum is 0
    if(n == 1) {
        return 1;
    }
    
    // Recursive case: sum of numbers from 1 to n
    return n * mul(n - 1);  // n + sum of numbers from 1 to (n-1)
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);  // Get the user input
    
    // Call the sum function and print the result
    int result = mul(number);
    printf("mul of numbers from 1 to %d is: %d\n", number, result);
    
//     return 0;
}

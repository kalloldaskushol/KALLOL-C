#include <stdio.h>
#include <math.h>

int main() {
    int n, sum = 0, temp, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    temp = n;
    while (temp>0) { // Count digits
        digits++;
        temp = temp / 10;
    }
    
    temp = n;
    while (temp>0) { // Calculate sum of powers
        sum = sum + pow(temp % 10, digits); //Number to the power digit
        temp = temp / 10;
    }
    
    if (sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
    
    return 0;
}

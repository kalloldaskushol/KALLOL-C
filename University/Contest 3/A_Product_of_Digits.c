#include <stdio.h>

int main() {
    int N, digit, product = 1;
    scanf("%d", &N);

    while (N > 0) {
        digit = N % 10; 
        if (digit != 0) 
            product *= digit;
        N /= 10;
    }

    printf("%d\n", product);
    return 0;
}

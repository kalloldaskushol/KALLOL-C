#include <stdio.h>

int main() {
    int N, reversed = 0;
    scanf("%d", &N);
    while (N > 0) {
        int digit = N % 10;
        reversed = reversed * 10 + digit;
        N =N /10;
    }
    printf("%d\n", reversed);
    return 0;
}
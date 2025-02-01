#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);
    
    int digits[10] = {0};
    int temp = year;

    while (temp > 0) {
        int digit = temp % 10;
        if (digits[digit] > 0) {
            printf("NO\n");
            return 0;
        }
        digits[digit]++;
        temp /= 10;
    }

    printf("YES\n");
    return 0;
}

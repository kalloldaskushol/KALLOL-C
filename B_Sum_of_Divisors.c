#include <stdio.h>

int main() {
    int N, sum = 0;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (N % i == 0)
            sum += i;
    }

    printf("%d\n", sum); 
    return 0;
}

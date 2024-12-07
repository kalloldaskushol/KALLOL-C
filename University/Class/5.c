#include <stdio.h>

int main() {
    float numbers;
    int positiveCount = 0;

    for (int i = 1; i<= 6; i++) {
        printf("Enter number=");
        scanf("%f", &numbers);
        if (numbers > 0) {
            positiveCount++;
        }
    }
    printf("%d valores positivos\n", positiveCount);

    return 0;
}

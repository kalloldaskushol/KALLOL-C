#include <stdio.h>

int main() {
    int T, Alice, Bob, Charlie;    scanf("%d",&T);
    for(int i=0; i<T; i++){
        scanf("%d %d %d", &Alice, &Bob, &Charlie);

        if (Alice > Bob && Alice > Charlie) {
            printf("Alice\n");
        } else if (Bob > Alice && Bob > Charlie) {
            printf("Bob\n");
        } else {
            printf("Charlie\n");
        }
    }
}


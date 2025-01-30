#include <stdio.h>

int main() {
    int T,R;
    scanf("%d",&T);
    for(int i=0; i<T; i++){
        scanf("%d", &R);

        if (R < 3) {
            printf("LIGHT\n");
        } else if (R >= 3 && R < 7) {
            printf("MODERATE\n");
        } else {
            printf("HEAVY\n");
        }
    }

}


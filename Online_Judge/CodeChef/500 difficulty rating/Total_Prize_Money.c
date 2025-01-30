#include <stdio.h>

int main() {
    int T,X,Y;
    scanf("%d",&T);
    for(int i=0; i<T; i++){
        scanf("%d %d", &X, &Y);
        printf("%d\n", (10*X)+(90*Y));
    }
}


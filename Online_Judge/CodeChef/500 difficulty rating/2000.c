#include <stdio.h>

int main() {
    int T,X,Y;
    scanf("%d",&T);
    for(int i=0; i<T; i++){
        scanf("%d %d", &X, &Y);
        if(X>Y) printf("%d\n", X);
        else 
        printf("%d\n", Y);

    }
}


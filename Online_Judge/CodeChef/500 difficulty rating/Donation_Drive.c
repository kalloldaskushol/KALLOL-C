#include <stdio.h>

int main() {
    int T,X,N;
    scanf("%d",&T);
    for(int i=0; i<T; i++){
        scanf("%d %d", &X, &N);
        printf("%d\n" , X-N);
    }
}


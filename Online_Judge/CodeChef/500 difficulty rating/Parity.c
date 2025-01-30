#include <stdio.h>

int main() {
    int T,N;
    scanf("%d",&T);
    for(int i=0; i<T; i++){
        scanf("%d", &N);
        if(N%2 == 0) printf("Yes\n");
        else printf("No\n");
    }
}


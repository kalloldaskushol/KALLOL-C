#include <stdio.h>

int main() {
    int T,X,Y;
    scanf("%d",&T);
    for(int i=0; i<T; i++){
        scanf("%d %d", &X, &Y);
        if(X<Y) printf("YES\n");
        else printf("NO\n");
    }
}


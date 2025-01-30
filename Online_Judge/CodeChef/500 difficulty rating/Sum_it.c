#include <stdio.h>

int main() {
    int T,X,Y,Z;
    scanf("%d",&T);
    for(int i=0; i<T; i++){
        scanf("%d %d %d", &X, &Y, &Z);
        if( (X+Y)==Z ) printf("YES\n");
        else printf("NO\n");
    }
}


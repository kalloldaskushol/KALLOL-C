#include <stdio.h>

int main() {
    int T,X;
    scanf("%d",&T);
    for(int i=0; i<T; i++){
        scanf("%d", &X);
        if(X>24) printf("Yes\n");
        else 
        printf("No\n");
    }
}


#include<stdio.h>

int main(){

    int N,totaal=0;

    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < N; i++) {
        if(arr[i]>0) totaal++;
    }
    
    printf("%d",totaal);


return 0;
}
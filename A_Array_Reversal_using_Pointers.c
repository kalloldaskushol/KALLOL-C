#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N);  

    int arr[N];
    for (i = 0; i < N; i++)
        scanf("%d", arr + i); 

    for (i = N - 1; i >= 0; i--)
        printf("%d ", *(arr + i));

    printf("\n");
    return 0;
}

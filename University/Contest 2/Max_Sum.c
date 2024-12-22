#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_sum = arr[0];  
    int current_sum = arr[0]; 

    for (int i = 1; i < n; i++) {
        if (current_sum > 0) {
            current_sum += arr[i];
        } 
        else {
            current_sum = arr[i];
        }

        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("%d\n", max_sum);
}

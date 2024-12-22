#include<stdio.h>

int main() {
    int arr[6] = {2, 6, 9, 8, 7, 5};
    int sort = arr[0]; 
    for (int i = 0; i < 6; i++) {
        if (arr[i] < sort) {
            sort = arr[i]; 
        }
        printf("%d ", arr[i]); 
    }

    return 0;
}

#include<stdio.h>
int fun(int arr[]){
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
}

int main(){

    int arr[2] = {2,9};

    printf("Before swapping: %d %d\n", arr[0], arr[1]);

    fun(arr);

    printf("After swapping: %d %d\n", arr[0], arr[1]);
    }

// return 0;
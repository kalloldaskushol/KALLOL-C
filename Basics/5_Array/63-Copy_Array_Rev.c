#include<stdio.h>

int main(){

    int arr[5]={1,2,3,4,5}; //last index 4
    int brr[5];

    for(int i=0; i<5; i++){
        brr[i] = arr[4-i]; //4-0 = 4
    }
    printf("\n Copy Array in Reverse: ");
    for(int i=0; i<5; i++) printf("%d ", brr[i]);

printf("\nAnother Method\n");

    //Without extra array
    for(int i=0; i<5; i++){
        printf("%d ",arr[4-i]);
    }
return 0;
}
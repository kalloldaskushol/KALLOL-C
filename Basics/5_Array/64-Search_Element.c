#include<stdio.h>

int main(){

    int arr[7]={1,2,3,4,4,6,7};
    int n;
    printf("Enter the number you want to search:");
    scanf("%d", &n);

    for(int i =0; i<7; i++){
        if(arr[i] == n) printf("Found in the %d index\n",i);
    }
return 0;
}
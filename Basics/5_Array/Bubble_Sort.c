#include<stdio.h>

int main(){

    int a[5] = {5,4,3,2,1}; 
    int n=5;
    for(int i=0; i<5; i++){
        for(int j=0;          j<(n-i-1)   ; j++){ 
            if(a[j] < a[j+1]){ //1,2,3,4,5
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("New array: ");
    for(int i=0; i<5; i++) printf("%d ", a[i]);

return 0;
}
#include<stdio.h>

int main(){

    int arr[5] = {1,5,6,2,7};

    int max = arr[0];
    for(int i=0; i<5; i++){
        if(arr[i]>max) max = arr[i];
    }
    printf("\nMax value:%d",max);


int brr[5] = {1,5,6,-22,-7};

int min = brr[0];
for(int i=0; i<5; i++){
    if(brr[i]<min) min = brr[i];
}
printf("\nMin value:%d",min);

return 0;
}
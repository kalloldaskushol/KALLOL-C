#include<stdio.h>
#include<limits.h>
int main(){
    // EASY ONE

    int arr[5] = {1,5,6,2,7};

    int max = arr[0];
    int secondMAX = arr[0]; 
    for(int i=0; i<5; i++){
        if(arr[i] > max) max = arr[i];
    }
    printf("\nMax value:%d",max);

    for(int i = 0; i<5; i++){
        if( arr[i] != max && arr[i] > secondMAX){
            secondMAX = arr[i];
        }
    }
    printf("\nsecndMax value:%d\n\n",secondMAX);

printf("Another Method\n");
    //By one loop
    
    int brr[5] = {5,4,3,3,1};

    max = INT_MIN;
    secondMAX = INT_MIN; 

    for(int i=0; i<5; i++){
        if(brr[i] > max) {
            secondMAX = max;
            max = brr[i];
        }
        else if(brr[i]>secondMAX && max != brr[i]) secondMAX = brr[i];
    }

    printf("\nMax value:%d",max);

    printf("\nsecndMax value:%d",secondMAX);


}
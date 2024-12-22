#include<stdio.h>

int main(){
    int totalPairs = 0;
    int x=12;
    int arr[8]={1,2,3,4,5,6,7,8};
    
    for(int i=0;i<8;i++){ //index starts from 0
        for(int j=i+1;j<8;j++){ //index starts from 1
            for(int k = j+1; j<8; j++){ //index starts from 2
                if(arr[i] + arr[j] +arr [k]== x) {
                totalPairs++;
                printf("(x,y,z) = (%d,%d,%d)\n",arr[i], arr[j],arr[k]);
                }
            }
        }
    }
    printf("total number of pairs: %d",totalPairs);
return 0;

}
#include<stdio.h>
#include<stdbool.h>
int main(){

    int arr[7] = {1,3,2,4,1,2,3};
    for(int i =0; i<7; i++){
        bool flag  = false;
        
        for(int j=i+1; j<7; j++){
        
            if(arr[i] == arr[j]){  
                flag = true;
            }
        }
        if(flag == false){
            printf("%d",arr[i]);
        }
    }

return 0;
}
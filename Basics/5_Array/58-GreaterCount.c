#include<stdio.h>

int main(){
    
    int arr[6]={1,2,3,4,5,6};
    int x=2;
    int count=0;
    for(int i=0;i<6;i++){
        if(arr[i]>x) count++;
    }
    
    printf("%d",count);


    

return 0;
}
#include<stdio.h>

int main(){

    int arr[6]={1,3,5,7,9,11};
    
    int oddsum=0,evensum=0;
    for(int i=0;i<6;i++){
        if(i%2==0) evensum+=arr[i];
        else  oddsum+=arr[i];
    }
    printf("\n%d",evensum);
    printf("\n%d",oddsum);


    for(int i=0;i<6;i++){
        if(i%2==0) arr[i] +=10;
        else arr[i] *=2;
    }
    
    for(int i = 0; i<6; i++) printf("\nnew element%d ",arr[i]);


return 0;
}
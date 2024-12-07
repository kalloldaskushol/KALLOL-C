#include<stdio.h>

int main(){
    // int i,j,k=1;
    // for( i=5;i>=2;i--){
    //     for( j=1;j<=2;j++){
    //         for(;k<=10;k=k*4){
    //             printf("%d %d %d \n",i,j,k);
    //         }
    //     }
    // }
    // printf("%d %d %d ",i,j,k);
    for(int p=1;p<2;p++){
        for(int s=0;s<=1;s++){
            for(int q=-1;q<1;q++){
                for(int r=-11;r<=13;r+=5){
                    printf("%d %d %d %d \n",p,q,r,s);
                }
            }
        }
    }

return 0;
}
#include<stdio.h>

void incresing(int n){
    if(n == 0) return;
    incresing(n-1);
    printf("%d \n",n);
    return;
}

int main(){

    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    incresing(n);
    
return 0;
}
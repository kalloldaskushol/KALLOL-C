#include<stdio.h>

int fibo(int n){
    if(n==0 || n==1) return 1;

    return fibo(n-1) + fibo(n-2);
}

int main(){

    printf("%d", fibo(4));

return 0;
}
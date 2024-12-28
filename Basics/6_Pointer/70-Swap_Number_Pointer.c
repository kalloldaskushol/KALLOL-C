#include<stdio.h>

void swap( int *x, int *y){
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){

    int a = 2, b = 4;
    
    swap(&a,&b);
    printf("a=%d, b=%d",a,b);

 
return 0;
}
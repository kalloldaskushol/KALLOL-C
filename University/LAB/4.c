#include<stdio.h>
void evenOdd(int x){
    if(x%2 == 0){
    printf("%d is even",x);
    }
    else{
    printf("%d is odd",x);
    }
}
int main(){
    int x;

    printf("Input any number:");
    scanf("%d",&x);
    evenOdd(x);
return 0;
}
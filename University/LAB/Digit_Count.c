#include<stdio.h>

int main(){

    int n,digit=0;
    
    printf("Enter the number:");
    scanf("%d", &n);
    while(n>0){  //if n is less then 0 then break the loop.
        digit++;
        n = n/10;
    }

    printf("%d" , digit);
return 0;
}
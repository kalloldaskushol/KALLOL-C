#include<stdio.h>

int fact(int n){
    if(n == 1){
        return 1;
    }

    return n * fact (n-1);
}

int main(){
        int n;
    printf("Enter a number: ");
    scanf("%d", &n);  // Get the user input
    
    // Call the sum function and print the result
    int result = fact(n);
    printf("%d", result);
return 0;
}
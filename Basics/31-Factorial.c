
#include<stdio.h>

int main(){

    //A factorial is calculated by starting with the number and multiplying it by each previous integer until reaching 1.

    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    long int fact=1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    printf("The factorial of the number %d is %d", n,fact);


return 0;
}
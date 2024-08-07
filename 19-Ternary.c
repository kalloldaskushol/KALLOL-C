#include<stdio.h>

int main(){

    // A shorthand “if – else” can be written using the conditional or ternary operators
    // Condition ? expression_if_True : expression_if_False
    int a,b;
    printf("Enter the value of a = ");
    scanf("%d",&a);
    printf("Enter the value of b = ");
    scanf("%d",&b);
    
    a>b?printf("A is greater") :  printf("B is greater");

return 0;
}
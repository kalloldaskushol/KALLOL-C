#include<stdio.h>
//Factorial calculation by recursion

int factorial(int n){
    if(n==1 || n==0) return 1;// Base case
    int recAns = n * factorial(n-1);
    return recAns;  // Recursion
} // if return hits then no lines work under it.
int main(){

    /*
    Recursion is a programming concept where a function calls itself
    
    1.Base Case:
The condition under which the recursion stops.
Without a base case, recursion will lead to infinite calls and eventually crash the program.
    
    2.Recursive Case:
The part of the function where it calls itself to break the problem into smaller instances.
*/

/*
    n! = n X (n-1)!
    f(n) = n X f(n-1) 
*/

    int n;
    printf("Enter number of factorial:");
    scanf("%d", &n);

    int fact = factorial(n);
    printf("%d", fact);
return 0;
}
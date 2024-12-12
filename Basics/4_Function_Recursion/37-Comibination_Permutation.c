#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact = fact * i;
    }
    return fact;
}
int main(){
//Combination->

    int n,r;
    printf("Enter the value of n and r:");
    scanf("%d %d", &n, &r);

    int nFactorial = factorial(n);
    int rFactorial = factorial(r);
    int nr_Factorial = factorial(n-r);

    int nCr = nFactorial/ (rFactorial*nr_Factorial);
    printf("%d \n",nCr);

// permutation ->

    int nPr = nFactorial / nr_Factorial;
    printf("%d \n",nPr);

return 0;
}
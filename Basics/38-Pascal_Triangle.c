#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r){
    int nCr = factorial(n) / (factorial(r)*factorial(n-r));
}
int main(){
// Combination->
    int n;
    printf("Enter the value of row:");
    scanf("%d", &n);

    for(int row=0;row<=n;row++){
        for(int col=0;col<=(n-row);col++){
            printf(" ");
        }
        for(int col=0;col<=row;col++){
            int iCj = nCr(row,col);
            printf("%d ", iCj);
        }
        printf("\n");
        }

return 0;
    
}
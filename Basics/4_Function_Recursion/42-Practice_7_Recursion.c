#include<stdio.h>
//WAP that prints n to 1 using recursion.
void decreasing(int n){
    printf("%d \n",n);
    if(n==1) return;
    decreasing(n-1);
}

// Back tracking by recursion.

void increasing(int start,int end ){
    if(start>end) return; // start = 2, end = 1 then stop
     
    printf("%d \n",start);
    increasing(start+1, end); //end is constant
}

int sum(int n){
    if(n==0 || n==1) return n;
    return n + sum (n-1); // sum of 5 = 5 + sum(4)
                          //  sum of 4 = 4 + sum(3)
}
int power(int a, int b){
    if (b == 0) return 1;

    int recAns = a * power(a, b-1);/*
     2 t.t.p 3

    2pow3 = 2 * 2pow2
    2pow2 = 2 * 2pow1
    2pow1 = 2 * 2pow0
    2pow0 = 1 

    the 1 will pass
         
    2pow3 = 2 * 4 == 8 --->step-4
    2pow2 = 2 * 2 == 4 --->step-3
    2pow1 = 2 * 1 == 2 --->step-2
    2pow0 = 1 --->step-1

    */
    return recAns;
}
int main(){
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    decreasing(n);
    printf("END \n");
    increasing(1,n);
    printf("END \n");
    int ans = sum(5);
    printf("sum of all the numbers are: %d", ans);

    int a,b;
    printf("\nEnter base:");
    scanf("%d",&a);

    printf("\nEnter power:");
    scanf("%d",&b);
    printf("%d", power(a,b));

return 0;
}
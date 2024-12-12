#include <stdio.h>

int prime(int x){
    int divisor=0;
    for(int i=1; i<=x; i++){
        if( x % i == 0) divisor++;
    }
    return divisor;
}
int main()
{
    int n; 
    printf("Enter a number:");
    scanf("%d",&n); // 17 

    // int divisors = 0;
    // for (int i = 1; i <= n; i++) {
    //     if (n % i == 0) {
    //         divisors++;
    //     }
    // }
    int divisors = prime(n);

    if (divisors == 2) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

return 0;
}
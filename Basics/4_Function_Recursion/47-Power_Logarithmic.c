#include<stdio.h>
int power(int a, int b){
    if(b==0) return 1;
    if(b==1) return a;// a to the power b=1 is always a.

    int x = power(a,b/2);

    if(b%2 == 0) return x*x; //EVEN
    else return x*x*a; //ODD
}

int main(){
    int a,b;
    printf("\nEnter base:");
    scanf("%d",&a);

    printf("\nEnter power:");
    scanf("%d",&b);

    printf("\nPower result:%d", power(a,b));

return 0;
}
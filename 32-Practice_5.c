#include<stdio.h>

int main(){

    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    for(int i=10; i>=1; i--){

        printf("%d\n",i*n);
    }

//calculate sum from min and max value given by the user;
    int min,max,sum=0;
    printf("Enter the min number:");
    scanf("%d", &min);

    printf("Enter the max number:");
    scanf("%d", &max);

    for(int i=min; i<=max;i++){
        sum+=i;
    }
    printf("The sum =%d",sum);
return 0;
}
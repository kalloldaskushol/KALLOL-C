#include<stdio.h>

int main(){
    // print the numbers from 0 to n; n is given by the user
    int n;
    printf("Enter your number=");
    scanf("%d", &n);

    int i = 0;
    while(i <=n ){
    printf("i = %d \n",i);
    i++;
    }

    // print the sum of first n natural numbers
    int k,sum=0;
    printf("Enter your number=");
    scanf("%d", &k);

    for(i=1;i <=k; i++){
        sum += i;
    }
    printf("%d\n",sum);

    for(i = k; i >= 0;i--){
        printf("%d\n", i);
    }

    //Print he table of number givrn by the user

    int l;
    printf("Enter the table you want=");
    scanf("%d",&l);

    for(int i = 1;i<=10;i++){
        printf("%d\n",i*l);
    }

return 0;
}
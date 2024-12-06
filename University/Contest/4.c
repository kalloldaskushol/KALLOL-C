#include<stdio.h>

int main(){

    int M,N,sum=0;
    scanf("%d", &N);
    scanf("%d", &M);

    for(int i=M;i<=N;i=i+M){
        sum=sum+i;
    }
    printf("%d\n",sum);
return 0;
}
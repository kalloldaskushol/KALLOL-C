#include<stdio.h>
int stair_path_2Way(int n){
    if(n==1 || n==2) return n;
    return stair_path_2Way(n-1) + stair_path_2Way(n-2);
}

int stair_path_3Way(int n){
    if(n==1 || n==2) return n;
//stair_path(3) should return 4 (as there are four ways: 
// 1+1+1 --------> 1st way,
// 1+2-----------> 2nd way
// 2+1 ---------> 3rd way
// 3 ----------> 4th way
    if(n==3) return 4;

    return stair_path_3Way(n-1) + stair_path_3Way(n-2) +  stair_path_3Way(n-3);
}

int main(){

    printf("stair_path_2Way\n%d \n", stair_path_2Way(5));

    printf("stair_path_3Way\n%d \n", stair_path_3Way(4));

return 0;
}
#include<stdio.h>
// The condition can be any valid expression. 
// In C a non-zero value is considered to be true.
// Zero(0) is considered as false

int main(){

    if(1){
        printf("The Condition is non-zero thats why its exxecuted-....1!\n");
    }

    if(1256){
        printf("The Condition is also non-zero thats why its exxecuted-....2!\n");
    }
    if(31.03){
        printf("The Condition is also non-zero & Float thats why its exxecuted-....3!\n");
    }
    if('H'){
        printf("The Condition is also non-zero & Char thats why its exxecuted-....4!\n");
    }
    if(0){
        printf("Its zero so it will not be exxecuted!!!!\n");
    }
return 0;
}
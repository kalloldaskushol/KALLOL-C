/*
i++ → i is increased by 1
i-- → i is decreased by 1
*/
#include<stdio.h>

int main(){

    // i++ prints i first and then increments i -> post increment operator
    // ++i incriments i first then prints i -> pre increment operator
    int i = 0;
    printf("The value of i = %d\n",i++);
    printf("The value of i = %d\n",i);

    // --i is called pre decrement operator 
    // it first decreases the value after that it prints it.

    //i-- is called post decrement operator 
    //it prints first and then it decreases the value
    int j = 5;
    printf("The value of i = %d\n",j--);
    printf("The value of i = %d\n",j);


return 0;
}
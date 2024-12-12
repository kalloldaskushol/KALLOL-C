#include<stdio.h>
/*
CONDITIONAL INSTRUCTIONS

•if–else statement
•switch statement

if–else statement SYNTEX->

if (condition_to_be_checked){
    // Statements if condition is true 
    }
else { 
    // Statements if condition is false 
    }

Note:that else block is not necessary but optional.
*/

int main(){

    int age;
    printf("Enter Your Age:");
    scanf("%d",&age);

    if(age>18){
        printf("You Can Vote!!");
    }
    else{
        printf("Sorry! Your Under age....");
    }

return 0;
}
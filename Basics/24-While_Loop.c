/*
While loop SYNTEX ->

initialization the veriable 

while(condition){
    //working codes

    updation
}

*/

#include<stdio.h>

int main(){

    int i = 0; //initialization

    while ( i <= 10){
        printf("Happy Birthday Krishna\n");

        i++;
    }

    int j = 0;
    while(j<10){
        printf("The value of i is %d. \n",j);
        j++;
    }
printf("END\n");
    // Note: If the condition never becomes false, the while loop keeps getting executed. Such loop is known as an infinite loop.

    //Quiz ->
    /*Write a program to print natural numbers from 10 to 20 when initial loop counter is initialized to 0.*/


    int k = 0;
    while(k<=20){
        if(k>=10){
            printf("The value of k is %d \n",k);
        }
        k++;
    }
return 0;
}   
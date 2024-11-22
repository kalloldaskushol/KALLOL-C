/*
for loop syntex ->

for(initialisation;condition;updation){
    codes to do
    }

    i -> iteretor or counter
    we can also use a float or charecter value as iteretor

    infinite Loop -> a loop has no end-no codition
*/
#include<stdio.h>

int main(){

    for(int i = 1;i<= 100; i +=1){
        printf("i = %d Hare Krishna\n",i);
    }
    printf("END\n");

    for(int i =10; i>=1; i-=1){ //REVERSE LOOP
        printf("%d\n",i);
    }
    printf("END\n");

    //Print number from 1-10
    for(int i = 0 ; i <= 10 ; i++){
        printf("%d\n",i);
    }

return 0;
}
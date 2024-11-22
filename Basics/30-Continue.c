#include<stdio.h>

int main(){

    // The ‘continue’ statement is used to immediately move to the next iteration of the loop.
    // The control is taken to the next iteration thus skipping everything below “continue” inside the loop for that iteration.
    // continue means to skip the current iteration and start after it.

    /*
    for(int i=1; i<=5; i++){
        if(i == 3){
            continue;    
        }
        printf("%d",i);
    }
    it will give us the output without the 3rd one means the output will be 1245
    */
   //Print all numbers from 1-10 except for 6

   for(int i=1; i<=10; i++){
        if(i == 6){
            continue;
        }
        printf("i = %d\n", i);
   }

//print odd numbers from 5-50
   for(int i=1;i<=50;i++){
        if(i%2 == 0){
            continue;
        }
        printf("i = %d\n", i);
   }


return 0;
}
#include<stdio.h>

int main(){

    /* 
    do while loop syntex->
    
    do {
    working codes
    updation 
    }
    while(condition);
    */
   // in this case the work is done first then the condition will be checked..
   int i = 0;
   do{
    printf("%d\n" ,i);
    i++;
   }while(i <= 5);
return 0;
}
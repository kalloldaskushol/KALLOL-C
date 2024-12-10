#include<stdio.h>

int main(){

        int n;
            /*
    6.At Least Once
    Write a program that asks the user to enter a number and prints "Hello!" that many times using a do-while loop.
*/     
    printf("Enter Number:");
    scanf("%d", &n);

    do{
        if(n==0) break;
        printf("Hello\n");
        n--;
    } while (n!=0);
    

        int password = 1234;
      do{
        printf("Enter Password:");
        scanf("%d", &n);
        if(n == password) break;
        printf("Try again\n");
      }while(1);
    
      printf("You got right!!!!!!!!!!!!");




return 0;
}

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>
int main(){
/*    // print the numbers from 0 to n; n is given by the user
    int n;
    printf("Enter your number=");
    scanf("%d", &n);

    int i = 0;
    while(i <=n ){
    printf("i = %d \n",i);
    i++;
    }

    // print the sum of first n natural numbers
    int k,sum=0;
    printf("Enter your number=");
    scanf("%d", &k);

    for(i=1;i <=k; i++){
        sum += i;
    }
    printf("%d\n",sum);

    for(i = k; i >= 0;i--){
        printf("%d\n", i);
    }

    //Print he table of number givrn by the user

    int l;
    printf("Enter the table you want=");
    scanf("%d",&l);

    for(int i = 1;i<=10;i++){
        printf("%d\n",i*l);
    }

*/
// int main()

    int n, i = 1, sum = 0, fact = 1;
    // 1.Print Squares
    // Write a program using a for loop to print the squares of the first 10 natural numbers.

    // for(int i=1;i<=10;i++){
    //     printf("%d square is=%d\n",i,i*i);
    // }

    /*2.Factorial Calculation
    Write a program to calculate the factorial of a number using a for loop.

    printf("\nEnter Number for factorial:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is=%d \n", n, fact);
*/

//3.Sum Until Zero
//Write a program that keeps asking the user for numbers and adds them until the user enters 0. Use a while loop.
/*
    while(true){
        if (n == 0)
            break;
        printf("Enter Number:");
        scanf("%d", &n);
        sum = sum + n;
    }
    printf("%d", sum);
*/
/*
4.Number Reversal
Write a program to reverse the digits of a number entered by the user (e.g., input: 123 → output: 321). Use a while loop.

    printf("Enter Number:");
    scanf("%d", &n);
    while (n != 0)
    {
        int a = n % 10;
        printf("%d", a);
        n = n / 10;
    }
*/
    // 5.Guess the Number
// Write a program where the user guesses a predefined number. Use a while loop to keep asking until the correct number is entered.
    
/*    
    srand(time(0));
    
    
    // int randomNumber = (rand() % (upper - lower + 1)) + lower;
    // (rand() % 101) generates a number between 0 and 100,
    //  +100 will give me a number which is greater than 100
    int randomNumber = (rand() % (200-100+1)) + 100;
    printf("%d",randomNumber);

    int guesNumber;
    while(guesNumber!=randomNumber){
        printf("Enter guess Number:");
        scanf("%d", &guesNumber);
    if(guesNumber==randomNumber) break;
    else if (guesNumber>randomNumber) printf("High guess\n");
    else if (guesNumber<randomNumber) printf("Low Guess!\n");
    }
    printf("Cong!!!!!!!!!!!!Right guess\n");
*/
    /*
    6.At Least Once
    Write a program that asks the user to enter a number and prints "Hello!" that many times using a do-while loop.
     
    printf("Enter Number:");
    scanf("%d", &n);

    do{
        if(n==0) break;
        printf("Hello\n");
        n--;
    } while (n!=0);
    
   /*
   7.Positive Sum
Write a program to repeatedly ask the user for positive numbers and calculate their sum. Stop asking when the user enters a negative number. Use a do-while loop.


    do{
        printf("Enter Number:");
        scanf("%d", &n);
        // if(n<0) break;
        sum+=n;
    }
    while(n>=0);// if n=-5 _____ sum = 5
    printf("%d",sum-n);// 5-(-5) === 5+5 =10
       */
/*8.Password Check
Write a program that asks the user to input a password until the correct password (predefined in the code) is entered. Use a do-while loop.
*/      int password = 1234;
      do{
        printf("Enter Password:");
        scanf("%d", &n);
        if(n == password) break;
        printf("Try again\n");
      }while(1);
      printf("You got right!!!!!!!!!!!!");

return 0;
}
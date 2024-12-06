#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include <time.h>

int main()
{
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


    return 0;
}
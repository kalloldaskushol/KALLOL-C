#include <stdio.h>

int main()
{

    /*
    1.What will be the output of this program:

    int a = 10;
    if (a = 11)
        printf("I am 11");
    else
        printf("I am not 11");
    */
    int A = 10;
    if (A = 11)
        printf("I am 11 \n");
    else
        printf("I am not 11");

    // in the program we have use single = which is a assignment operator
    //  this is a non zero number so it is true so the if condition will be applied
    //  on the other hand if we had used == which is used for equality check it would gave the else statement

    /*2.
    Write a program to determine whether a student has passed or failed.
    To pass, a student requires a total of 40% and at least 33% in each subject.
    Assume there are three subjects and take the marks as input from the user.*/

    int marks1, marks2, marks3;
    printf("Enter mark1:");
    scanf("%d", &marks1);
    printf("Enter mark2:");
    scanf("%d", &marks2);
    printf("Enter mark3:");
    scanf("%d", &marks3);

    if (marks1 < 33 || marks2 < 33 || marks3 < 33)
    {
        printf("you are failed due to indivisual subject less marks");
    }
    else if ((marks1 + marks2 + marks3) / 3 < 40)
    {
        printf("you are failed due to total marks is less then  40%");
    }

    /*
    3.Calculate income tax paid by an employee to the government
     as per the slabs mentioned below:
    Income Slab Tax
    2.5 – 5.0L 5%
5.0L - 10.0L 20%
Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.*/

    float income;
    printf("\nEnter your income=");
    scanf("%f",&income);
    float tax = 0;
    
    if(income <= 250000){
        tax = 0;
    }

    else if(income > 250000 && income <= 500000){
        tax = 0.05 * (income-250000); // NO tax on 1st 250000 
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax = 0.05 * (500000-250000) + 0.2*(income - 500000);
    }
    else {
        tax = 0.05 * (500000-250000) +0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
    }
    printf("Your tax ammount is =%.2f\n",tax);

    //4.Write a program to find whether a year entered by the user is a leap year or not. Take year as an input from the user.

    // A leap year is if the year number is
    // 1. divisable by 4 and not devisible by 100 
    // 2. divisible by 400 

    int year;
    printf("Enter the year = ");
    scanf("%d", &year);

    if (year % 4 == 0 && year %100 != 0 ){
        printf("WOW!!! Its a leap year\n");
    }

    else if (year % 400 == 0){
        printf("WOW!!! It's a leap year\n");
    }
    else {
        printf("This is not a leap year!!! \n");
    }
    
    // 5.Write a program to determine whether a character entered by the user is lowercase or not.
    
    // Every letter has a integer value of its own which is called ASCII value,, we can solve the problem by this

    char ch = 'a';
    if (ch >= 'a' && ch <= 'z'){
        printf("The charecter is a lowercase charecter\n");
    }    

    else if ( ch >= 'A' && ch <= 'Z'){
        printf("The charecter is a Uppercase charecter\n");
    }
    else{

        printf("Not English letter\n");

    }

    // 6.Write a program to find greatest of four numbers entered by the user.
    int a=1,b=2,c=3,d=4;
    if (a>b && a>c && a>d){
        printf("The greatest of all is %d\n",a);
    }
    else if (b>a && b>c && b>d){
        printf("The greatest of all is %d\n",b);
    }
    else if (c>a && c>b && c>d){
        printf("The greatest of all is %d\n",c);
    }
    else if (d>a && d>c &&d>b){
        printf("The greatest of all is %d\n",d);
    }



    return 0;
}
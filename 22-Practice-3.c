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
       int a = 10;
    if (a = 11) 
        printf("I am 11 \n");
    else 
        printf("I am not 11");
    
    //in the program we have use single = which is a assignment operator 
    // this is a non zero number so it is true so the if condition will be applied
    // on the other hand if we had used == which is used for equality check it would gave the else statement


/*2.
Write a program to determine whether a student has passed or failed.
To pass, a student requires a total of 40% and at least 33% in each subject. 
Assume there are three subjects and take the marks as input from the user.*/

    int marks1,marks2,marks3;
    printf("Enter mark1:");
    scanf("%d", &marks1);
    printf("Enter mark2:");
    scanf("%d", &marks2);
    printf("Enter mark3:");
    scanf("%d", &marks3);

    if(marks1<33 || marks2<33 || marks3<33){
        printf("you are failed due to indivisual subject less marks");}
    else if((marks1+marks2+marks3)/3 < 40){
        printf("you are failed due to total marks is less then  40%");}

return 0;
}
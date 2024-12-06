#include<stdio.h>

int main(){
// 1
    // int num;
    // printf("Enter the number:");
    // scanf("%d", &num);
    
    // if(num % 2==0) printf("Even\n");
    // else printf("Odd\n");

// 2
    // int num1,num2;
    // printf("\nEnter 1st number:");
    // scanf("%d", &num1);

    // printf("\nEnter 2nd number:");
    // scanf("%d", &num2);

    // if(num1>num2) printf("Number 1 is maximum");
    // else printf("Number 2 is maximum");
// 3
    // int num;
    // printf("Enter the number:");
    // scanf("%d", &num);

    // if(num == 0 ) printf("The given number is zero.\n");
    // else if (num > 0) printf("The given number is positive.\n");
    // else printf("The given number is negative.\n");
// 4
    // int year;
    // printf("Enter the Year:");
    // scanf("%d", &year);

    // if( (year%4==0 && year%100!=0) || (year%400==0) ) printf
    // ("Leap Year\n");

    // else printf("Not a Leap year\n");

// 6
    // char ch;
    // printf("Enter the char:");
    // scanf("%c", &ch);

    // if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
    //     ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') printf("Vowel \n");

    // else if((ch>='a' && ch <='z') || (ch>='A' && ch <='Z')) printf("Consonant \n");

    // else printf("others\n");

// 7
    // int a,b,c;
    // printf("Enter the angle:");
    // scanf("%d %d %d", &a , &b, &c);

    // if(a+b+c == 180) printf("VALID!");
    // else printf("Not VALID!!!");

// 7 
    // int a,b,c;
    // printf("Enter the value:");
    // scanf("%d %d %d", &a , &b, &c);

    // if(a+b > c) printf("VALID");
    // else if (c+b > a) printf("VALID");
    // else if (c+a > b) printf("VALID");
    // else printf("Not VALID");

// 8
    // int num;
    // printf("Enter the number:");
    // scanf("%d", &num);

    // if(num<0) printf("absolute value %d", -1*num);
    // else printf("absolute %d",num);
// 9
    // int unit;
    // float bill = 0.00;

    // printf("Enter the unit value");
    // scanf("%d", &unit);

    // if(unit<=100) bill = unit * 1.50;
    // else if(unit<=200) bill = (100*1.50) + (unit-100)*2.00;
    // else bill = ((100*1.50) + (100*2.00)+ (unit-200)*3.00);

    // printf("%.2f Taka",bill);

// 10

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c) {
        printf("a is greatest");
    }
     else if(b>a && b>c){
      printf("b is greatest");
     }
     else printf("c is greatest");
return 0;
}
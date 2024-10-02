
#include<stdio.h>

int main(){

    // The ‘break’ statement is used to exit the loop irrespective of whether the condition is true or false.
    // Whenever a “break” is encountered inside the loop, the control is sent outside the loop

    /*
    for(int i=1; i<=5; i++){
        if(i==2){
            break
        }
        printf("%d",i);
        }
    
    the loop was suppose to run from 1 to 5 but there is a break statement inside it which has i == 2 condition thats why the loop will face a break when i will be equal to 2.
    so the output will be 1
    */

   // Keep taking numbers as input from the user until the user enters an odd number.

    int n;
   for(int i=0; ;i++){
        printf("Enter the number=");
        scanf("%d", &n);

        if(n%2!=0){
            printf("Opps! you enterd an odd number.So i'm breaking the loop. Good luck!!!\n");
            break;
        }
        else{
            printf("the number you enterd is even %d\n",n);
        }
   }
// same code can be done by do while loop
do{
    printf("Enter an even number=");
    scanf("%d", &n);

    if(n%2!=0)
        printf("Opps! you enterd an odd number.So i'm breaking the loop. Good luck!!!\n");
        break;

}while(1);//while condition 1 means its always true...

//keep taking numbers as input until user inputs a number which is multiple by 7

do{
    printf("Enter a number which is not multiple of 7=");
    scanf("%d", &n);

    if(n%7==0)
        printf("Opps! your enterd number which is a multiple of 7.So i'm breaking the loop. Good luck!!!\n");
        break;

}while(1);
// break can exit form nested loop also

return 0;
}
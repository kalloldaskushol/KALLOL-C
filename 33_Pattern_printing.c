/* print the output->

*****
*****
*****
*****

*/
#include<stdio.h>

int main(){

    //this is a sqaure pattern with 4by4 row and column
    int n = 4;
    for(int row = 1;row<=n;row++){
        for(int col=1;col<=n;col++){
            printf("* ");
        }
        printf("\n");
    }


// The first for means row when we are in row 1 the loop enters in 2nd loop means it enters in the colomn and in the 2nd loop the command is to print * it happens thats how after printing 5 asterisks the 2nd loops ends for the 1st time and then 2nd row starts. then 3rd ......


/*
* 
* * 
* * * 
* * * *


if we look at this pattern then we can see that how far the colomn will print is the same as the row number. example in the 3rd time the coloum will stop at 3, at 4th time the colomn will run for 4 times thats why in the 2nd loop or colomn loop we have to set the stopping condition to the number of rows
*/



    int k;
    printf("Enter number =");
    scanf("%d", &k);
    for(int row = 1;row<=k;row++){
        for(int col=1;col<= row ;col++){
            printf("* ");
        }
        printf("\n");
    }
return 0;
}
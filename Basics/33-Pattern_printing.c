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
    for(int row = 1;row<=n;row++){ // Outer loop - no of lines
        for(int col=1;col<=n;col++){ // Inner loop - no of stars in each lines
            printf("* ");
        }
        printf("\n");
    }
printf("END\n");

// The first for means row when we are in row 1 the loop enters in 2nd loop means it enters in the colomn and in the 2nd loop the command is to print * it happens thats how after printing 5 asterisks the 2nd loops ends for the 1st time and then 2nd row starts. then 3rd ......


/*
* 
* * 
* * * 
* * * *


if we look at this pattern then we can see that how far the colomn will print is the same as the row number. example in the 3rd time the coloum will stop at 3, at 4th time the colomn will run for 4 times thats why in the 2nd loop or colomn loop we have to set the stopping condition to the number of rows
*/
    int b = 5;
    // printf("Enter number =");
    // scanf("%d", &b);
    for(int row=1;row<=b;row++){
        for(int col=1;col<=row;col++){
            printf("* ");
        }
        printf("\n");
    }

//  reverse pattern program
// #include<stdio.h>
// int main(){
    int i = 5;
    // printf("Enter pattern:");
    // scanf("%d",&i);
    for(int row=1;row<=i;row++){
        for(int col=i;col>=row;col--){
            printf("* ");
        }
    printf("\n");
    }

/*
1234
1234
1234
1234
*/
int s = 4;
for(int row = 1; row<=s; row++){
    for(int col=1; col <= s;col++){
        printf("%d",col); // Col has the same value.
    }
    printf("\n");
}

printf("END\n");
/*
1
13
135
1357
*/
int l = 4;
for(int row = 1; row<=l; row++){
    int num=1;
    for(int col=1;col<=row;col++){
        printf("%d ",num);
        num = num + 2;
    }
    printf("\n");
} 
printf("END\n");

/*
ABCD
ABCD
ABCD
ABCD
*/
// char q = 'A';
for(int row=1; row<=l;row++){
    for(int col= 1; col<=l; col++){
        printf("%c ",col + 64 );
    }
    printf("\n");
}
/*
A
AB
ABC
ABCD
*/
for(int row=1; row<=l;row++){
    for(int col= 1; col<=row; col++){
        printf("%c ",col + 64 );
    }
    printf("\n");
}
/*
##*##
##*##
*****
##*##
##*##
*/
n=5;
for(int row=1;row<=n;row++){
    for(int col=1;col<=n;col++){
        if(col == (n/2)+1 || row==(n/2)+1) printf("*");
        else printf("#");
    }
    printf("\n");
}
/*
  *  
  *  
*****  
  *  
  *  
*/
n=5;
for(int row = 1 ; row<=n;row++){
    for(int col = 1; col<=n; col++){
        if(row == (n/2)+1 || col == (n/2)+1) printf("*");
        else printf(" ");
    }
    printf("\n");
}

/*
###*
##**
#***
****
*/

n = 4;
for(int row=1;row<=n;row++){
    for(int col=1;col<=n-row;col++){ //hash and row number sum is always 4. row + col = 4
    // col = n - row
        printf("#");
    }
    for(int star = 1; star<=row; star++){
        printf("*");
    }
    printf("\n");
}
/*
   *
  **
 ***
****
*/
n = 4;
for(int row=1;row<=n;row++){
    for(int col=1;col<=n-row;col++){ //Spaes and row number sum is always 4. row + col = 4
    // col = n - row
        printf(" ");
    }
    for(int star = 1; star<=row; star++){
        printf("*");
    }
    printf("\n");
}

/*
*
***
*****
*******
*********
*/
n = 5;
for(int row =1;row<=n;row++){
    for(int col=1;col<=(2*row-1);col++){
        printf("*");
    }
    printf("\n");
}
/*   
    *
   ***
  *****
 *******
*********
*/
n = 5;
for(int row =1;row<=n;row++){
    for(int col=1;col<=n-row;col++){
        printf(" ");
    }
    for(int col=1;col<=(2*row-1);col++){
        printf("*");
    }
    printf("\n");
}
/*
    1
   123
  12345
 1234567
123456789
*/
n = 5;
for(int row =1;row<=n;row++){
    for(int col=1;col<=n-row;col++){
        printf(" ");
    }
    for(int col=1;col<=(2*row-1);col++){
        printf("%d",col);
    }
    printf("\n");
}
/*
    A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI
*/
n = 5;
for(int row =1;row<=n;row++){
    for(int col=1;col<=n-row;col++){
        printf(" ");
    }
    for(int col=1;col<=(2*row-1);col++){
        printf("%c",col + 64);
    }
    printf("\n");
}
    return 0;
}
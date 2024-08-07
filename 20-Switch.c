
#include<stdio.h>
/*
switch-case is used when we have to make a choice between number of alternatives for a given variable.*/
int main(){

    int a;
    printf("Enter a = ");
    scanf("%d", &a);

    switch(a){
        case 1:
            printf("You entered 1\n");
        case 2:
            printf("You entered 2\n");
        case 3:
            printf("You entered 3\n");
        case 4:
            printf("You entered 4\n");
        default:
            printf("Nothing Matched\n");

    }
// in this program it will not run properly if we add 1
// then all line will exicute all lines 
// to solve this we have to use break statement
    int b;
    printf("Enter b = ");
    scanf("%d", &b);

    switch(b){
        case 1:
            printf("You entered 1\n");
            break;
        case 2:
            printf("You entered 2\n");
            break;
        case 3:
            printf("You entered 3\n");
            break;
        case 4:
            printf("You entered 4\n");
            break;
        default:
            printf("Nothing Matched\n");
            break;
    }
return 0;
}
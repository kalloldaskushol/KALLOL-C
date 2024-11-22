/*Instead of using multiple if statements,
 we can also use else if along with it
 thus forming an if-else if-else ladder.
*/
#include<stdio.h>

int main(){

    int age;
    printf("Enter your age = ");
    scanf("%d", &age);

    if(age<=10){
        printf("The User is a child\n");
    }
    else if(age<=17){
        printf("The User is a teenager\n");
    }
    else if(age>=18){
        printf("The User is a Adult\n");
    }
    else{
        printf("none");
    }
/*
1.Using if-else if -else reduces indents.
2.The last “else” is optional.
3.Also there can be any number of “else if”.
4.Last else is executed only if all conditions fail.
*/

return 0;
}
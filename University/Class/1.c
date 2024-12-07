#include <stdio.h>
// Write  program by implementing add(),sub(),multi(),div() these 4 function
// Take 2  inputs from user and perform + , -, *, / operations  using these functions
int add(int a, int b){
    int c = a + b;
    return c;
}
int sub(int a, int b){
    int c = a - b;
    return c;
}
int mul(int a, int b){
    int c = a * b;
    return c;

}
float div(int a, int b){
    float c = (float)a/(float)b;
    return c;

}

int main(){
    int a;
    int b;
    char x;
    printf("\nEnter 1st number :");
    scanf(" %d", &a);
    printf("\nEnter 2nd number :");
    scanf("%d", &b);
    printf("\nEnter what you want + or - or / or *:");
    scanf("%c", &x); // why!!!!!!!!!!!!!!!!

    if (x == '+'){
        printf("result = %d",add(a,b));
    }
    else if (x == '-'){
        printf("result = %d",sub(a,b));
    }
    else if (x == '*'){
        printf("result = %d",mul(a,b));
    }
    else if (x == '/'){
        printf("result = %f",div(a,b));
    }
    else{
        printf("wrong input");
    }
    return 0;
}
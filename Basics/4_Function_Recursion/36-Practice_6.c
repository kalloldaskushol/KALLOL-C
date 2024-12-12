#include <stdio.h>
// write two functions one to print hello another to print goodbye.
void printHello(){
    printf("Hello\n");
}
void goodbye(){
    printf("Goodbye\n");
}
// WA function that prints namaste if the user is Indian & Bonjour if the user is French
void namaste(){
    printf("namaste! \n");
}
void bonjur(){
    printf("Bonjur\n");
}

int main()
{
    printHello();
    goodbye();

    char a; 
    printf("enter your language name(I/F):");
    scanf("%s",&a);

    if(a == 'I'){
        namaste();
    }
    else if(a == 'F'){
        bonjur();
    }
    else {
        printf("WRONG INPUT!!!");
    }


    return 0;
}
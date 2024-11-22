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

    double a; 
    printf("enter your language name(Indian/French):");
    scanf("%s",&a);



    return 0;
}
#include<stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("Read_File.txt" , "r");

    printf("%c \n", fgetc(fptr));
    printf("%c \n", fgetc(fptr));
    printf("%c \n", fgetc(fptr));
    printf("%c \n", fgetc(fptr));
    printf("%c \n", fgetc(fptr));
    fclose(fptr);

return 0;
}
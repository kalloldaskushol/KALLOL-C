#include<stdio.h>
// fputc & fgetc only works for character data type
int main(){

    FILE *fptr;
    fptr = fopen("fputc.txt", "w");
    fputc('A', fptr);
    fputc('A', fptr);
    fputc('A', fptr);
    fputc('A', fptr);
    fputc('A', fptr);

    fclose(fptr);
return 0;
}
#include<stdio.h>

int main(){

    FILE *fptr ;
    fptr  = fopen("write file by write function.txt", "w");
    // w will dlt all the data and write newly
    fprintf(fptr, "%c", 'H');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'R');
    fprintf(fptr, "%c", 'E');
    fprintf(fptr, "%c", ' ');
    fprintf(fptr, "%c", 'K');
    fprintf(fptr, "%c", 'R');
    fprintf(fptr, "%c", 'I');
    fprintf(fptr, "%c", 'S');
    fprintf(fptr, "%c", 'H');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'A');
fclose(fptr);
    FILE *ffptr;
    ffptr = fopen("write file by append function.txt", "a");
    //it is used to rewrite the file after keeping the existing file.

    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'E');
    fprintf(fptr, "%c", 'W');

return 0;
}
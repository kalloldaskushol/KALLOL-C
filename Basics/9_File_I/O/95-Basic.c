#include<stdio.h>
/*
File - Container in a storage device to strong data
-RAM is a volatile memory
-Contects are lost when program terminates
-File are used to persist the data

Operations on file:-
Creation of a new file (fopen with attributes as “a” or “a+” or “w” or “w+”).
Opening an existing file (fopenopen).
Reading from file (fscanf or fgets).
Writing to a file with fprintf or fputs.
Closing a file (fclose).

Types of files
1.text file
    tectual data, like .txt, .c
2.Binary files
    .exe, .mp3, .jpg
*/
int main(){

    /*
    FILE is a (hidden) structure that needs to be created for opening a file.
    A FILE ptr that points to this structure & is used to access the file.
For opening a file
    FILE *fptr;
    fptr = fopen("filename", mode);

Closing a file
    fclose(fptr);

File Opening modes
    "r" open to read
    "rb" open to read in binary
    "w" open to write
    "wb" open to write in binary
    "a" open to append
    */

return 0;
}
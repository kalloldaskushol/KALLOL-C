#include<stdio.h>
/*
scanf cannot input multi word string with spaces.

for this limitation we use gets to take input a string with spaces
and puts to print string with spaces. it adds a nextline in the end.

The gets() function in C is considered unsafe because it does not perform bounds checking on the input, making it vulnerable to buffer overflow vulnerabilities. This is a serious security risk that can lead to memory corruption, crashes, and potential exploits.

for this reason we use (fgets) function

fgets(str_name, str_lenth, file)

it stops when n-1 cgars input is done bcz \0 will be the last. It also stops when a new line is entered.
*/
int main(){

    char fullname[100];
    fgets(fullname, 100, stdin);
    puts(fullname);

return 0;
}
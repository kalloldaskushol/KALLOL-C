#include<stdio.h>
#include<string.h>
/*
Why is strcspn Used?
When you use fgets() to input a string, it includes the newline character (\n) at the end of the input if there is space in the buffer. This newline can cause issues in processing the string later (e.g., string comparison, concatenation, or output).

strcspn helps by finding the position of the newline character so you can replace it with a null terminator (\0), effectively removing the newline.

strcspn(const char *str, const char *reject);

*/
int main(){

    char name[100];
    printf("Enter name:");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; // Remove \n by replacing it with '\0'
    printf("Your name is %s", name);


return 0;
}
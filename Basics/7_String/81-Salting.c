#include<stdio.h>
#include<string.h>
/*
Salting is a way to make passwords more secure by adding a random piece of information (called a salt) to the password before storing it. 

user password = test
new password = testXYZ
this adding of XYZ is called salting
*/
int main(){

    // Find a salted form of a password entered by the user if the salt is "123" & added at the end.
    char password[100];
    printf("Enter the password:");
    scanf("%s", &password); // we used %s and scanf bcz we have to avoid space..

    char salt[] = "123";
    strcat(password, salt);
    printf("Salted password is:");
    puts(password);

return 0;
}
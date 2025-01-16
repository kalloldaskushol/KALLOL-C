#include<stdio.h>
// In C, when using scanf with the %s format specifier, we don't use the address-of operator (&) because the argument passed for %s is already a pointer.
int main(){

    char firstName[100];
    printf("Enter your first name:");
    scanf("%s",     firstName);
    printf("The name is %s", firstName);


return 0;
}